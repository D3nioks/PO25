// mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Timer odświeżający co 1 sekundę
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateClock);
    timer->start(1000);  // co 1000 ms = 1 sekunda

    updateClock();  // natychmiastowe ustawienie godziny
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateClock()
{
    QTime time = QTime::currentTime();
    QString timeText = time.toString("hh:mm:ss");
    ui->labelClock->setText(timeText);  // zakładamy że masz QLabel o nazwie labelClock
}
