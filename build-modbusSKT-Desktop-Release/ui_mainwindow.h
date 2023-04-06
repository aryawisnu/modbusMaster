/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *connectButton;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *slaveID;
    QCommandLinkButton *sendButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTextBrowser *serialMonitor;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *disconnectButton;
    QLineEdit *portsName;
    QLineEdit *portsBaudrate;
    QLineEdit *functionModbus;
    QLineEdit *registerModbus;
    QLineEdit *valueModbus;
    QTextBrowser *CRCvalue;
    QLabel *label_9;
    QLabel *connectionStatus;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *highspeedButton;
    QPushButton *lowspeedButton;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(792, 461);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("backgroun-color:rgb(255,255,255);"));
        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(20, 20, 91, 71));
        connectButton->setCheckable(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 90, 59, 15));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 30, 59, 15));
        slaveID = new QSpinBox(centralwidget);
        slaveID->setObjectName(QString::fromUtf8("slaveID"));
        slaveID->setGeometry(QRect(300, 80, 61, 24));
        sendButton = new QCommandLinkButton(centralwidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(60, 370, 121, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 210, 59, 15));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 270, 59, 15));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 330, 59, 15));
        serialMonitor = new QTextBrowser(centralwidget);
        serialMonitor->setObjectName(QString::fromUtf8("serialMonitor"));
        serialMonitor->setGeometry(QRect(220, 140, 431, 221));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 120, 161, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 150, 59, 15));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 60, 59, 15));
        disconnectButton = new QPushButton(centralwidget);
        disconnectButton->setObjectName(QString::fromUtf8("disconnectButton"));
        disconnectButton->setGeometry(QRect(120, 20, 91, 71));
        disconnectButton->setCheckable(false);
        portsName = new QLineEdit(centralwidget);
        portsName->setObjectName(QString::fromUtf8("portsName"));
        portsName->setGeometry(QRect(300, 20, 113, 23));
        portsBaudrate = new QLineEdit(centralwidget);
        portsBaudrate->setObjectName(QString::fromUtf8("portsBaudrate"));
        portsBaudrate->setGeometry(QRect(300, 50, 113, 23));
        functionModbus = new QLineEdit(centralwidget);
        functionModbus->setObjectName(QString::fromUtf8("functionModbus"));
        functionModbus->setGeometry(QRect(100, 140, 101, 31));
        registerModbus = new QLineEdit(centralwidget);
        registerModbus->setObjectName(QString::fromUtf8("registerModbus"));
        registerModbus->setGeometry(QRect(100, 200, 101, 31));
        valueModbus = new QLineEdit(centralwidget);
        valueModbus->setObjectName(QString::fromUtf8("valueModbus"));
        valueModbus->setGeometry(QRect(100, 260, 101, 31));
        CRCvalue = new QTextBrowser(centralwidget);
        CRCvalue->setObjectName(QString::fromUtf8("CRCvalue"));
        CRCvalue->setGeometry(QRect(100, 320, 101, 31));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 110, 59, 15));
        connectionStatus = new QLabel(centralwidget);
        connectionStatus->setObjectName(QString::fromUtf8("connectionStatus"));
        connectionStatus->setGeometry(QRect(100, 106, 101, 20));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(670, 140, 101, 51));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(670, 210, 101, 51));
        highspeedButton = new QPushButton(centralwidget);
        highspeedButton->setObjectName(QString::fromUtf8("highspeedButton"));
        highspeedButton->setGeometry(QRect(670, 280, 101, 51));
        lowspeedButton = new QPushButton(centralwidget);
        lowspeedButton->setObjectName(QString::fromUtf8("lowspeedButton"));
        lowspeedButton->setGeometry(QRect(670, 350, 101, 51));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(680, 110, 81, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(270, 370, 251, 16));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(250, 390, 281, 16));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(480, 10, 261, 51));
        QFont font;
        font.setPointSize(15);
        label_13->setFont(font);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(500, 40, 211, 51));
        label_14->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 792, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Modbus Master - Teknik Instrumentasi ITS", nullptr));
        connectButton->setText(QApplication::translate("MainWindow", "CONNECT", nullptr));
        label->setText(QApplication::translate("MainWindow", "Slave ID", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Port", nullptr));
        sendButton->setText(QApplication::translate("MainWindow", "SEND DATA", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Register", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Value", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "CRC", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Communication Terminal", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Function", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Baudrate", nullptr));
        disconnectButton->setText(QApplication::translate("MainWindow", "DISCONNECT", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Status :", nullptr));
        connectionStatus->setText(QString());
        startButton->setText(QApplication::translate("MainWindow", "START MOTOR", nullptr));
        stopButton->setText(QApplication::translate("MainWindow", "STOP MOTOR", nullptr));
        highspeedButton->setText(QApplication::translate("MainWindow", "HIGH SPEED", nullptr));
        lowspeedButton->setText(QApplication::translate("MainWindow", "LOW SPEED", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Motor Control", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Arya Wisnu Teguh Pribadi - 2042201080", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Fazlur Rahman Hilal Zulkarnain - 2042201048", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Modbus Master Simulator", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Schneider Altivar320", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
