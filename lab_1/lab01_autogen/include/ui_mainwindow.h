/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../qcustomplot/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *outputParamsGroupBox;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *estimatedSystemLoadGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *rhoTextLabel;
    QLineEdit *estimatedSystemLoadLineEdit;
    QLabel *rhoExtensionTextLabel;
    QGroupBox *actualSystemLoadGroupBox;
    QGridLayout *gridLayout_4;
    QLineEdit *actualSystemLoadLineEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *inputParamsGroupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *rGroupBox;
    QFormLayout *formLayout;
    QLabel *aTextLabel;
    QLabel *bTextLabel;
    QDoubleSpinBox *bDoubleSpinBox;
    QDoubleSpinBox *aDoubleSpinBox;
    QGroupBox *wGroupBox;
    QFormLayout *formLayout_2;
    QLabel *kTextLabel;
    QDoubleSpinBox *kDoubleSpinBox;
    QLabel *lambdaTextLabel;
    QDoubleSpinBox *lambdaDoubleSpinBox;
    QGroupBox *tGroupBox;
    QFormLayout *formLayout_3;
    QLabel *tTextLabel;
    QDoubleSpinBox *tDoubleSpinBox;
    QPushButton *simulatePushButton;
    QGroupBox *distributionsParamsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *uniformGroupBox;
    QGridLayout *gridLayout;
    QLineEdit *uniformMeanLineEdit;
    QLabel *uniformMeanTextLabel;
    QLabel *uniformVarianceTextLabel;
    QLineEdit *uniformVarianceLineEdit;
    QGroupBox *weibullGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *weibullMeanTextLabel;
    QLineEdit *weibullMeanLineEdit;
    QLabel *weibullVarianceTextLabel;
    QLineEdit *weibullVarianceLineEdit;
    QGroupBox *intensitiesGroupBox;
    QGridLayout *gridLayout_7;
    QLineEdit *inputIntensityLineEdit;
    QLabel *inputIntensityTextLabel;
    QLabel *outputIntensityTextLabel;
    QLineEdit *outputIntensityLineEdit;
    QWidget *tab_2;
    QGroupBox *inputParams2GroupBox;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *uniform2GroupBox;
    QFormLayout *formLayout_4;
    QLabel *inputIntensity2TextLabel;
    QLabel *uniformStd2TextLabel;
    QDoubleSpinBox *uniformStd2DoubleSpinBox;
    QDoubleSpinBox *inputIntensity2DoubleSpinBox;
    QGroupBox *weibull2GroupBox;
    QFormLayout *formLayout_5;
    QLabel *outputIntensity2TextLabel;
    QDoubleSpinBox *outputIntensity2DoubleSpinBox;
    QLabel *weibullStd2TextLabel;
    QDoubleSpinBox *weibullStd2DoubleSpinBox;
    QGroupBox *t2GroupBox;
    QFormLayout *formLayout_6;
    QLabel *t2TextLabel;
    QDoubleSpinBox *t2DoubleSpinBox;
    QPushButton *simulate2PushButton;
    QGroupBox *distributionParams2GroupBox;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *means2GroupBox;
    QGridLayout *gridLayout_8;
    QLineEdit *uniformMean2LineEdit;
    QLabel *uniformMean2TextLabel;
    QLabel *weibullMean2TextLabel;
    QLineEdit *weibullMean2LineEdit;
    QGroupBox *r2GroupBox;
    QGridLayout *gridLayout_5;
    QLineEdit *a2LineEdit;
    QLabel *a2TextLabel;
    QLabel *b2TextLabel;
    QLineEdit *b2LineEdit;
    QGroupBox *w2GroupBox;
    QGridLayout *gridLayout_6;
    QLabel *k2TextLabel;
    QLineEdit *k2LineEdit;
    QLabel *lambda2TextLabel;
    QLineEdit *lambda2LineEdit;
    QCustomPlot *customPlot;
    QCustomPlot *customPlot2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1153, 822);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        outputParamsGroupBox = new QGroupBox(centralwidget);
        outputParamsGroupBox->setObjectName(QString::fromUtf8("outputParamsGroupBox"));
        outputParamsGroupBox->setGeometry(QRect(60, 490, 421, 228));
        verticalLayout_3 = new QVBoxLayout(outputParamsGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        estimatedSystemLoadGroupBox = new QGroupBox(outputParamsGroupBox);
        estimatedSystemLoadGroupBox->setObjectName(QString::fromUtf8("estimatedSystemLoadGroupBox"));
        gridLayout_3 = new QGridLayout(estimatedSystemLoadGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        rhoTextLabel = new QLabel(estimatedSystemLoadGroupBox);
        rhoTextLabel->setObjectName(QString::fromUtf8("rhoTextLabel"));

        gridLayout_3->addWidget(rhoTextLabel, 0, 0, 1, 1);

        estimatedSystemLoadLineEdit = new QLineEdit(estimatedSystemLoadGroupBox);
        estimatedSystemLoadLineEdit->setObjectName(QString::fromUtf8("estimatedSystemLoadLineEdit"));
        estimatedSystemLoadLineEdit->setReadOnly(true);

        gridLayout_3->addWidget(estimatedSystemLoadLineEdit, 0, 1, 1, 1);

        rhoExtensionTextLabel = new QLabel(estimatedSystemLoadGroupBox);
        rhoExtensionTextLabel->setObjectName(QString::fromUtf8("rhoExtensionTextLabel"));
        rhoExtensionTextLabel->setScaledContents(true);
        rhoExtensionTextLabel->setWordWrap(true);
        rhoExtensionTextLabel->setIndent(-1);

        gridLayout_3->addWidget(rhoExtensionTextLabel, 1, 0, 1, 2);


        verticalLayout_3->addWidget(estimatedSystemLoadGroupBox);

        actualSystemLoadGroupBox = new QGroupBox(outputParamsGroupBox);
        actualSystemLoadGroupBox->setObjectName(QString::fromUtf8("actualSystemLoadGroupBox"));
        gridLayout_4 = new QGridLayout(actualSystemLoadGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        actualSystemLoadLineEdit = new QLineEdit(actualSystemLoadGroupBox);
        actualSystemLoadLineEdit->setObjectName(QString::fromUtf8("actualSystemLoadLineEdit"));
        actualSystemLoadLineEdit->setReadOnly(true);

        gridLayout_4->addWidget(actualSystemLoadLineEdit, 0, 0, 1, 1);


        verticalLayout_3->addWidget(actualSystemLoadGroupBox);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 571, 411));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        inputParamsGroupBox = new QGroupBox(tab);
        inputParamsGroupBox->setObjectName(QString::fromUtf8("inputParamsGroupBox"));
        inputParamsGroupBox->setGeometry(QRect(10, 10, 271, 361));
        verticalLayout = new QVBoxLayout(inputParamsGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rGroupBox = new QGroupBox(inputParamsGroupBox);
        rGroupBox->setObjectName(QString::fromUtf8("rGroupBox"));
        formLayout = new QFormLayout(rGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        aTextLabel = new QLabel(rGroupBox);
        aTextLabel->setObjectName(QString::fromUtf8("aTextLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, aTextLabel);

        bTextLabel = new QLabel(rGroupBox);
        bTextLabel->setObjectName(QString::fromUtf8("bTextLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, bTextLabel);

        bDoubleSpinBox = new QDoubleSpinBox(rGroupBox);
        bDoubleSpinBox->setObjectName(QString::fromUtf8("bDoubleSpinBox"));
        bDoubleSpinBox->setMaximum(1000000.000000000000000);
        bDoubleSpinBox->setValue(3.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, bDoubleSpinBox);

        aDoubleSpinBox = new QDoubleSpinBox(rGroupBox);
        aDoubleSpinBox->setObjectName(QString::fromUtf8("aDoubleSpinBox"));
        aDoubleSpinBox->setMaximum(1000000.000000000000000);
        aDoubleSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, aDoubleSpinBox);


        verticalLayout->addWidget(rGroupBox);

        wGroupBox = new QGroupBox(inputParamsGroupBox);
        wGroupBox->setObjectName(QString::fromUtf8("wGroupBox"));
        formLayout_2 = new QFormLayout(wGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        kTextLabel = new QLabel(wGroupBox);
        kTextLabel->setObjectName(QString::fromUtf8("kTextLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, kTextLabel);

        kDoubleSpinBox = new QDoubleSpinBox(wGroupBox);
        kDoubleSpinBox->setObjectName(QString::fromUtf8("kDoubleSpinBox"));
        kDoubleSpinBox->setMaximum(1000000.000000000000000);
        kDoubleSpinBox->setValue(10.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, kDoubleSpinBox);

        lambdaTextLabel = new QLabel(wGroupBox);
        lambdaTextLabel->setObjectName(QString::fromUtf8("lambdaTextLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, lambdaTextLabel);

        lambdaDoubleSpinBox = new QDoubleSpinBox(wGroupBox);
        lambdaDoubleSpinBox->setObjectName(QString::fromUtf8("lambdaDoubleSpinBox"));
        lambdaDoubleSpinBox->setMaximum(1000000.000000000000000);
        lambdaDoubleSpinBox->setValue(3.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lambdaDoubleSpinBox);


        verticalLayout->addWidget(wGroupBox);

        tGroupBox = new QGroupBox(inputParamsGroupBox);
        tGroupBox->setObjectName(QString::fromUtf8("tGroupBox"));
        formLayout_3 = new QFormLayout(tGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        tTextLabel = new QLabel(tGroupBox);
        tTextLabel->setObjectName(QString::fromUtf8("tTextLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, tTextLabel);

        tDoubleSpinBox = new QDoubleSpinBox(tGroupBox);
        tDoubleSpinBox->setObjectName(QString::fromUtf8("tDoubleSpinBox"));
        tDoubleSpinBox->setMaximum(1000000.000000000000000);
        tDoubleSpinBox->setValue(1000.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, tDoubleSpinBox);


        verticalLayout->addWidget(tGroupBox);

        simulatePushButton = new QPushButton(inputParamsGroupBox);
        simulatePushButton->setObjectName(QString::fromUtf8("simulatePushButton"));

        verticalLayout->addWidget(simulatePushButton);

        distributionsParamsGroupBox = new QGroupBox(tab);
        distributionsParamsGroupBox->setObjectName(QString::fromUtf8("distributionsParamsGroupBox"));
        distributionsParamsGroupBox->setGeometry(QRect(290, 10, 271, 361));
        verticalLayout_2 = new QVBoxLayout(distributionsParamsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        uniformGroupBox = new QGroupBox(distributionsParamsGroupBox);
        uniformGroupBox->setObjectName(QString::fromUtf8("uniformGroupBox"));
        gridLayout = new QGridLayout(uniformGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        uniformMeanLineEdit = new QLineEdit(uniformGroupBox);
        uniformMeanLineEdit->setObjectName(QString::fromUtf8("uniformMeanLineEdit"));
        uniformMeanLineEdit->setReadOnly(true);

        gridLayout->addWidget(uniformMeanLineEdit, 0, 1, 1, 1);

        uniformMeanTextLabel = new QLabel(uniformGroupBox);
        uniformMeanTextLabel->setObjectName(QString::fromUtf8("uniformMeanTextLabel"));

        gridLayout->addWidget(uniformMeanTextLabel, 0, 0, 1, 1);

        uniformVarianceTextLabel = new QLabel(uniformGroupBox);
        uniformVarianceTextLabel->setObjectName(QString::fromUtf8("uniformVarianceTextLabel"));

        gridLayout->addWidget(uniformVarianceTextLabel, 1, 0, 1, 1);

        uniformVarianceLineEdit = new QLineEdit(uniformGroupBox);
        uniformVarianceLineEdit->setObjectName(QString::fromUtf8("uniformVarianceLineEdit"));
        uniformVarianceLineEdit->setReadOnly(true);

        gridLayout->addWidget(uniformVarianceLineEdit, 1, 1, 1, 1);


        verticalLayout_2->addWidget(uniformGroupBox);

        weibullGroupBox = new QGroupBox(distributionsParamsGroupBox);
        weibullGroupBox->setObjectName(QString::fromUtf8("weibullGroupBox"));
        gridLayout_2 = new QGridLayout(weibullGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        weibullMeanTextLabel = new QLabel(weibullGroupBox);
        weibullMeanTextLabel->setObjectName(QString::fromUtf8("weibullMeanTextLabel"));

        gridLayout_2->addWidget(weibullMeanTextLabel, 0, 0, 1, 1);

        weibullMeanLineEdit = new QLineEdit(weibullGroupBox);
        weibullMeanLineEdit->setObjectName(QString::fromUtf8("weibullMeanLineEdit"));
        weibullMeanLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(weibullMeanLineEdit, 0, 1, 1, 1);

        weibullVarianceTextLabel = new QLabel(weibullGroupBox);
        weibullVarianceTextLabel->setObjectName(QString::fromUtf8("weibullVarianceTextLabel"));

        gridLayout_2->addWidget(weibullVarianceTextLabel, 1, 0, 1, 1);

        weibullVarianceLineEdit = new QLineEdit(weibullGroupBox);
        weibullVarianceLineEdit->setObjectName(QString::fromUtf8("weibullVarianceLineEdit"));
        weibullVarianceLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(weibullVarianceLineEdit, 1, 1, 1, 1);


        verticalLayout_2->addWidget(weibullGroupBox);

        intensitiesGroupBox = new QGroupBox(distributionsParamsGroupBox);
        intensitiesGroupBox->setObjectName(QString::fromUtf8("intensitiesGroupBox"));
        gridLayout_7 = new QGridLayout(intensitiesGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        inputIntensityLineEdit = new QLineEdit(intensitiesGroupBox);
        inputIntensityLineEdit->setObjectName(QString::fromUtf8("inputIntensityLineEdit"));
        inputIntensityLineEdit->setReadOnly(true);

        gridLayout_7->addWidget(inputIntensityLineEdit, 0, 1, 1, 1);

        inputIntensityTextLabel = new QLabel(intensitiesGroupBox);
        inputIntensityTextLabel->setObjectName(QString::fromUtf8("inputIntensityTextLabel"));

        gridLayout_7->addWidget(inputIntensityTextLabel, 0, 0, 1, 1);

        outputIntensityTextLabel = new QLabel(intensitiesGroupBox);
        outputIntensityTextLabel->setObjectName(QString::fromUtf8("outputIntensityTextLabel"));

        gridLayout_7->addWidget(outputIntensityTextLabel, 1, 0, 1, 1);

        outputIntensityLineEdit = new QLineEdit(intensitiesGroupBox);
        outputIntensityLineEdit->setObjectName(QString::fromUtf8("outputIntensityLineEdit"));
        outputIntensityLineEdit->setReadOnly(true);

        gridLayout_7->addWidget(outputIntensityLineEdit, 1, 1, 1, 1);


        verticalLayout_2->addWidget(intensitiesGroupBox);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        inputParams2GroupBox = new QGroupBox(tab_2);
        inputParams2GroupBox->setObjectName(QString::fromUtf8("inputParams2GroupBox"));
        inputParams2GroupBox->setGeometry(QRect(10, 10, 271, 361));
        verticalLayout_4 = new QVBoxLayout(inputParams2GroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        uniform2GroupBox = new QGroupBox(inputParams2GroupBox);
        uniform2GroupBox->setObjectName(QString::fromUtf8("uniform2GroupBox"));
        formLayout_4 = new QFormLayout(uniform2GroupBox);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        inputIntensity2TextLabel = new QLabel(uniform2GroupBox);
        inputIntensity2TextLabel->setObjectName(QString::fromUtf8("inputIntensity2TextLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, inputIntensity2TextLabel);

        uniformStd2TextLabel = new QLabel(uniform2GroupBox);
        uniformStd2TextLabel->setObjectName(QString::fromUtf8("uniformStd2TextLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, uniformStd2TextLabel);

        uniformStd2DoubleSpinBox = new QDoubleSpinBox(uniform2GroupBox);
        uniformStd2DoubleSpinBox->setObjectName(QString::fromUtf8("uniformStd2DoubleSpinBox"));
        uniformStd2DoubleSpinBox->setMaximum(1000000.000000000000000);
        uniformStd2DoubleSpinBox->setValue(0.050000000000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, uniformStd2DoubleSpinBox);

        inputIntensity2DoubleSpinBox = new QDoubleSpinBox(uniform2GroupBox);
        inputIntensity2DoubleSpinBox->setObjectName(QString::fromUtf8("inputIntensity2DoubleSpinBox"));
        inputIntensity2DoubleSpinBox->setMaximum(1000000.000000000000000);
        inputIntensity2DoubleSpinBox->setValue(2.000000000000000);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, inputIntensity2DoubleSpinBox);


        verticalLayout_4->addWidget(uniform2GroupBox);

        weibull2GroupBox = new QGroupBox(inputParams2GroupBox);
        weibull2GroupBox->setObjectName(QString::fromUtf8("weibull2GroupBox"));
        formLayout_5 = new QFormLayout(weibull2GroupBox);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        outputIntensity2TextLabel = new QLabel(weibull2GroupBox);
        outputIntensity2TextLabel->setObjectName(QString::fromUtf8("outputIntensity2TextLabel"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, outputIntensity2TextLabel);

        outputIntensity2DoubleSpinBox = new QDoubleSpinBox(weibull2GroupBox);
        outputIntensity2DoubleSpinBox->setObjectName(QString::fromUtf8("outputIntensity2DoubleSpinBox"));
        outputIntensity2DoubleSpinBox->setMaximum(1000000.000000000000000);
        outputIntensity2DoubleSpinBox->setValue(3.000000000000000);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, outputIntensity2DoubleSpinBox);

        weibullStd2TextLabel = new QLabel(weibull2GroupBox);
        weibullStd2TextLabel->setObjectName(QString::fromUtf8("weibullStd2TextLabel"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, weibullStd2TextLabel);

        weibullStd2DoubleSpinBox = new QDoubleSpinBox(weibull2GroupBox);
        weibullStd2DoubleSpinBox->setObjectName(QString::fromUtf8("weibullStd2DoubleSpinBox"));
        weibullStd2DoubleSpinBox->setMaximum(1000000.000000000000000);
        weibullStd2DoubleSpinBox->setValue(0.050000000000000);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, weibullStd2DoubleSpinBox);


        verticalLayout_4->addWidget(weibull2GroupBox);

        t2GroupBox = new QGroupBox(inputParams2GroupBox);
        t2GroupBox->setObjectName(QString::fromUtf8("t2GroupBox"));
        formLayout_6 = new QFormLayout(t2GroupBox);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        t2TextLabel = new QLabel(t2GroupBox);
        t2TextLabel->setObjectName(QString::fromUtf8("t2TextLabel"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, t2TextLabel);

        t2DoubleSpinBox = new QDoubleSpinBox(t2GroupBox);
        t2DoubleSpinBox->setObjectName(QString::fromUtf8("t2DoubleSpinBox"));
        t2DoubleSpinBox->setMaximum(1000000.000000000000000);
        t2DoubleSpinBox->setValue(1000.000000000000000);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, t2DoubleSpinBox);


        verticalLayout_4->addWidget(t2GroupBox);

        simulate2PushButton = new QPushButton(inputParams2GroupBox);
        simulate2PushButton->setObjectName(QString::fromUtf8("simulate2PushButton"));

        verticalLayout_4->addWidget(simulate2PushButton);

        distributionParams2GroupBox = new QGroupBox(tab_2);
        distributionParams2GroupBox->setObjectName(QString::fromUtf8("distributionParams2GroupBox"));
        distributionParams2GroupBox->setGeometry(QRect(290, 10, 271, 361));
        verticalLayout_5 = new QVBoxLayout(distributionParams2GroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        means2GroupBox = new QGroupBox(distributionParams2GroupBox);
        means2GroupBox->setObjectName(QString::fromUtf8("means2GroupBox"));
        gridLayout_8 = new QGridLayout(means2GroupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        uniformMean2LineEdit = new QLineEdit(means2GroupBox);
        uniformMean2LineEdit->setObjectName(QString::fromUtf8("uniformMean2LineEdit"));
        uniformMean2LineEdit->setReadOnly(true);

        gridLayout_8->addWidget(uniformMean2LineEdit, 0, 1, 1, 1);

        uniformMean2TextLabel = new QLabel(means2GroupBox);
        uniformMean2TextLabel->setObjectName(QString::fromUtf8("uniformMean2TextLabel"));

        gridLayout_8->addWidget(uniformMean2TextLabel, 0, 0, 1, 1);

        weibullMean2TextLabel = new QLabel(means2GroupBox);
        weibullMean2TextLabel->setObjectName(QString::fromUtf8("weibullMean2TextLabel"));

        gridLayout_8->addWidget(weibullMean2TextLabel, 1, 0, 1, 1);

        weibullMean2LineEdit = new QLineEdit(means2GroupBox);
        weibullMean2LineEdit->setObjectName(QString::fromUtf8("weibullMean2LineEdit"));
        weibullMean2LineEdit->setReadOnly(true);

        gridLayout_8->addWidget(weibullMean2LineEdit, 1, 1, 1, 1);


        verticalLayout_5->addWidget(means2GroupBox);

        r2GroupBox = new QGroupBox(distributionParams2GroupBox);
        r2GroupBox->setObjectName(QString::fromUtf8("r2GroupBox"));
        gridLayout_5 = new QGridLayout(r2GroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        a2LineEdit = new QLineEdit(r2GroupBox);
        a2LineEdit->setObjectName(QString::fromUtf8("a2LineEdit"));
        a2LineEdit->setReadOnly(true);

        gridLayout_5->addWidget(a2LineEdit, 0, 1, 1, 1);

        a2TextLabel = new QLabel(r2GroupBox);
        a2TextLabel->setObjectName(QString::fromUtf8("a2TextLabel"));

        gridLayout_5->addWidget(a2TextLabel, 0, 0, 1, 1);

        b2TextLabel = new QLabel(r2GroupBox);
        b2TextLabel->setObjectName(QString::fromUtf8("b2TextLabel"));

        gridLayout_5->addWidget(b2TextLabel, 1, 0, 1, 1);

        b2LineEdit = new QLineEdit(r2GroupBox);
        b2LineEdit->setObjectName(QString::fromUtf8("b2LineEdit"));
        b2LineEdit->setReadOnly(true);

        gridLayout_5->addWidget(b2LineEdit, 1, 1, 1, 1);


        verticalLayout_5->addWidget(r2GroupBox);

        w2GroupBox = new QGroupBox(distributionParams2GroupBox);
        w2GroupBox->setObjectName(QString::fromUtf8("w2GroupBox"));
        gridLayout_6 = new QGridLayout(w2GroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        k2TextLabel = new QLabel(w2GroupBox);
        k2TextLabel->setObjectName(QString::fromUtf8("k2TextLabel"));

        gridLayout_6->addWidget(k2TextLabel, 0, 0, 1, 1);

        k2LineEdit = new QLineEdit(w2GroupBox);
        k2LineEdit->setObjectName(QString::fromUtf8("k2LineEdit"));
        k2LineEdit->setReadOnly(true);

        gridLayout_6->addWidget(k2LineEdit, 0, 1, 1, 1);

        lambda2TextLabel = new QLabel(w2GroupBox);
        lambda2TextLabel->setObjectName(QString::fromUtf8("lambda2TextLabel"));

        gridLayout_6->addWidget(lambda2TextLabel, 1, 0, 1, 1);

        lambda2LineEdit = new QLineEdit(w2GroupBox);
        lambda2LineEdit->setObjectName(QString::fromUtf8("lambda2LineEdit"));
        lambda2LineEdit->setReadOnly(true);

        gridLayout_6->addWidget(lambda2LineEdit, 1, 1, 1, 1);


        verticalLayout_5->addWidget(w2GroupBox);

        tabWidget->addTab(tab_2, QString());
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(590, 40, 551, 381));
        customPlot2 = new QCustomPlot(centralwidget);
        customPlot2->setObjectName(QString::fromUtf8("customPlot2"));
        customPlot2->setGeometry(QRect(590, 430, 551, 381));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        outputParamsGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        estimatedSystemLoadGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\321\221\321\202\320\275\320\260\321\217 \320\267\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        rhoTextLabel->setText(QCoreApplication::translate("MainWindow", "\317\201 = \316\273 / \316\274", nullptr));
        rhoExtensionTextLabel->setText(QCoreApplication::translate("MainWindow", "\320\263\320\264\320\265 \316\273 = 1 / \316\274<sub>R</sub> \342\200\224 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217 \320\267\320\260\321\217\320\262\320\276\320\272, \316\274  = 1 / \316\274<sub>W</sub> \342\200\224 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214 \320\276\320\261\321\201\320\273\321\203\320\266\320\270\320\262\320\260\320\275\320\270\321\217 \320\267\320\260\321\217\320\262\320\276\320\272.", nullptr));
        actualSystemLoadGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\272\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\267\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        inputParamsGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        rGroupBox->setTitle(QCoreApplication::translate("MainWindow", "R(a, b)", nullptr));
        aTextLabel->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        bTextLabel->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        wGroupBox->setTitle(QCoreApplication::translate("MainWindow", "W(k, \316\273)", nullptr));
        kTextLabel->setText(QCoreApplication::translate("MainWindow", "k", nullptr));
        lambdaTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273", nullptr));
        tGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        tTextLabel->setText(QCoreApplication::translate("MainWindow", "t", nullptr));
        simulatePushButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        distributionsParamsGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\271", nullptr));
        uniformGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\262\320\275\320\276\320\274\320\265\321\200\320\275\320\276\320\265 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        uniformMeanTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>R</sub> = (a + b) / 2", nullptr));
        uniformVarianceTextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203<sup>2</sup><sub>R</sub> = (b - a)\302\262 / 12", nullptr));
        weibullGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\222\320\265\320\271\320\261\321\203\320\273\320\273\320\260", nullptr));
        weibullMeanTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>W</sub> = \316\273\320\223(1 + 1/k)", nullptr));
        weibullVarianceTextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203<sup>2</sup><sub>W</sub> = \316\273\302\262\320\223(1 + 2/k) - \316\274\302\262", nullptr));
        intensitiesGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270", nullptr));
        inputIntensityTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273 = 1 / \316\274<sub>R</sub>", nullptr));
        outputIntensityTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274 = 1 / \316\274<sub>W</sub>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        inputParams2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        uniform2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\262\320\275\320\276\320\274\320\265\321\200\320\275\320\276\320\265 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        inputIntensity2TextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273", nullptr));
        uniformStd2TextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203<sub>R</sub>", nullptr));
        weibull2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\222\320\265\320\271\320\261\321\203\320\273\320\273\320\260", nullptr));
        outputIntensity2TextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274", nullptr));
        weibullStd2TextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203<sub>W</sub>", nullptr));
        t2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        t2TextLabel->setText(QCoreApplication::translate("MainWindow", "t", nullptr));
        simulate2PushButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        distributionParams2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\271", nullptr));
        means2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\202 \320\276\320\266\320\270\320\264\320\260\320\275\320\270\321\217", nullptr));
        uniformMean2TextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>R</sub> = 1 / \316\273", nullptr));
        weibullMean2TextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>W</sub> = 1 / \316\274", nullptr));
        r2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "R(a, b)", nullptr));
        a2TextLabel->setText(QCoreApplication::translate("MainWindow", "a = \316\274<sub>R</sub> - \342\210\2323 * \317\203<sub>R</sub>", nullptr));
        b2TextLabel->setText(QCoreApplication::translate("MainWindow", "b = \316\274<sub>R</sub> + \342\210\2323 * \317\203<sub>R</sub>", nullptr));
        w2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "W(k, \316\273)", nullptr));
        k2TextLabel->setText(QCoreApplication::translate("MainWindow", "k = (\317\203<sub>W</sub> / \316\274<sub>W</sub>)^(-1.086)", nullptr));
        lambda2TextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273 = \316\274<sub>W</sub> / \320\223(1 + 1/k)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
