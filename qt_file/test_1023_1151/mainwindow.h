#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mpu_sensor.h"
#include "pir_sensor.h"
#include "rain_sensor.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void printScreen(int);

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    bool IsClicked1;
    bool IsClicked2;
    bool IsClicked3;

    // thread
    MPU_Sensor *mpu_thread;
    PIR_Sensor *pir_thread;
    Rain_Sensor *rain_thread;

};
#endif // MAINWINDOW_H
