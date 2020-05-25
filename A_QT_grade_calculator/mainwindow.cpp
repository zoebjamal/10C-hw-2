#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), hw1(0), hw2(0), hw3(0), hw4(0), hw5(0), hw6(0), hw7(0), hw8(0)
{
    ui->setupUi(this);
    QObject::connect(ui->HW1_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_hw1(int)));
    QObject::connect(ui->HW2_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_hw2(int)));
    QObject::connect(ui->HW3_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_hw3(int)));
    QObject::connect(ui->HW4_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_hw4(int)));
    QObject::connect(ui->HW5_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_hw5(int)));
    QObject::connect(ui->HW6_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_hw6(int)));
    QObject::connect(ui->HW7_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_hw7(int)));
    QObject::connect(ui->HW8_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_hw8(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::get_hw1(int value) {
    hw1 = value;
    computeGrade();
    return;
}
void MainWindow::get_hw2(int value) {
    hw2 = value;
    computeGrade();
    return;
}
void MainWindow::get_hw3(int value) {
    hw3 = value;
    computeGrade();
    return;
}
void MainWindow::get_hw4(int value) {
    hw4 = value;
    computeGrade();
    return;
}
void MainWindow::get_hw5(int value) {
    hw5 = value;
    computeGrade();
    return;
}
void MainWindow::get_hw6(int value) {
    hw6 = value;
    computeGrade();
    return;
}
void MainWindow::get_hw7(int value) {
    hw7 = value;
    computeGrade();
    return;
}
void MainWindow::get_hw8(int value) {
    hw8 = value;
    computeGrade();
    return;
}

void MainWindow::computeGrade() const {
    double h1 = static_cast<double>(hw1);
    double h2 = static_cast<double>(hw2);
    double h3 = static_cast<double>(hw3);
    double h4 = static_cast<double>(hw4);
    double h5 = static_cast<double>(hw5);
    double h6 = static_cast<double>(hw6);
    double h7 = static_cast<double>(hw7);
    double h8 = static_cast<double>(hw8);
    QString hwGrade(QString::number(.25 * (h1 + h2 + h3 + h4 + h5 + h6 + h7 + h8))); //math here is wrong
    ui->label_13->setText(hwGrade);
}

//test commit

