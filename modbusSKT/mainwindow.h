#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void connectPort();
    void disconnectPort();
    void startmotor();
    void stopmotor();
    void highspeedmotor();
    void lowspeedmotor();
    void readSerial();
    void writeSerial();
    void getData();

private:
    Ui::MainWindow *ui;
    QSerialPort serialPort;
    QByteArray serialData;
    QString serialBuffer;
    QString messageTX;
    QString crcValueHex;
    QString functionHex;
    QString registerHex;
    QString valueHex;
    QString slaveHex;

};
#endif // MAINWINDOW_H
