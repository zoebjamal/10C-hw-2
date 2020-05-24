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
    QWidget *widget;
    QGridLayout *gridLayout;
    QSlider *HW1_slider_5;
    QLabel *label_7;
    QSlider *HW1_slider_3;
    QSpacerItem *verticalSpacer_3;
    QSlider *HW1_slider;
    QSlider *HW1_slider_7;
    QLabel *label_9;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_5;
    QSlider *HW1_slider_4;
    QLabel *label_6;
    QSlider *HW1_slider_2;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_7;
    QSlider *HW1_slider_6;
    QLabel *label_8;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QSlider *HW1_slider_8;
    QSpacerItem *verticalSpacer_6;
    QSpinBox *HW1_spinbox;
    QSpinBox *HW1_spinbox_2;
    QSpinBox *HW1_spinbox_3;
    QSpinBox *HW1_spinbox_4;
    QSpinBox *HW1_spinbox_5;
    QSpinBox *HW1_spinbox_6;
    QSpinBox *HW1_spinbox_7;
    QSpinBox *HW1_spinbox_8;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QSlider *horizontalSlider_3;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *spinBox_2;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QSpinBox *spinBox_3;
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
        HW1_slider_5 = new QSlider(widget);
        HW1_slider_5->setObjectName(QString::fromUtf8("HW1_slider_5"));
        HW1_slider_5->setFont(font1);
        HW1_slider_5->setMaximum(100);
        HW1_slider_5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW1_slider_5, 9, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        gridLayout->addWidget(label_7, 11, 0, 1, 1);

        HW1_slider_3 = new QSlider(widget);
        HW1_slider_3->setObjectName(QString::fromUtf8("HW1_slider_3"));
        HW1_slider_3->setFont(font1);
        HW1_slider_3->setMaximum(100);
        HW1_slider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW1_slider_3, 5, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 1, 1, 1);

        HW1_slider = new QSlider(widget);
        HW1_slider->setObjectName(QString::fromUtf8("HW1_slider"));
        HW1_slider->setFont(font1);
        HW1_slider->setMaximum(100);
        HW1_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW1_slider, 0, 1, 1, 1);

        HW1_slider_7 = new QSlider(widget);
        HW1_slider_7->setObjectName(QString::fromUtf8("HW1_slider_7"));
        HW1_slider_7->setFont(font1);
        HW1_slider_7->setMaximum(100);
        HW1_slider_7->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW1_slider_7, 13, 1, 1, 1);

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

        HW1_slider_4 = new QSlider(widget);
        HW1_slider_4->setObjectName(QString::fromUtf8("HW1_slider_4"));
        HW1_slider_4->setFont(font1);
        HW1_slider_4->setMaximum(100);
        HW1_slider_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW1_slider_4, 7, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        HW1_slider_2 = new QSlider(widget);
        HW1_slider_2->setObjectName(QString::fromUtf8("HW1_slider_2"));
        HW1_slider_2->setFont(font1);
        HW1_slider_2->setMaximum(100);
        HW1_slider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW1_slider_2, 3, 1, 1, 1);

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

        HW1_slider_6 = new QSlider(widget);
        HW1_slider_6->setObjectName(QString::fromUtf8("HW1_slider_6"));
        HW1_slider_6->setFont(font1);
        HW1_slider_6->setMaximum(100);
        HW1_slider_6->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW1_slider_6, 11, 1, 1, 1);

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

        HW1_slider_8 = new QSlider(widget);
        HW1_slider_8->setObjectName(QString::fromUtf8("HW1_slider_8"));
        HW1_slider_8->setFont(font1);
        HW1_slider_8->setMaximum(100);
        HW1_slider_8->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HW1_slider_8, 15, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 12, 1, 1, 1);

        HW1_spinbox = new QSpinBox(widget);
        HW1_spinbox->setObjectName(QString::fromUtf8("HW1_spinbox"));
        HW1_spinbox->setFont(font1);
        HW1_spinbox->setMaximum(100);

        gridLayout->addWidget(HW1_spinbox, 0, 2, 1, 1);

        HW1_spinbox_2 = new QSpinBox(widget);
        HW1_spinbox_2->setObjectName(QString::fromUtf8("HW1_spinbox_2"));
        HW1_spinbox_2->setFont(font1);
        HW1_spinbox_2->setMaximum(100);

        gridLayout->addWidget(HW1_spinbox_2, 3, 2, 1, 1);

        HW1_spinbox_3 = new QSpinBox(widget);
        HW1_spinbox_3->setObjectName(QString::fromUtf8("HW1_spinbox_3"));
        HW1_spinbox_3->setFont(font1);
        HW1_spinbox_3->setMaximum(100);

        gridLayout->addWidget(HW1_spinbox_3, 5, 2, 1, 1);

        HW1_spinbox_4 = new QSpinBox(widget);
        HW1_spinbox_4->setObjectName(QString::fromUtf8("HW1_spinbox_4"));
        HW1_spinbox_4->setFont(font1);
        HW1_spinbox_4->setMaximum(100);

        gridLayout->addWidget(HW1_spinbox_4, 7, 2, 1, 1);

        HW1_spinbox_5 = new QSpinBox(widget);
        HW1_spinbox_5->setObjectName(QString::fromUtf8("HW1_spinbox_5"));
        HW1_spinbox_5->setFont(font1);
        HW1_spinbox_5->setMaximum(100);

        gridLayout->addWidget(HW1_spinbox_5, 9, 2, 1, 1);

        HW1_spinbox_6 = new QSpinBox(widget);
        HW1_spinbox_6->setObjectName(QString::fromUtf8("HW1_spinbox_6"));
        HW1_spinbox_6->setFont(font1);
        HW1_spinbox_6->setMaximum(100);

        gridLayout->addWidget(HW1_spinbox_6, 11, 2, 1, 1);

        HW1_spinbox_7 = new QSpinBox(widget);
        HW1_spinbox_7->setObjectName(QString::fromUtf8("HW1_spinbox_7"));
        HW1_spinbox_7->setFont(font1);
        HW1_spinbox_7->setMaximum(100);

        gridLayout->addWidget(HW1_spinbox_7, 13, 2, 1, 1);

        HW1_spinbox_8 = new QSpinBox(widget);
        HW1_spinbox_8->setObjectName(QString::fromUtf8("HW1_spinbox_8"));
        HW1_spinbox_8->setFont(font1);
        HW1_spinbox_8->setMaximum(100);

        gridLayout->addWidget(HW1_spinbox_8, 15, 2, 1, 1);

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

        horizontalSlider_3 = new QSlider(widget1);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setFont(font1);
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_3, 9, 0, 1, 1);

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

        spinBox_2 = new QSpinBox(widget1);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(100);

        gridLayout_2->addWidget(spinBox_2, 6, 0, 1, 1);

        horizontalSlider_2 = new QSlider(widget1);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setFont(font1);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_2, 5, 0, 1, 1);

        horizontalSlider = new QSlider(widget1);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setFont(font1);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 1, 0, 1, 1);

        spinBox = new QSpinBox(widget1);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(100);

        gridLayout_2->addWidget(spinBox, 2, 0, 1, 1);

        spinBox_3 = new QSpinBox(widget1);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMaximum(100);

        gridLayout_2->addWidget(spinBox_3, 10, 0, 1, 1);

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
        QObject::connect(HW1_slider_2, SIGNAL(valueChanged(int)), HW1_spinbox_2, SLOT(setValue(int)));
        QObject::connect(HW1_slider_3, SIGNAL(valueChanged(int)), HW1_spinbox_3, SLOT(setValue(int)));
        QObject::connect(HW1_slider_4, SIGNAL(valueChanged(int)), HW1_spinbox_4, SLOT(setValue(int)));
        QObject::connect(HW1_slider_5, SIGNAL(valueChanged(int)), HW1_spinbox_5, SLOT(setValue(int)));
        QObject::connect(HW1_slider_6, SIGNAL(valueChanged(int)), HW1_spinbox_6, SLOT(setValue(int)));
        QObject::connect(HW1_slider_7, SIGNAL(valueChanged(int)), HW1_spinbox_7, SLOT(setValue(int)));
        QObject::connect(HW1_slider_8, SIGNAL(valueChanged(int)), HW1_spinbox_8, SLOT(setValue(int)));
        QObject::connect(HW1_spinbox_8, SIGNAL(valueChanged(int)), HW1_slider_8, SLOT(setValue(int)));
        QObject::connect(HW1_spinbox_7, SIGNAL(valueChanged(int)), HW1_slider_7, SLOT(setValue(int)));
        QObject::connect(HW1_spinbox_6, SIGNAL(valueChanged(int)), HW1_slider_6, SLOT(setValue(int)));
        QObject::connect(HW1_spinbox_5, SIGNAL(valueChanged(int)), HW1_slider_5, SLOT(setValue(int)));
        QObject::connect(HW1_spinbox_4, SIGNAL(valueChanged(int)), HW1_slider_4, SLOT(setValue(int)));
        QObject::connect(HW1_spinbox_3, SIGNAL(valueChanged(int)), HW1_slider_3, SLOT(setValue(int)));
        QObject::connect(HW1_spinbox_2, SIGNAL(valueChanged(int)), HW1_slider_2, SLOT(setValue(int)));
        QObject::connect(HW1_spinbox, SIGNAL(valueChanged(int)), HW1_slider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), horizontalSlider_3, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">This is a QT grade calculator</p></body></html>", nullptr));
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
