#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Zegar czasu rzeczywistego
    clockTimer = new QTimer(this);
    connect(clockTimer, &QTimer::timeout, this, &MainWindow::updateClock);
    clockTimer->start(1000);
    updateClock();

    // Minutnik
    countdownTimer = new QTimer(this);
    connect(countdownTimer, &QTimer::timeout, this, &MainWindow::updateCountdown);

    // Połączenia przycisków
    connect(ui->buttonSetAlarm, &QPushButton::clicked, this, &MainWindow::setAlarm);
    connect(ui->buttonDeleteAlarm, &QPushButton::clicked, this, &MainWindow::deleteSelectedAlarm);
    connect(ui->buttonStartTimer, &QPushButton::clicked, this, &MainWindow::startCountdown);
    connect(ui->buttonPauseTimer, &QPushButton::clicked, this, &MainWindow::toggleCountdown);
    connect(ui->buttonResetTimer, &QPushButton::clicked, this, &MainWindow::resetCountdown);
}

MainWindow::~MainWindow()
{
    // Zwolnij wszystkie alarmy (klasyczna pętla)
    for (int i = 0; i < alarms.size(); ++i) {
        delete alarms[i];
    }
    alarms.clear(); // dodatkowo wyczyść listę

    delete ui;
}

void MainWindow::updateClock()
{
    QTime now = QTime::currentTime();
    ui->labelClock->setText(now.toString("HH:mm:ss"));
    checkAlarms();
}

void MainWindow::setAlarm()
{
    QDateTime alarmDateTime = QDateTime(ui->dateEditAlarm->date(), ui->timeEditAlarm->time());

    if (alarmDateTime <= QDateTime::currentDateTime()) {
        QMessageBox::warning(this, "Błąd", "Nie można ustawić alarmu w przeszłości.");
        return;
    }

    auto *alarm = new AlarmEvent(alarmDateTime, "Twój alarm");
    alarms.append(alarm);
    ui->listWidgetAlarms->addItem(alarmDateTime.toString("yyyy-MM-dd HH:mm"));
    QMessageBox::information(this, "Alarm", "Alarm ustawiony.");
}

void MainWindow::deleteSelectedAlarm()
{
    int row = ui->listWidgetAlarms->currentRow();
    if (row >= 0 && row < alarms.size()) {
        delete alarms[row];
        alarms.removeAt(row);
        delete ui->listWidgetAlarms->takeItem(row);
    }
}

void MainWindow::checkAlarms()
{
    QDateTime now = QDateTime::currentDateTime();
    for (int i = 0; i < alarms.size(); ++i) {
        if (alarms[i]->getDateTime() <= now) {
            alarms[i]->trigger();
            delete alarms[i];
            alarms.removeAt(i);
            delete ui->listWidgetAlarms->takeItem(i);
            --i;
        }
    }
}

// --- Minutnik ---

void MainWindow::startCountdown()
{
    countdownSeconds = ui->spinBoxTimer->value();
    if (countdownSeconds > 0) {
        countdownRunning = true;
        countdownTimer->start(1000);
        updateCountdownDisplay();
        ui->buttonPauseTimer->setText("Pauza");
    }
}

void MainWindow::toggleCountdown()
{
    if (countdownRunning) {
        countdownTimer->stop();
        countdownRunning = false;
        ui->buttonPauseTimer->setText("Wznów");
    } else {
        if (countdownSeconds > 0) {
            countdownTimer->start(1000);
            countdownRunning = true;
            ui->buttonPauseTimer->setText("Pauza");
        }
    }
}

void MainWindow::resetCountdown()
{
    countdownTimer->stop();
    countdownRunning = false;
    countdownSeconds = 0;
    ui->labelTimerDisplay->setText("00:00");
    ui->buttonPauseTimer->setText("Pauza");
}

void MainWindow::updateCountdown()
{
    if (--countdownSeconds <= 0) {
        countdownTimer->stop();
        countdownRunning = false;
        ui->labelTimerDisplay->setText("00:00");
        QMessageBox::information(this, "Minutnik", "Minutnik zakończony!");
    } else {
        updateCountdownDisplay();
    }
}

void MainWindow::updateCountdownDisplay()
{
    int minutes = countdownSeconds / 60;
    int seconds = countdownSeconds % 60;
    ui->labelTimerDisplay->setText(QString("%1:%2")
                                       .arg(minutes, 2, 10, QChar('0'))
                                       .arg(seconds, 2, 10, QChar('0')));
}

