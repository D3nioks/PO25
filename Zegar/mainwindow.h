#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <QList>
#include "alarmevent.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateClock();
    void setAlarm();
    void deleteSelectedAlarm();
    void startCountdown();
    void updateCountdown();
    void toggleCountdown();
    void resetCountdown();

private:
    Ui::MainWindow *ui;

    QTimer *clockTimer;
    QTimer *countdownTimer;
    QList<TimeEvent*> alarms;
    int countdownSeconds = 0;
    bool countdownRunning = false;

    void checkAlarms();
    void updateCountdownDisplay();
};

#endif // MAINWINDOW_H
