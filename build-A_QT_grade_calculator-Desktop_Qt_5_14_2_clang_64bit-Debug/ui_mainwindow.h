/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_13;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSlider *HW5_slider;
    QLabel *label_7;
    QSlider *HW3_slider;
    QSpacerItem *verticalSpacer_3;
    QSlider *HW1_slider;
    QSlider *HW7_slider;
    QLabel *label_9;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_5;
    QSlider *HW4_slider;
    QLabel *label_6;
    QSlider *HW2_slider;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_7;
    QSlider *HW6_slider;
    QLabel *label_8;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QSlider *HW8_slider;
    QSpacerItem *verticalSpacer_6;
    QSpinBox *HW1_spinbox;
    QSpinBox *HW2_spinbox;
    QSpinBox *HW3_spinbox;
    QSpinBox *HW4_spinbox;
    QSpinBox *HW5_spinbox;
    QSpinBox *HW6_spinbox;
    QSpinBox *HW7_spinbox;
    QSpinBox *HW8_spinbox;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QSlider *Final_slider;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *Midterm2_spinbox;
    QSlider *Midterm2_slider;
    QSlider *Midterm1_slider;
    QSpinBox *Midterm1_spinbox;
    QSpinBox *Final_spinbox;
    QMenuBar *menubar;
    QMenu *menuA_QT_grade_calculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(48, 10, 571, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(340, 460, 221, 81));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 50, 191, 501));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(16);
        widget->setFont(font1);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        HW5_slider = new QSlider(widget);
        HW5_slider->setObjectName(QString::fromUtf8("HW5_slider"));
        HW5_slider->setFont(font1);
        HW5_slider->setMaximum(100);
        HW5_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW5_slider, 9, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        gridLayout->addWidget(label_7, 11, 0, 1, 1);

        HW3_slider = new QSlider(widget);
        HW3_slider->setObjectName(QString::fromUtf8("HW3_slider"));
        HW3_slider->setFont(font1);
        HW3_slider->setMaximum(100);
        HW3_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW3_slider, 5, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 1, 1, 1);

        HW1_slider = new QSlider(widget);
        HW1_slider->setObjectName(QString::fromUtf8("HW1_slider"));
        HW1_slider->setFont(font1);
        HW1_slider->setMaximum(100);
        HW1_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW1_slider, 0, 1, 1, 1);

        HW7_slider = new QSlider(widget);
        HW7_slider->setObjectName(QString::fromUtf8("HW7_slider"));
        HW7_slider->setFont(font1);
        HW7_slider->setMaximum(100);
        HW7_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW7_slider, 13, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 15, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 10, 1, 1, 1);

        HW4_slider = new QSlider(widget);
        HW4_slider->setObjectName(QString::fromUtf8("HW4_slider"));
        HW4_slider->setFont(font1);
        HW4_slider->setMaximum(100);
        HW4_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW4_slider, 7, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        HW2_slider = new QSlider(widget);
        HW2_slider->setObjectName(QString::fromUtf8("HW2_slider"));
        HW2_slider->setFont(font1);
        HW2_slider->setMaximum(100);
        HW2_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW2_slider, 3, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 14, 1, 1, 1);

        HW6_slider = new QSlider(widget);
        HW6_slider->setObjectName(QString::fromUtf8("HW6_slider"));
        HW6_slider->setFont(font1);
        HW6_slider->setMaximum(100);
        HW6_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW6_slider, 11, 1, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 13, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 8, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        HW8_slider = new QSlider(widget);
        HW8_slider->setObjectName(QString::fromUtf8("HW8_slider"));
        HW8_slider->setFont(font1);
        HW8_slider->setMaximum(100);
        HW8_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW8_slider, 15, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 12, 1, 1, 1);

        HW1_spinbox = new QSpinBox(widget);
        HW1_spinbox->setObjectName(QString::fromUtf8("HW1_spinbox"));
        HW1_spinbox->setFont(font1);
        HW1_spinbox->setMaximum(100);

        gridLayout->addWidget(HW1_spinbox, 0, 2, 1, 1);

        HW2_spinbox = new QSpinBox(widget);
        HW2_spinbox->setObjectName(QString::fromUtf8("HW2_spinbox"));
        HW2_spinbox->setFont(font1);
        HW2_spinbox->setMaximum(100);

        gridLayout->addWidget(HW2_spinbox, 3, 2, 1, 1);

        HW3_spinbox = new QSpinBox(widget);
        HW3_spinbox->setObjectName(QString::fromUtf8("HW3_spinbox"));
        HW3_spinbox->setFont(font1);
        HW3_spinbox->setMaximum(100);

        gridLayout->addWidget(HW3_spinbox, 5, 2, 1, 1);

        HW4_spinbox = new QSpinBox(widget);
        HW4_spinbox->setObjectName(QString::fromUtf8("HW4_spinbox"));
        HW4_spinbox->setFont(font1);
        HW4_spinbox->setMaximum(100);

        gridLayout->addWidget(HW4_spinbox, 7, 2, 1, 1);

        HW5_spinbox = new QSpinBox(widget);
        HW5_spinbox->setObjectName(QString::fromUtf8("HW5_spinbox"));
        HW5_spinbox->setFont(font1);
        HW5_spinbox->setMaximum(100);

        gridLayout->addWidget(HW5_spinbox, 9, 2, 1, 1);

        HW6_spinbox = new QSpinBox(widget);
        HW6_spinbox->setObjectName(QString::fromUtf8("HW6_spinbox"));
        HW6_spinbox->setFont(font1);
        HW6_spinbox->setMaximum(100);

        gridLayout->addWidget(HW6_spinbox, 11, 2, 1, 1);

        HW7_spinbox = new QSpinBox(widget);
        HW7_spinbox->setObjectName(QString::fromUtf8("HW7_spinbox"));
        HW7_spinbox->setFont(font1);
        HW7_spinbox->setMaximum(100);

        gridLayout->addWidget(HW7_spinbox, 13, 2, 1, 1);

        HW8_spinbox = new QSpinBox(widget);
        HW8_spinbox->setObjectName(QString::fromUtf8("HW8_spinbox"));
        HW8_spinbox->setFont(font1);
        HW8_spinbox->setMaximum(100);

        gridLayout->addWidget(HW8_spinbox, 15, 2, 1, 1);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(340, 50, 241, 325));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        Final_slider = new QSlider(widget1);
        Final_slider->setObjectName(QString::fromUtf8("Final_slider"));
        Final_slider->setFont(font1);
        Final_slider->setMaximum(100);
        Final_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Final_slider, 9, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_9, 7, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 3, 0, 1, 1);

        label_11 = new QLabel(widget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        label_12 = new QLabel(widget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);

        gridLayout_2->addWidget(label_12, 8, 0, 1, 1);

        Midterm2_spinbox = new QSpinBox(widget1);
        Midterm2_spinbox->setObjectName(QString::fromUtf8("Midterm2_spinbox"));
        Midterm2_spinbox->setMaximum(100);

        gridLayout_2->addWidget(Midterm2_spinbox, 6, 0, 1, 1);

        Midterm2_slider = new QSlider(widget1);
        Midterm2_slider->setObjectName(QString::fromUtf8("Midterm2_slider"));
        Midterm2_slider->setFont(font1);
        Midterm2_slider->setMaximum(100);
        Midterm2_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Midterm2_slider, 5, 0, 1, 1);

        Midterm1_slider = new QSlider(widget1);
        Midterm1_slider->setObjectName(QString::fromUtf8("Midterm1_slider"));
        Midterm1_slider->setFont(font1);
        Midterm1_slider->setMaximum(100);
        Midterm1_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Midterm1_slider, 1, 0, 1, 1);

        Midterm1_spinbox = new QSpinBox(widget1);
        Midterm1_spinbox->setObjectName(QString::fromUtf8("Midterm1_spinbox"));
        Midterm1_spinbox->setMaximum(100);

        gridLayout_2->addWidget(Midterm1_spinbox, 2, 0, 1, 1);

        Final_spinbox = new QSpinBox(widget1);
        Final_spinbox->setObjectName(QString::fromUtf8("Final_spinbox"));
        Final_spinbox->setMaximum(100);

        gridLayout_2->addWidget(Final_spinbox, 10, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuA_QT_grade_calculator = new QMenu(menubar);
        menuA_QT_grade_calculator->setObjectName(QString::fromUtf8("menuA_QT_grade_calculator"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuA_QT_grade_calculator->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(HW1_slider, SIGNAL(valueChanged(int)), HW1_spinbox, SLOT(setValue(int)));
        QObject::connect(HW1_spinbox, SIGNAL(valueChanged(int)), HW1_slider, SLOT(setValue(int)));
        QObject::connect(HW2_slider, SIGNAL(valueChanged(int)), HW2_spinbox, SLOT(setValue(int)));
        QObject::connect(HW3_slider, SIGNAL(valueChanged(int)), HW3_spinbox, SLOT(setValue(int)));
        QObject::connect(HW4_slider, SIGNAL(valueChanged(int)), HW4_spinbox, SLOT(setValue(int)));
        QObject::connect(HW5_slider, SIGNAL(valueChanged(int)), HW5_spinbox, SLOT(setValue(int)));
        QObject::connect(HW6_slider, SIGNAL(valueChanged(int)), HW6_spinbox, SLOT(setValue(int)));
        QObject::connect(HW7_slider, SIGNAL(valueChanged(int)), HW7_spinbox, SLOT(setValue(int)));
        QObject::connect(HW8_slider, SIGNAL(valueChanged(int)), HW8_spinbox, SLOT(setValue(int)));
        QObject::connect(HW8_spinbox, SIGNAL(valueChanged(int)), HW8_slider, SLOT(setValue(int)));
        QObject::connect(HW7_spinbox, SIGNAL(valueChanged(int)), HW7_slider, SLOT(setValue(int)));
        QObject::connect(HW6_spinbox, SIGNAL(valueChanged(int)), HW6_slider, SLOT(setValue(int)));
        QObject::connect(HW5_spinbox, SIGNAL(valueChanged(int)), HW5_slider, SLOT(setValue(int)));
        QObject::connect(HW4_spinbox, SIGNAL(valueChanged(int)), HW4_slider, SLOT(setValue(int)));
        QObject::connect(HW3_spinbox, SIGNAL(valueChanged(int)), HW3_slider, SLOT(setValue(int)));
        QObject::connect(HW2_spinbox, SIGNAL(valueChanged(int)), HW2_slider, SLOT(setValue(int)));
        QObject::connect(HW1_spinbox, SIGNAL(valueChanged(int)), HW1_slider, SLOT(setValue(int)));
        QObject::connect(Midterm1_slider, SIGNAL(valueChanged(int)), Midterm1_spinbox, SLOT(setValue(int)));
        QObject::connect(Midterm2_slider, SIGNAL(valueChanged(int)), Midterm2_spinbox, SLOT(setValue(int)));
        QObject::connect(Final_slider, SIGNAL(valueChanged(int)), Final_spinbox, SLOT(setValue(int)));
        QObject::connect(Final_spinbox, SIGNAL(valueChanged(int)), Final_slider, SLOT(setValue(int)));
        QObject::connect(Midterm2_spinbox, SIGNAL(valueChanged(int)), Midterm2_slider, SLOT(setValue(int)));
        QObject::connect(Midterm1_spinbox, SIGNAL(valueChanged(int)), Midterm1_slider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">This is a QT grade calculator</p></body></html>", nullptr));
        label_13->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "HW 6", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "HW 8", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "HW 2", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "HW 5", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "HW 1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "HW 3", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "HW 7", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "HW 4", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Midterm 1", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Midterm 2", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Final", nullptr));
        menuA_QT_grade_calculator->setTitle(QCoreApplication::translate("MainWindow", "A QT grade calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
