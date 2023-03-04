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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGroupBox *weibullDistributionGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *muGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *muMinTextLabel;
    QLineEdit *muMinLineEdit;
    QLabel *muMaxTextLabel;
    QLineEdit *muMaxLineEdit;
    QLabel *muTextLabel;
    QDoubleSpinBox *muDoubleSpinBox;
    QGroupBox *uniformDistributionGroupBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *lambdaGroupBox;
    QGridLayout *gridLayout;
    QLabel *lambdaMinTextLabel;
    QLineEdit *lambdaMinLineEdit;
    QLabel *lambdaMaxTextLabel;
    QLineEdit *lambdaMaxLineEdit;
    QLabel *lambdaTextLabel;
    QDoubleSpinBox *lambdaDoubleSpinBox;
    QGroupBox *sigmaLambdaGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *sigmaLambdaMinTextLabel;
    QLineEdit *sigmaLambdaMinLineEdit;
    QLabel *sigmaLambdaMaxTextLabel;
    QLineEdit *sigmaLambdaMaxLineEdit;
    QLabel *sigmaLambdaTextLabel;
    QDoubleSpinBox *sigmaLambdaDoubleSpinBox;
    QGroupBox *outputParametersGroupBox;
    QGridLayout *gridLayout_10;
    QLabel *actualAverageWaitingTimeTextLabel;
    QLineEdit *actualAverageWaitingTimeLineEdit;
    QPushButton *calculatePushButton;
    QLineEdit *estimatedAverageWaitingTimeLineEdit;
    QLabel *estimatedAverageWaitingTimeTextLabel;
    QGroupBox *ffeGroupBox;
    QGridLayout *gridLayout_5;
    QGroupBox *adequacyVarGroupBox;
    QGridLayout *gridLayout_8;
    QLineEdit *adequacyVarLineEdit;
    QTableWidget *ffeTableWidget;
    QGroupBox *cochranTestGroupBox;
    QGridLayout *gridLayout_6;
    QLineEdit *cochranTestLineEdit;
    QGroupBox *reproducibilityVarGroupBox;
    QGridLayout *gridLayout_7;
    QLineEdit *reproducibilityVarLineEdit;
    QGroupBox *fTestGroupBox;
    QGridLayout *gridLayout_9;
    QLineEdit *fTestLineEdit;
    QGroupBox *coefficientsGroupBox;
    QGridLayout *gridLayout_11;
    QGroupBox *a23GroupBox;
    QGridLayout *gridLayout_18;
    QLineEdit *a23LineEdit;
    QGroupBox *a3GroupBox;
    QGridLayout *gridLayout_15;
    QLineEdit *a3LineEdit;
    QGroupBox *a12GroupBox;
    QGridLayout *gridLayout_16;
    QLineEdit *a12LineEdit;
    QGroupBox *a2GroupBox;
    QGridLayout *gridLayout_14;
    QLineEdit *a2LineEdit;
    QGroupBox *a1GroupBox;
    QGridLayout *gridLayout_13;
    QLineEdit *a1LineEdit;
    QGroupBox *a0GroupBox;
    QGridLayout *gridLayout_12;
    QLineEdit *a0LineEdit;
    QGroupBox *a13GroupBox;
    QGridLayout *gridLayout_17;
    QLineEdit *a13LineEdit;
    QGroupBox *a123GroupBox;
    QGridLayout *gridLayout_19;
    QLineEdit *a123LineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1074, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        weibullDistributionGroupBox = new QGroupBox(centralwidget);
        weibullDistributionGroupBox->setObjectName(QString::fromUtf8("weibullDistributionGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(weibullDistributionGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        muGroupBox = new QGroupBox(weibullDistributionGroupBox);
        muGroupBox->setObjectName(QString::fromUtf8("muGroupBox"));
        gridLayout_2 = new QGridLayout(muGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        muMinTextLabel = new QLabel(muGroupBox);
        muMinTextLabel->setObjectName(QString::fromUtf8("muMinTextLabel"));

        gridLayout_2->addWidget(muMinTextLabel, 0, 0, 1, 1);

        muMinLineEdit = new QLineEdit(muGroupBox);
        muMinLineEdit->setObjectName(QString::fromUtf8("muMinLineEdit"));
        muMinLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(muMinLineEdit, 0, 1, 1, 1);

        muMaxTextLabel = new QLabel(muGroupBox);
        muMaxTextLabel->setObjectName(QString::fromUtf8("muMaxTextLabel"));

        gridLayout_2->addWidget(muMaxTextLabel, 1, 0, 1, 1);

        muMaxLineEdit = new QLineEdit(muGroupBox);
        muMaxLineEdit->setObjectName(QString::fromUtf8("muMaxLineEdit"));
        muMaxLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(muMaxLineEdit, 1, 1, 1, 1);

        muTextLabel = new QLabel(muGroupBox);
        muTextLabel->setObjectName(QString::fromUtf8("muTextLabel"));

        gridLayout_2->addWidget(muTextLabel, 2, 0, 1, 1);

        muDoubleSpinBox = new QDoubleSpinBox(muGroupBox);
        muDoubleSpinBox->setObjectName(QString::fromUtf8("muDoubleSpinBox"));
        muDoubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(muDoubleSpinBox, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(muGroupBox);


        gridLayout_4->addWidget(weibullDistributionGroupBox, 1, 1, 1, 1);

        uniformDistributionGroupBox = new QGroupBox(centralwidget);
        uniformDistributionGroupBox->setObjectName(QString::fromUtf8("uniformDistributionGroupBox"));
        horizontalLayout = new QHBoxLayout(uniformDistributionGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lambdaGroupBox = new QGroupBox(uniformDistributionGroupBox);
        lambdaGroupBox->setObjectName(QString::fromUtf8("lambdaGroupBox"));
        gridLayout = new QGridLayout(lambdaGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lambdaMinTextLabel = new QLabel(lambdaGroupBox);
        lambdaMinTextLabel->setObjectName(QString::fromUtf8("lambdaMinTextLabel"));

        gridLayout->addWidget(lambdaMinTextLabel, 0, 0, 1, 1);

        lambdaMinLineEdit = new QLineEdit(lambdaGroupBox);
        lambdaMinLineEdit->setObjectName(QString::fromUtf8("lambdaMinLineEdit"));
        lambdaMinLineEdit->setReadOnly(true);

        gridLayout->addWidget(lambdaMinLineEdit, 0, 1, 1, 1);

        lambdaMaxTextLabel = new QLabel(lambdaGroupBox);
        lambdaMaxTextLabel->setObjectName(QString::fromUtf8("lambdaMaxTextLabel"));

        gridLayout->addWidget(lambdaMaxTextLabel, 1, 0, 1, 1);

        lambdaMaxLineEdit = new QLineEdit(lambdaGroupBox);
        lambdaMaxLineEdit->setObjectName(QString::fromUtf8("lambdaMaxLineEdit"));
        lambdaMaxLineEdit->setReadOnly(true);

        gridLayout->addWidget(lambdaMaxLineEdit, 1, 1, 1, 1);

        lambdaTextLabel = new QLabel(lambdaGroupBox);
        lambdaTextLabel->setObjectName(QString::fromUtf8("lambdaTextLabel"));

        gridLayout->addWidget(lambdaTextLabel, 2, 0, 1, 1);

        lambdaDoubleSpinBox = new QDoubleSpinBox(lambdaGroupBox);
        lambdaDoubleSpinBox->setObjectName(QString::fromUtf8("lambdaDoubleSpinBox"));
        lambdaDoubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(lambdaDoubleSpinBox, 2, 1, 1, 1);


        horizontalLayout->addWidget(lambdaGroupBox);

        sigmaLambdaGroupBox = new QGroupBox(uniformDistributionGroupBox);
        sigmaLambdaGroupBox->setObjectName(QString::fromUtf8("sigmaLambdaGroupBox"));
        gridLayout_3 = new QGridLayout(sigmaLambdaGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        sigmaLambdaMinTextLabel = new QLabel(sigmaLambdaGroupBox);
        sigmaLambdaMinTextLabel->setObjectName(QString::fromUtf8("sigmaLambdaMinTextLabel"));

        gridLayout_3->addWidget(sigmaLambdaMinTextLabel, 0, 0, 1, 1);

        sigmaLambdaMinLineEdit = new QLineEdit(sigmaLambdaGroupBox);
        sigmaLambdaMinLineEdit->setObjectName(QString::fromUtf8("sigmaLambdaMinLineEdit"));
        sigmaLambdaMinLineEdit->setReadOnly(true);

        gridLayout_3->addWidget(sigmaLambdaMinLineEdit, 0, 1, 1, 1);

        sigmaLambdaMaxTextLabel = new QLabel(sigmaLambdaGroupBox);
        sigmaLambdaMaxTextLabel->setObjectName(QString::fromUtf8("sigmaLambdaMaxTextLabel"));

        gridLayout_3->addWidget(sigmaLambdaMaxTextLabel, 1, 0, 1, 1);

        sigmaLambdaMaxLineEdit = new QLineEdit(sigmaLambdaGroupBox);
        sigmaLambdaMaxLineEdit->setObjectName(QString::fromUtf8("sigmaLambdaMaxLineEdit"));
        sigmaLambdaMaxLineEdit->setReadOnly(true);

        gridLayout_3->addWidget(sigmaLambdaMaxLineEdit, 1, 1, 1, 1);

        sigmaLambdaTextLabel = new QLabel(sigmaLambdaGroupBox);
        sigmaLambdaTextLabel->setObjectName(QString::fromUtf8("sigmaLambdaTextLabel"));

        gridLayout_3->addWidget(sigmaLambdaTextLabel, 2, 0, 1, 1);

        sigmaLambdaDoubleSpinBox = new QDoubleSpinBox(sigmaLambdaGroupBox);
        sigmaLambdaDoubleSpinBox->setObjectName(QString::fromUtf8("sigmaLambdaDoubleSpinBox"));
        sigmaLambdaDoubleSpinBox->setSingleStep(0.010000000000000);

        gridLayout_3->addWidget(sigmaLambdaDoubleSpinBox, 2, 1, 1, 1);


        horizontalLayout->addWidget(sigmaLambdaGroupBox);


        gridLayout_4->addWidget(uniformDistributionGroupBox, 1, 0, 1, 1);

        outputParametersGroupBox = new QGroupBox(centralwidget);
        outputParametersGroupBox->setObjectName(QString::fromUtf8("outputParametersGroupBox"));
        gridLayout_10 = new QGridLayout(outputParametersGroupBox);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        actualAverageWaitingTimeTextLabel = new QLabel(outputParametersGroupBox);
        actualAverageWaitingTimeTextLabel->setObjectName(QString::fromUtf8("actualAverageWaitingTimeTextLabel"));

        gridLayout_10->addWidget(actualAverageWaitingTimeTextLabel, 2, 0, 1, 1);

        actualAverageWaitingTimeLineEdit = new QLineEdit(outputParametersGroupBox);
        actualAverageWaitingTimeLineEdit->setObjectName(QString::fromUtf8("actualAverageWaitingTimeLineEdit"));

        gridLayout_10->addWidget(actualAverageWaitingTimeLineEdit, 2, 1, 1, 1);

        calculatePushButton = new QPushButton(outputParametersGroupBox);
        calculatePushButton->setObjectName(QString::fromUtf8("calculatePushButton"));

        gridLayout_10->addWidget(calculatePushButton, 0, 0, 1, 2);

        estimatedAverageWaitingTimeLineEdit = new QLineEdit(outputParametersGroupBox);
        estimatedAverageWaitingTimeLineEdit->setObjectName(QString::fromUtf8("estimatedAverageWaitingTimeLineEdit"));

        gridLayout_10->addWidget(estimatedAverageWaitingTimeLineEdit, 1, 1, 1, 1);

        estimatedAverageWaitingTimeTextLabel = new QLabel(outputParametersGroupBox);
        estimatedAverageWaitingTimeTextLabel->setObjectName(QString::fromUtf8("estimatedAverageWaitingTimeTextLabel"));

        gridLayout_10->addWidget(estimatedAverageWaitingTimeTextLabel, 1, 0, 1, 1);


        gridLayout_4->addWidget(outputParametersGroupBox, 1, 2, 1, 1);

        ffeGroupBox = new QGroupBox(centralwidget);
        ffeGroupBox->setObjectName(QString::fromUtf8("ffeGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ffeGroupBox->sizePolicy().hasHeightForWidth());
        ffeGroupBox->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(ffeGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        adequacyVarGroupBox = new QGroupBox(ffeGroupBox);
        adequacyVarGroupBox->setObjectName(QString::fromUtf8("adequacyVarGroupBox"));
        gridLayout_8 = new QGridLayout(adequacyVarGroupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        adequacyVarLineEdit = new QLineEdit(adequacyVarGroupBox);
        adequacyVarLineEdit->setObjectName(QString::fromUtf8("adequacyVarLineEdit"));
        adequacyVarLineEdit->setReadOnly(true);

        gridLayout_8->addWidget(adequacyVarLineEdit, 0, 0, 1, 1);


        gridLayout_5->addWidget(adequacyVarGroupBox, 2, 2, 1, 1);

        ffeTableWidget = new QTableWidget(ffeGroupBox);
        if (ffeTableWidget->columnCount() < 10)
            ffeTableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ffeTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ffeTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ffeTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ffeTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ffeTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ffeTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ffeTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ffeTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ffeTableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ffeTableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        ffeTableWidget->setObjectName(QString::fromUtf8("ffeTableWidget"));

        gridLayout_5->addWidget(ffeTableWidget, 0, 0, 1, 4);

        cochranTestGroupBox = new QGroupBox(ffeGroupBox);
        cochranTestGroupBox->setObjectName(QString::fromUtf8("cochranTestGroupBox"));
        gridLayout_6 = new QGridLayout(cochranTestGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        cochranTestLineEdit = new QLineEdit(cochranTestGroupBox);
        cochranTestLineEdit->setObjectName(QString::fromUtf8("cochranTestLineEdit"));
        cochranTestLineEdit->setReadOnly(true);

        gridLayout_6->addWidget(cochranTestLineEdit, 0, 0, 1, 1);


        gridLayout_5->addWidget(cochranTestGroupBox, 2, 0, 1, 1);

        reproducibilityVarGroupBox = new QGroupBox(ffeGroupBox);
        reproducibilityVarGroupBox->setObjectName(QString::fromUtf8("reproducibilityVarGroupBox"));
        gridLayout_7 = new QGridLayout(reproducibilityVarGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        reproducibilityVarLineEdit = new QLineEdit(reproducibilityVarGroupBox);
        reproducibilityVarLineEdit->setObjectName(QString::fromUtf8("reproducibilityVarLineEdit"));
        reproducibilityVarLineEdit->setReadOnly(true);

        gridLayout_7->addWidget(reproducibilityVarLineEdit, 0, 0, 1, 1);


        gridLayout_5->addWidget(reproducibilityVarGroupBox, 2, 1, 1, 1);

        fTestGroupBox = new QGroupBox(ffeGroupBox);
        fTestGroupBox->setObjectName(QString::fromUtf8("fTestGroupBox"));
        gridLayout_9 = new QGridLayout(fTestGroupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        fTestLineEdit = new QLineEdit(fTestGroupBox);
        fTestLineEdit->setObjectName(QString::fromUtf8("fTestLineEdit"));
        fTestLineEdit->setReadOnly(true);

        gridLayout_9->addWidget(fTestLineEdit, 0, 0, 1, 1);


        gridLayout_5->addWidget(fTestGroupBox, 2, 3, 1, 1);

        coefficientsGroupBox = new QGroupBox(ffeGroupBox);
        coefficientsGroupBox->setObjectName(QString::fromUtf8("coefficientsGroupBox"));
        gridLayout_11 = new QGridLayout(coefficientsGroupBox);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        a23GroupBox = new QGroupBox(coefficientsGroupBox);
        a23GroupBox->setObjectName(QString::fromUtf8("a23GroupBox"));
        gridLayout_18 = new QGridLayout(a23GroupBox);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        a23LineEdit = new QLineEdit(a23GroupBox);
        a23LineEdit->setObjectName(QString::fromUtf8("a23LineEdit"));

        gridLayout_18->addWidget(a23LineEdit, 0, 0, 1, 1);


        gridLayout_11->addWidget(a23GroupBox, 0, 6, 1, 1);

        a3GroupBox = new QGroupBox(coefficientsGroupBox);
        a3GroupBox->setObjectName(QString::fromUtf8("a3GroupBox"));
        gridLayout_15 = new QGridLayout(a3GroupBox);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        a3LineEdit = new QLineEdit(a3GroupBox);
        a3LineEdit->setObjectName(QString::fromUtf8("a3LineEdit"));

        gridLayout_15->addWidget(a3LineEdit, 0, 0, 1, 1);


        gridLayout_11->addWidget(a3GroupBox, 0, 3, 1, 1);

        a12GroupBox = new QGroupBox(coefficientsGroupBox);
        a12GroupBox->setObjectName(QString::fromUtf8("a12GroupBox"));
        gridLayout_16 = new QGridLayout(a12GroupBox);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        a12LineEdit = new QLineEdit(a12GroupBox);
        a12LineEdit->setObjectName(QString::fromUtf8("a12LineEdit"));

        gridLayout_16->addWidget(a12LineEdit, 0, 0, 1, 1);


        gridLayout_11->addWidget(a12GroupBox, 0, 4, 1, 1);

        a2GroupBox = new QGroupBox(coefficientsGroupBox);
        a2GroupBox->setObjectName(QString::fromUtf8("a2GroupBox"));
        gridLayout_14 = new QGridLayout(a2GroupBox);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        a2LineEdit = new QLineEdit(a2GroupBox);
        a2LineEdit->setObjectName(QString::fromUtf8("a2LineEdit"));

        gridLayout_14->addWidget(a2LineEdit, 0, 0, 1, 1);


        gridLayout_11->addWidget(a2GroupBox, 0, 2, 1, 1);

        a1GroupBox = new QGroupBox(coefficientsGroupBox);
        a1GroupBox->setObjectName(QString::fromUtf8("a1GroupBox"));
        gridLayout_13 = new QGridLayout(a1GroupBox);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        a1LineEdit = new QLineEdit(a1GroupBox);
        a1LineEdit->setObjectName(QString::fromUtf8("a1LineEdit"));

        gridLayout_13->addWidget(a1LineEdit, 0, 0, 1, 1);


        gridLayout_11->addWidget(a1GroupBox, 0, 1, 1, 1);

        a0GroupBox = new QGroupBox(coefficientsGroupBox);
        a0GroupBox->setObjectName(QString::fromUtf8("a0GroupBox"));
        gridLayout_12 = new QGridLayout(a0GroupBox);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        a0LineEdit = new QLineEdit(a0GroupBox);
        a0LineEdit->setObjectName(QString::fromUtf8("a0LineEdit"));

        gridLayout_12->addWidget(a0LineEdit, 0, 0, 1, 1);


        gridLayout_11->addWidget(a0GroupBox, 0, 0, 1, 1);

        a13GroupBox = new QGroupBox(coefficientsGroupBox);
        a13GroupBox->setObjectName(QString::fromUtf8("a13GroupBox"));
        gridLayout_17 = new QGridLayout(a13GroupBox);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        a13LineEdit = new QLineEdit(a13GroupBox);
        a13LineEdit->setObjectName(QString::fromUtf8("a13LineEdit"));

        gridLayout_17->addWidget(a13LineEdit, 0, 0, 1, 1);


        gridLayout_11->addWidget(a13GroupBox, 0, 5, 1, 1);

        a123GroupBox = new QGroupBox(coefficientsGroupBox);
        a123GroupBox->setObjectName(QString::fromUtf8("a123GroupBox"));
        gridLayout_19 = new QGridLayout(a123GroupBox);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        a123LineEdit = new QLineEdit(a123GroupBox);
        a123LineEdit->setObjectName(QString::fromUtf8("a123LineEdit"));

        gridLayout_19->addWidget(a123LineEdit, 0, 0, 1, 1);


        gridLayout_11->addWidget(a123GroupBox, 0, 7, 1, 1);


        gridLayout_5->addWidget(coefficientsGroupBox, 1, 0, 1, 4);


        gridLayout_4->addWidget(ffeGroupBox, 0, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        weibullDistributionGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\222\320\265\320\271\320\261\321\203\320\273\320\273\320\260", nullptr));
        muGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\316\274 \342\200\224 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214", nullptr));
        muMinTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>min</sub>", nullptr));
        muMaxTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>max</sub>", nullptr));
        muTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274", nullptr));
        uniformDistributionGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\262\320\275\320\276\320\274\320\265\321\200\320\275\320\276\320\265 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        lambdaGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\316\273 \342\200\224 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214", nullptr));
        lambdaMinTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273<sub>min</sub>", nullptr));
        lambdaMaxTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273<sub>max</sub>", nullptr));
        lambdaTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273", nullptr));
        sigmaLambdaGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\317\203(\316\273) \342\200\224 \321\201\321\200\320\265\320\264\320\275\320\265\320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\270\321\207\320\275\320\276\320\265 \320\276\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265", nullptr));
        sigmaLambdaMinTextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203<sub>min</sub>(\316\273)", nullptr));
        sigmaLambdaMaxTextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203<sub>max</sub>(\316\273)", nullptr));
        sigmaLambdaTextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203(\316\273)", nullptr));
        outputParametersGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        actualAverageWaitingTimeTextLabel->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\272\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 t\314\205<sub>\320\276\320\266</sub>", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        estimatedAverageWaitingTimeTextLabel->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\321\221\321\202\320\275\320\276\320\265 t\314\205<sub>\320\276\320\266</sub>", nullptr));
        ffeGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\244\320\255", nullptr));
        adequacyVarGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\201\320\277\320\265\321\200\321\201\320\270\321\217 \320\260\320\264\320\265\320\272\320\262\320\260\321\202\320\275\320\276\321\201\321\202\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ffeTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ffeTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "x1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ffeTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "x2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ffeTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "x3", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ffeTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\310\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ffeTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\317\203\302\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = ffeTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\270\321\207\320\275\320\276 \320\275\320\265\320\273\320\270\320\275\320\265\320\271\320\275\320\260\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = ffeTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\275\320\270\321\206\320\260 \320\247\320\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = ffeTableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\320\275\320\265\320\271\320\275\320\260\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = ffeTableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\275\320\270\321\206\320\260 \320\233", nullptr));
        cochranTestGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \320\232\320\276\321\205\321\200\320\265\320\275\320\260", nullptr));
        reproducibilityVarGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\201\320\277\320\265\321\200\321\201\320\270\321\217 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\320\274\320\276\321\201\321\202\320\270", nullptr));
        fTestGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \320\244\320\270\321\210\320\265\321\200\320\260", nullptr));
        coefficientsGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\321\213", nullptr));
        a23GroupBox->setTitle(QCoreApplication::translate("MainWindow", "a23", nullptr));
        a3GroupBox->setTitle(QCoreApplication::translate("MainWindow", "a3", nullptr));
        a12GroupBox->setTitle(QCoreApplication::translate("MainWindow", "a12", nullptr));
        a2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "a2", nullptr));
        a1GroupBox->setTitle(QCoreApplication::translate("MainWindow", "a1", nullptr));
        a0GroupBox->setTitle(QCoreApplication::translate("MainWindow", "a0", nullptr));
        a13GroupBox->setTitle(QCoreApplication::translate("MainWindow", "a13", nullptr));
        a123GroupBox->setTitle(QCoreApplication::translate("MainWindow", "a123", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
