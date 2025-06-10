/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTimeEdit *timeEditAlarm;
    QPushButton *buttonSetAlarm;
    QSpinBox *spinBoxTimer;
    QPushButton *buttonStartTimer;
    QLabel *labelClock;
    QPushButton *buttonDeleteAlarm;
    QListWidget *listWidgetAlarms;
    QDateEdit *dateEditAlarm;
    QPushButton *buttonPauseTimer;
    QPushButton *buttonResetTimer;
    QLabel *labelTimerDisplay;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(790, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(790, 550));
        MainWindow->setMaximumSize(QSize(790, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(790, 550));
        centralwidget->setMaximumSize(QSize(790, 550));
        centralwidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        timeEditAlarm = new QTimeEdit(centralwidget);
        timeEditAlarm->setObjectName("timeEditAlarm");
        timeEditAlarm->setGeometry(QRect(20, 490, 281, 29));
        buttonSetAlarm = new QPushButton(centralwidget);
        buttonSetAlarm->setObjectName("buttonSetAlarm");
        buttonSetAlarm->setGeometry(QRect(20, 450, 141, 29));
        spinBoxTimer = new QSpinBox(centralwidget);
        spinBoxTimer->setObjectName("spinBoxTimer");
        spinBoxTimer->setGeometry(QRect(510, 480, 181, 29));
        buttonStartTimer = new QPushButton(centralwidget);
        buttonStartTimer->setObjectName("buttonStartTimer");
        buttonStartTimer->setGeometry(QRect(560, 520, 83, 29));
        labelClock = new QLabel(centralwidget);
        labelClock->setObjectName("labelClock");
        labelClock->setGeometry(QRect(0, 0, 781, 271));
        QFont font;
        font.setPointSize(37);
        labelClock->setFont(font);
        labelClock->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonDeleteAlarm = new QPushButton(centralwidget);
        buttonDeleteAlarm->setObjectName("buttonDeleteAlarm");
        buttonDeleteAlarm->setGeometry(QRect(162, 450, 141, 29));
        listWidgetAlarms = new QListWidget(centralwidget);
        listWidgetAlarms->setObjectName("listWidgetAlarms");
        listWidgetAlarms->setGeometry(QRect(20, 270, 281, 171));
        dateEditAlarm = new QDateEdit(centralwidget);
        dateEditAlarm->setObjectName("dateEditAlarm");
        dateEditAlarm->setGeometry(QRect(20, 520, 281, 29));
        buttonPauseTimer = new QPushButton(centralwidget);
        buttonPauseTimer->setObjectName("buttonPauseTimer");
        buttonPauseTimer->setGeometry(QRect(510, 440, 83, 29));
        buttonResetTimer = new QPushButton(centralwidget);
        buttonResetTimer->setObjectName("buttonResetTimer");
        buttonResetTimer->setGeometry(QRect(610, 440, 83, 29));
        labelTimerDisplay = new QLabel(centralwidget);
        labelTimerDisplay->setObjectName("labelTimerDisplay");
        labelTimerDisplay->setGeometry(QRect(410, 270, 371, 161));
        QFont font1;
        font1.setPointSize(18);
        labelTimerDisplay->setFont(font1);
        labelTimerDisplay->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 790, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonSetAlarm->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        buttonStartTimer->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        labelClock->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        buttonDeleteAlarm->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        buttonPauseTimer->setText(QCoreApplication::translate("MainWindow", "Pauza", nullptr));
        buttonResetTimer->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        labelTimerDisplay->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
