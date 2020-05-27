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
    QObject::connect(ui->Midterm1_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_mt1(int)));
    QObject::connect(ui->Midterm2_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_mt2(int)));
    QObject::connect(ui->Final_spinbox, SIGNAL(valueChanged(int)), this, SLOT(get_final(int)));
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
void MainWindow::get_mt1(int value) {
    mt1 = value;
    computeGrade();
    return;
}
void MainWindow::get_mt2(int value) {
    mt2 = value;
    computeGrade();
    return;
}
void MainWindow::get_final(int value) {
    final = value;
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
    double m1 = static_cast<double>(mt1);
    double m2 = static_cast<double>(mt2);
    double fin = static_cast<double>(final);
    double highest_mt = 0;
    if (m1 > m2) {
        highest_mt = m1;
    } else if (m2 > m1) {
        highest_mt = m2;
    } else if (m1 == m2) {
        highest_mt = m1;
    }
    QString Schema_A(QString::number((((h1 + h2 + h3 + h4 + h5 + h6 + h7 + h8) / 8) * .25) + (.2 * m1) + (.2 * m2) + (.35 * fin)));
    QString Schema_B(QString::number((((h1 + h2 + h3 + h4 + h5 + h6 + h7 + h8) / 8) * .25) + (.3 * highest_mt) + (.44 * fin)));
    if (Schema_A > Schema_B) {
        ui->label_13->setText(Schema_A);
    } else if (Schema_B > Schema_A) {
        ui->label_13->setText(Schema_B);
    } else if (Schema_A == Schema_B) {
        ui->label_13->setText(Schema_A);
    }
}


//Note: the "bug" where schema B gives 99 as max score is due to the grading split not actually adding up to 100
//there is also an ugly logic error somewhere - prog is confused when choosing between schemas
