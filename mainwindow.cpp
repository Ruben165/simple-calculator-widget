#include "mainwindow.h"
#include <QRadioButton>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    this->lineEditBil1->setFocus(Qt::OtherFocusReason);
}

MainWindow::~MainWindow() {}

void MainWindow::on_pushButtonHitung_clicked()
{
    double bil1 = lineEditBil1->text().toDouble();
    double bil2 = lineEditBil2->text().toDouble();
    double hasil;

    if(radioButtonTambah->isChecked()){
        hasil = bil1 + bil2;
    } else if (radioButtonKurang->isChecked()){
        hasil = bil1 - bil2;
    } else if (radioButtonKali->isChecked()){
        hasil = bil1 * bil2;
    } else if (radioButtonBagi->isChecked()){
        if (bil2 != 0) {
            hasil = bil1 / bil2;
        } else {
            lineEditHasil->setText("Error: Penyebut tidak boleh 0");
            return;
        }
    } else {
        lineEditHasil->setText("Error");
        return;
    }

    lineEditHasil->setText(QString::number(hasil));
}


void MainWindow::on_pushButtonTutup_clicked()
{
    close();
}

// By: 2540124633 - Lie Reubensto

