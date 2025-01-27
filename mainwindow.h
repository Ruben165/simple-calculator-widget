#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"

#include <QMainWindow>

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonHitung_clicked();
    void on_pushButtonTutup_clicked();
};
#endif // MAINWINDOW_H
// By: 2540124633 - Lie Reubensto
