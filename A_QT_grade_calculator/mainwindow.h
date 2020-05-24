#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void get_hw1(int);
    void get_hw2(int);
    void get_hw3(int);
    void get_hw4(int);
    void get_hw5(int);
    void get_hw6(int);
    void get_hw7(int);
    void get_hw8(int);
private:
    void computeGrade() const;
private:
    Ui::MainWindow *ui;
    int hw1;
    int hw2;
    int hw3;
    int hw4;
    int hw5;
    int hw6;
    int hw7;
    int hw8;
};
#endif // MAINWINDOW_H
