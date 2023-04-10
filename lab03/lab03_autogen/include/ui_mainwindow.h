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
    QGridLayout *gridLayout_8;
    QGroupBox *requestGenerator1GroupBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *lambda1GroupBox;
    QGridLayout *gridLayout;
    QLabel *lambda1MinTextLabel;
    QLineEdit *lambda1MinLineEdit;
    QLabel *lambda1MaxTextLabel;
    QLineEdit *lambda1MaxLineEdit;
    QLabel *lambda1TextLabel;
    QDoubleSpinBox *lambda1DoubleSpinBox;
    QGroupBox *sigmaLambda1GroupBox;
    QGridLayout *gridLayout_3;
    QLabel *sigmaLambda1MinTextLabel;
    QLineEdit *sigmaLambda1MinLineEdit;
    QLabel *sigmaLambda1MaxTextLabel;
    QLineEdit *sigmaLambda1MaxLineEdit;
    QLabel *sigmaLambda1TextLabel;
    QDoubleSpinBox *sigmaLambda1DoubleSpinBox;
    QGroupBox *outputParametersGroupBox;
    QGridLayout *gridLayout_10;
    QLineEdit *yHatFractionalFactorialExperimentLineEdit;
    QLineEdit *uHatFullFactorialExperimentLineEdit;
    QLabel *yHatFractionalFactorialExperimentTextLabel;
    QLabel *uHatFractionalFactorialExperimentTextLabel;
    QLabel *uHatFullFactorialExperimentTextLabel;
    QLabel *dyHatFullFactorialExperimentTextLabel;
    QLabel *actualAverageWaitingTimeTextLabel;
    QLabel *yHatFullFactorialExperimentTextLabel;
    QLineEdit *uHatFractionalFactorialExperimentLineEdit;
    QLineEdit *yHatFullFactorialExperimentLineEdit;
    QLineEdit *dyHatFullFactorialExperimentLineEdit;
    QLabel *duHatFullFactorialExperimentTextLabel;
    QLabel *dyHatFractionalFactorialExperimentTextLabel;
    QLabel *duHatFractionalFactorialExperimentTextLabel;
    QLineEdit *duHatFullFactorialExperimentLineEdit;
    QLineEdit *dyHatFractionalFactorialExperimentLineEdit;
    QLineEdit *duHatFractionalFactorialExperimentLineEdit;
    QPushButton *calculatePushButton;
    QLineEdit *actualAverageWaitingTimeLineEdit;
    QGroupBox *requestGenerator2GroupBox;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *lambda2GroupBox;
    QGridLayout *gridLayout_4;
    QLabel *lambda2MinTextLabel;
    QLineEdit *lambda2MinLineEdit;
    QLabel *lambda2MaxTextLabel;
    QLineEdit *lambda2MaxLineEdit;
    QLabel *lambda2TextLabel;
    QDoubleSpinBox *lambda2DoubleSpinBox;
    QGroupBox *sigmaLambda2GroupBox;
    QGridLayout *gridLayout_6;
    QLabel *sigmaLambda2MinTextLabel;
    QLineEdit *sigmaLambda2MinLineEdit;
    QLabel *sigmaLambda2MaxTextLabel;
    QLineEdit *sigmaLambda2MaxLineEdit;
    QLabel *sigmaLambda2TextLabel;
    QDoubleSpinBox *sigmaLambda2DoubleSpinBox;
    QGroupBox *requestProcessorGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *mu1GroupBox;
    QGridLayout *gridLayout_2;
    QLabel *mu1MinTextLabel;
    QLineEdit *mu1MinLineEdit;
    QLabel *mu1MaxTextLabel;
    QLineEdit *mu1MaxLineEdit;
    QLabel *mu1TextLabel;
    QDoubleSpinBox *mu1DoubleSpinBox;
    QGroupBox *mu2GroupBox;
    QGridLayout *gridLayout_9;
    QLabel *mu2MinTextLabel;
    QLineEdit *mu2MinLineEdit;
    QLabel *mu2MaxTextLabel;
    QLineEdit *mu2MaxLineEdit;
    QLabel *mu2TextLabel;
    QDoubleSpinBox *mu2DoubleSpinBox;
    QGroupBox *fullFactorialExperimentGroupBox;
    QGridLayout *gridLayout_5;
    QTableWidget *fullFactorialExperimentTableWidget;
    QGroupBox *modelsFullFactorialExperimentGroupBox;
    QGridLayout *gridLayout_11;
    QLabel *yHatRegressionFullFactorialExperimentTextLabel;
    QLabel *uHatRegressionFullFactorialExperimentTextLabel;
    QLineEdit *yHatRegressionFullFactorialExperimentLineEdit;
    QLineEdit *uHatRegressionFullFactorialExperimentLineEdit;
    QGroupBox *fractionalFactorialExperimentGroupBox;
    QGridLayout *gridLayout_7;
    QTableWidget *fractionalFactorialExperimentTableWidget;
    QGroupBox *modelsFractionalFactorialExperimentGroupBox;
    QGridLayout *gridLayout_12;
    QLabel *yHatRegressionFractionalFactorialExperimentTextLabel;
    QLabel *uHatRegressionFractionalFactorialExperimentTextLabel;
    QLineEdit *yHatRegressionFractionalFactorialExperimentLineEdit;
    QLineEdit *uHatRegressionFractionalFactorialExperimentLineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1900, 900);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_8 = new QGridLayout(centralwidget);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        requestGenerator1GroupBox = new QGroupBox(centralwidget);
        requestGenerator1GroupBox->setObjectName(QString::fromUtf8("requestGenerator1GroupBox"));
        horizontalLayout = new QHBoxLayout(requestGenerator1GroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lambda1GroupBox = new QGroupBox(requestGenerator1GroupBox);
        lambda1GroupBox->setObjectName(QString::fromUtf8("lambda1GroupBox"));
        gridLayout = new QGridLayout(lambda1GroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lambda1MinTextLabel = new QLabel(lambda1GroupBox);
        lambda1MinTextLabel->setObjectName(QString::fromUtf8("lambda1MinTextLabel"));

        gridLayout->addWidget(lambda1MinTextLabel, 0, 0, 1, 1);

        lambda1MinLineEdit = new QLineEdit(lambda1GroupBox);
        lambda1MinLineEdit->setObjectName(QString::fromUtf8("lambda1MinLineEdit"));
        lambda1MinLineEdit->setReadOnly(true);

        gridLayout->addWidget(lambda1MinLineEdit, 0, 1, 1, 1);

        lambda1MaxTextLabel = new QLabel(lambda1GroupBox);
        lambda1MaxTextLabel->setObjectName(QString::fromUtf8("lambda1MaxTextLabel"));

        gridLayout->addWidget(lambda1MaxTextLabel, 1, 0, 1, 1);

        lambda1MaxLineEdit = new QLineEdit(lambda1GroupBox);
        lambda1MaxLineEdit->setObjectName(QString::fromUtf8("lambda1MaxLineEdit"));
        lambda1MaxLineEdit->setReadOnly(true);

        gridLayout->addWidget(lambda1MaxLineEdit, 1, 1, 1, 1);

        lambda1TextLabel = new QLabel(lambda1GroupBox);
        lambda1TextLabel->setObjectName(QString::fromUtf8("lambda1TextLabel"));

        gridLayout->addWidget(lambda1TextLabel, 2, 0, 1, 1);

        lambda1DoubleSpinBox = new QDoubleSpinBox(lambda1GroupBox);
        lambda1DoubleSpinBox->setObjectName(QString::fromUtf8("lambda1DoubleSpinBox"));
        lambda1DoubleSpinBox->setDecimals(3);
        lambda1DoubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(lambda1DoubleSpinBox, 2, 1, 1, 1);


        horizontalLayout->addWidget(lambda1GroupBox);

        sigmaLambda1GroupBox = new QGroupBox(requestGenerator1GroupBox);
        sigmaLambda1GroupBox->setObjectName(QString::fromUtf8("sigmaLambda1GroupBox"));
        gridLayout_3 = new QGridLayout(sigmaLambda1GroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        sigmaLambda1MinTextLabel = new QLabel(sigmaLambda1GroupBox);
        sigmaLambda1MinTextLabel->setObjectName(QString::fromUtf8("sigmaLambda1MinTextLabel"));

        gridLayout_3->addWidget(sigmaLambda1MinTextLabel, 0, 0, 1, 1);

        sigmaLambda1MinLineEdit = new QLineEdit(sigmaLambda1GroupBox);
        sigmaLambda1MinLineEdit->setObjectName(QString::fromUtf8("sigmaLambda1MinLineEdit"));
        sigmaLambda1MinLineEdit->setReadOnly(true);

        gridLayout_3->addWidget(sigmaLambda1MinLineEdit, 0, 1, 1, 1);

        sigmaLambda1MaxTextLabel = new QLabel(sigmaLambda1GroupBox);
        sigmaLambda1MaxTextLabel->setObjectName(QString::fromUtf8("sigmaLambda1MaxTextLabel"));

        gridLayout_3->addWidget(sigmaLambda1MaxTextLabel, 1, 0, 1, 1);

        sigmaLambda1MaxLineEdit = new QLineEdit(sigmaLambda1GroupBox);
        sigmaLambda1MaxLineEdit->setObjectName(QString::fromUtf8("sigmaLambda1MaxLineEdit"));
        sigmaLambda1MaxLineEdit->setReadOnly(true);

        gridLayout_3->addWidget(sigmaLambda1MaxLineEdit, 1, 1, 1, 1);

        sigmaLambda1TextLabel = new QLabel(sigmaLambda1GroupBox);
        sigmaLambda1TextLabel->setObjectName(QString::fromUtf8("sigmaLambda1TextLabel"));

        gridLayout_3->addWidget(sigmaLambda1TextLabel, 2, 0, 1, 1);

        sigmaLambda1DoubleSpinBox = new QDoubleSpinBox(sigmaLambda1GroupBox);
        sigmaLambda1DoubleSpinBox->setObjectName(QString::fromUtf8("sigmaLambda1DoubleSpinBox"));
        sigmaLambda1DoubleSpinBox->setDecimals(3);
        sigmaLambda1DoubleSpinBox->setSingleStep(0.010000000000000);

        gridLayout_3->addWidget(sigmaLambda1DoubleSpinBox, 2, 1, 1, 1);


        horizontalLayout->addWidget(sigmaLambda1GroupBox);


        gridLayout_8->addWidget(requestGenerator1GroupBox, 2, 0, 1, 1);

        outputParametersGroupBox = new QGroupBox(centralwidget);
        outputParametersGroupBox->setObjectName(QString::fromUtf8("outputParametersGroupBox"));
        gridLayout_10 = new QGridLayout(outputParametersGroupBox);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        yHatFractionalFactorialExperimentLineEdit = new QLineEdit(outputParametersGroupBox);
        yHatFractionalFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("yHatFractionalFactorialExperimentLineEdit"));
        yHatFractionalFactorialExperimentLineEdit->setReadOnly(true);

        gridLayout_10->addWidget(yHatFractionalFactorialExperimentLineEdit, 4, 1, 1, 1);

        uHatFullFactorialExperimentLineEdit = new QLineEdit(outputParametersGroupBox);
        uHatFullFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("uHatFullFactorialExperimentLineEdit"));
        uHatFullFactorialExperimentLineEdit->setReadOnly(true);

        gridLayout_10->addWidget(uHatFullFactorialExperimentLineEdit, 3, 1, 1, 1);

        yHatFractionalFactorialExperimentTextLabel = new QLabel(outputParametersGroupBox);
        yHatFractionalFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("yHatFractionalFactorialExperimentTextLabel"));

        gridLayout_10->addWidget(yHatFractionalFactorialExperimentTextLabel, 4, 0, 1, 1);

        uHatFractionalFactorialExperimentTextLabel = new QLabel(outputParametersGroupBox);
        uHatFractionalFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("uHatFractionalFactorialExperimentTextLabel"));

        gridLayout_10->addWidget(uHatFractionalFactorialExperimentTextLabel, 5, 0, 1, 1);

        uHatFullFactorialExperimentTextLabel = new QLabel(outputParametersGroupBox);
        uHatFullFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("uHatFullFactorialExperimentTextLabel"));

        gridLayout_10->addWidget(uHatFullFactorialExperimentTextLabel, 3, 0, 1, 1);

        dyHatFullFactorialExperimentTextLabel = new QLabel(outputParametersGroupBox);
        dyHatFullFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("dyHatFullFactorialExperimentTextLabel"));

        gridLayout_10->addWidget(dyHatFullFactorialExperimentTextLabel, 2, 2, 1, 1);

        actualAverageWaitingTimeTextLabel = new QLabel(outputParametersGroupBox);
        actualAverageWaitingTimeTextLabel->setObjectName(QString::fromUtf8("actualAverageWaitingTimeTextLabel"));

        gridLayout_10->addWidget(actualAverageWaitingTimeTextLabel, 1, 0, 1, 1);

        yHatFullFactorialExperimentTextLabel = new QLabel(outputParametersGroupBox);
        yHatFullFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("yHatFullFactorialExperimentTextLabel"));

        gridLayout_10->addWidget(yHatFullFactorialExperimentTextLabel, 2, 0, 1, 1);

        uHatFractionalFactorialExperimentLineEdit = new QLineEdit(outputParametersGroupBox);
        uHatFractionalFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("uHatFractionalFactorialExperimentLineEdit"));
        uHatFractionalFactorialExperimentLineEdit->setReadOnly(true);

        gridLayout_10->addWidget(uHatFractionalFactorialExperimentLineEdit, 5, 1, 1, 1);

        yHatFullFactorialExperimentLineEdit = new QLineEdit(outputParametersGroupBox);
        yHatFullFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("yHatFullFactorialExperimentLineEdit"));
        yHatFullFactorialExperimentLineEdit->setReadOnly(true);

        gridLayout_10->addWidget(yHatFullFactorialExperimentLineEdit, 2, 1, 1, 1);

        dyHatFullFactorialExperimentLineEdit = new QLineEdit(outputParametersGroupBox);
        dyHatFullFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("dyHatFullFactorialExperimentLineEdit"));
        dyHatFullFactorialExperimentLineEdit->setReadOnly(true);

        gridLayout_10->addWidget(dyHatFullFactorialExperimentLineEdit, 2, 3, 1, 1);

        duHatFullFactorialExperimentTextLabel = new QLabel(outputParametersGroupBox);
        duHatFullFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("duHatFullFactorialExperimentTextLabel"));

        gridLayout_10->addWidget(duHatFullFactorialExperimentTextLabel, 3, 2, 1, 1);

        dyHatFractionalFactorialExperimentTextLabel = new QLabel(outputParametersGroupBox);
        dyHatFractionalFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("dyHatFractionalFactorialExperimentTextLabel"));

        gridLayout_10->addWidget(dyHatFractionalFactorialExperimentTextLabel, 4, 2, 1, 1);

        duHatFractionalFactorialExperimentTextLabel = new QLabel(outputParametersGroupBox);
        duHatFractionalFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("duHatFractionalFactorialExperimentTextLabel"));

        gridLayout_10->addWidget(duHatFractionalFactorialExperimentTextLabel, 5, 2, 1, 1);

        duHatFullFactorialExperimentLineEdit = new QLineEdit(outputParametersGroupBox);
        duHatFullFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("duHatFullFactorialExperimentLineEdit"));
        duHatFullFactorialExperimentLineEdit->setReadOnly(true);

        gridLayout_10->addWidget(duHatFullFactorialExperimentLineEdit, 3, 3, 1, 1);

        dyHatFractionalFactorialExperimentLineEdit = new QLineEdit(outputParametersGroupBox);
        dyHatFractionalFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("dyHatFractionalFactorialExperimentLineEdit"));
        dyHatFractionalFactorialExperimentLineEdit->setReadOnly(true);

        gridLayout_10->addWidget(dyHatFractionalFactorialExperimentLineEdit, 4, 3, 1, 1);

        duHatFractionalFactorialExperimentLineEdit = new QLineEdit(outputParametersGroupBox);
        duHatFractionalFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("duHatFractionalFactorialExperimentLineEdit"));
        duHatFractionalFactorialExperimentLineEdit->setReadOnly(true);

        gridLayout_10->addWidget(duHatFractionalFactorialExperimentLineEdit, 5, 3, 1, 1);

        calculatePushButton = new QPushButton(outputParametersGroupBox);
        calculatePushButton->setObjectName(QString::fromUtf8("calculatePushButton"));

        gridLayout_10->addWidget(calculatePushButton, 0, 0, 1, 4);

        actualAverageWaitingTimeLineEdit = new QLineEdit(outputParametersGroupBox);
        actualAverageWaitingTimeLineEdit->setObjectName(QString::fromUtf8("actualAverageWaitingTimeLineEdit"));
        actualAverageWaitingTimeLineEdit->setReadOnly(true);

        gridLayout_10->addWidget(actualAverageWaitingTimeLineEdit, 1, 1, 1, 3);


        gridLayout_8->addWidget(outputParametersGroupBox, 2, 4, 1, 1);

        requestGenerator2GroupBox = new QGroupBox(centralwidget);
        requestGenerator2GroupBox->setObjectName(QString::fromUtf8("requestGenerator2GroupBox"));
        horizontalLayout_3 = new QHBoxLayout(requestGenerator2GroupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lambda2GroupBox = new QGroupBox(requestGenerator2GroupBox);
        lambda2GroupBox->setObjectName(QString::fromUtf8("lambda2GroupBox"));
        gridLayout_4 = new QGridLayout(lambda2GroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lambda2MinTextLabel = new QLabel(lambda2GroupBox);
        lambda2MinTextLabel->setObjectName(QString::fromUtf8("lambda2MinTextLabel"));

        gridLayout_4->addWidget(lambda2MinTextLabel, 0, 0, 1, 1);

        lambda2MinLineEdit = new QLineEdit(lambda2GroupBox);
        lambda2MinLineEdit->setObjectName(QString::fromUtf8("lambda2MinLineEdit"));
        lambda2MinLineEdit->setReadOnly(true);

        gridLayout_4->addWidget(lambda2MinLineEdit, 0, 1, 1, 1);

        lambda2MaxTextLabel = new QLabel(lambda2GroupBox);
        lambda2MaxTextLabel->setObjectName(QString::fromUtf8("lambda2MaxTextLabel"));

        gridLayout_4->addWidget(lambda2MaxTextLabel, 1, 0, 1, 1);

        lambda2MaxLineEdit = new QLineEdit(lambda2GroupBox);
        lambda2MaxLineEdit->setObjectName(QString::fromUtf8("lambda2MaxLineEdit"));
        lambda2MaxLineEdit->setReadOnly(true);

        gridLayout_4->addWidget(lambda2MaxLineEdit, 1, 1, 1, 1);

        lambda2TextLabel = new QLabel(lambda2GroupBox);
        lambda2TextLabel->setObjectName(QString::fromUtf8("lambda2TextLabel"));

        gridLayout_4->addWidget(lambda2TextLabel, 2, 0, 1, 1);

        lambda2DoubleSpinBox = new QDoubleSpinBox(lambda2GroupBox);
        lambda2DoubleSpinBox->setObjectName(QString::fromUtf8("lambda2DoubleSpinBox"));
        lambda2DoubleSpinBox->setDecimals(3);
        lambda2DoubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(lambda2DoubleSpinBox, 2, 1, 1, 1);


        horizontalLayout_3->addWidget(lambda2GroupBox);

        sigmaLambda2GroupBox = new QGroupBox(requestGenerator2GroupBox);
        sigmaLambda2GroupBox->setObjectName(QString::fromUtf8("sigmaLambda2GroupBox"));
        gridLayout_6 = new QGridLayout(sigmaLambda2GroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        sigmaLambda2MinTextLabel = new QLabel(sigmaLambda2GroupBox);
        sigmaLambda2MinTextLabel->setObjectName(QString::fromUtf8("sigmaLambda2MinTextLabel"));

        gridLayout_6->addWidget(sigmaLambda2MinTextLabel, 0, 0, 1, 1);

        sigmaLambda2MinLineEdit = new QLineEdit(sigmaLambda2GroupBox);
        sigmaLambda2MinLineEdit->setObjectName(QString::fromUtf8("sigmaLambda2MinLineEdit"));
        sigmaLambda2MinLineEdit->setReadOnly(true);

        gridLayout_6->addWidget(sigmaLambda2MinLineEdit, 0, 1, 1, 1);

        sigmaLambda2MaxTextLabel = new QLabel(sigmaLambda2GroupBox);
        sigmaLambda2MaxTextLabel->setObjectName(QString::fromUtf8("sigmaLambda2MaxTextLabel"));

        gridLayout_6->addWidget(sigmaLambda2MaxTextLabel, 1, 0, 1, 1);

        sigmaLambda2MaxLineEdit = new QLineEdit(sigmaLambda2GroupBox);
        sigmaLambda2MaxLineEdit->setObjectName(QString::fromUtf8("sigmaLambda2MaxLineEdit"));
        sigmaLambda2MaxLineEdit->setReadOnly(true);

        gridLayout_6->addWidget(sigmaLambda2MaxLineEdit, 1, 1, 1, 1);

        sigmaLambda2TextLabel = new QLabel(sigmaLambda2GroupBox);
        sigmaLambda2TextLabel->setObjectName(QString::fromUtf8("sigmaLambda2TextLabel"));

        gridLayout_6->addWidget(sigmaLambda2TextLabel, 2, 0, 1, 1);

        sigmaLambda2DoubleSpinBox = new QDoubleSpinBox(sigmaLambda2GroupBox);
        sigmaLambda2DoubleSpinBox->setObjectName(QString::fromUtf8("sigmaLambda2DoubleSpinBox"));
        sigmaLambda2DoubleSpinBox->setDecimals(3);
        sigmaLambda2DoubleSpinBox->setSingleStep(0.010000000000000);

        gridLayout_6->addWidget(sigmaLambda2DoubleSpinBox, 2, 1, 1, 1);


        horizontalLayout_3->addWidget(sigmaLambda2GroupBox);


        gridLayout_8->addWidget(requestGenerator2GroupBox, 2, 1, 1, 1);

        requestProcessorGroupBox = new QGroupBox(centralwidget);
        requestProcessorGroupBox->setObjectName(QString::fromUtf8("requestProcessorGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(requestProcessorGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mu1GroupBox = new QGroupBox(requestProcessorGroupBox);
        mu1GroupBox->setObjectName(QString::fromUtf8("mu1GroupBox"));
        gridLayout_2 = new QGridLayout(mu1GroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mu1MinTextLabel = new QLabel(mu1GroupBox);
        mu1MinTextLabel->setObjectName(QString::fromUtf8("mu1MinTextLabel"));

        gridLayout_2->addWidget(mu1MinTextLabel, 0, 0, 1, 1);

        mu1MinLineEdit = new QLineEdit(mu1GroupBox);
        mu1MinLineEdit->setObjectName(QString::fromUtf8("mu1MinLineEdit"));
        mu1MinLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(mu1MinLineEdit, 0, 1, 1, 1);

        mu1MaxTextLabel = new QLabel(mu1GroupBox);
        mu1MaxTextLabel->setObjectName(QString::fromUtf8("mu1MaxTextLabel"));

        gridLayout_2->addWidget(mu1MaxTextLabel, 1, 0, 1, 1);

        mu1MaxLineEdit = new QLineEdit(mu1GroupBox);
        mu1MaxLineEdit->setObjectName(QString::fromUtf8("mu1MaxLineEdit"));
        mu1MaxLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(mu1MaxLineEdit, 1, 1, 1, 1);

        mu1TextLabel = new QLabel(mu1GroupBox);
        mu1TextLabel->setObjectName(QString::fromUtf8("mu1TextLabel"));

        gridLayout_2->addWidget(mu1TextLabel, 2, 0, 1, 1);

        mu1DoubleSpinBox = new QDoubleSpinBox(mu1GroupBox);
        mu1DoubleSpinBox->setObjectName(QString::fromUtf8("mu1DoubleSpinBox"));
        mu1DoubleSpinBox->setDecimals(3);
        mu1DoubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(mu1DoubleSpinBox, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(mu1GroupBox);

        mu2GroupBox = new QGroupBox(requestProcessorGroupBox);
        mu2GroupBox->setObjectName(QString::fromUtf8("mu2GroupBox"));
        gridLayout_9 = new QGridLayout(mu2GroupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        mu2MinTextLabel = new QLabel(mu2GroupBox);
        mu2MinTextLabel->setObjectName(QString::fromUtf8("mu2MinTextLabel"));

        gridLayout_9->addWidget(mu2MinTextLabel, 0, 0, 1, 1);

        mu2MinLineEdit = new QLineEdit(mu2GroupBox);
        mu2MinLineEdit->setObjectName(QString::fromUtf8("mu2MinLineEdit"));
        mu2MinLineEdit->setReadOnly(true);

        gridLayout_9->addWidget(mu2MinLineEdit, 0, 1, 1, 1);

        mu2MaxTextLabel = new QLabel(mu2GroupBox);
        mu2MaxTextLabel->setObjectName(QString::fromUtf8("mu2MaxTextLabel"));

        gridLayout_9->addWidget(mu2MaxTextLabel, 1, 0, 1, 1);

        mu2MaxLineEdit = new QLineEdit(mu2GroupBox);
        mu2MaxLineEdit->setObjectName(QString::fromUtf8("mu2MaxLineEdit"));
        mu2MaxLineEdit->setReadOnly(true);

        gridLayout_9->addWidget(mu2MaxLineEdit, 1, 1, 1, 1);

        mu2TextLabel = new QLabel(mu2GroupBox);
        mu2TextLabel->setObjectName(QString::fromUtf8("mu2TextLabel"));

        gridLayout_9->addWidget(mu2TextLabel, 2, 0, 1, 1);

        mu2DoubleSpinBox = new QDoubleSpinBox(mu2GroupBox);
        mu2DoubleSpinBox->setObjectName(QString::fromUtf8("mu2DoubleSpinBox"));
        mu2DoubleSpinBox->setDecimals(3);
        mu2DoubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout_9->addWidget(mu2DoubleSpinBox, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(mu2GroupBox);


        gridLayout_8->addWidget(requestProcessorGroupBox, 2, 3, 1, 1);

        fullFactorialExperimentGroupBox = new QGroupBox(centralwidget);
        fullFactorialExperimentGroupBox->setObjectName(QString::fromUtf8("fullFactorialExperimentGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fullFactorialExperimentGroupBox->sizePolicy().hasHeightForWidth());
        fullFactorialExperimentGroupBox->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(fullFactorialExperimentGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        fullFactorialExperimentTableWidget = new QTableWidget(fullFactorialExperimentGroupBox);
        if (fullFactorialExperimentTableWidget->columnCount() < 13)
            fullFactorialExperimentTableWidget->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        fullFactorialExperimentTableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        fullFactorialExperimentTableWidget->setObjectName(QString::fromUtf8("fullFactorialExperimentTableWidget"));

        gridLayout_5->addWidget(fullFactorialExperimentTableWidget, 0, 0, 1, 2);

        modelsFullFactorialExperimentGroupBox = new QGroupBox(fullFactorialExperimentGroupBox);
        modelsFullFactorialExperimentGroupBox->setObjectName(QString::fromUtf8("modelsFullFactorialExperimentGroupBox"));
        gridLayout_11 = new QGridLayout(modelsFullFactorialExperimentGroupBox);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        yHatRegressionFullFactorialExperimentTextLabel = new QLabel(modelsFullFactorialExperimentGroupBox);
        yHatRegressionFullFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("yHatRegressionFullFactorialExperimentTextLabel"));

        gridLayout_11->addWidget(yHatRegressionFullFactorialExperimentTextLabel, 0, 0, 1, 1);

        uHatRegressionFullFactorialExperimentTextLabel = new QLabel(modelsFullFactorialExperimentGroupBox);
        uHatRegressionFullFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("uHatRegressionFullFactorialExperimentTextLabel"));

        gridLayout_11->addWidget(uHatRegressionFullFactorialExperimentTextLabel, 1, 0, 1, 1);

        yHatRegressionFullFactorialExperimentLineEdit = new QLineEdit(modelsFullFactorialExperimentGroupBox);
        yHatRegressionFullFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("yHatRegressionFullFactorialExperimentLineEdit"));
        yHatRegressionFullFactorialExperimentLineEdit->setReadOnly(false);

        gridLayout_11->addWidget(yHatRegressionFullFactorialExperimentLineEdit, 0, 1, 1, 1);

        uHatRegressionFullFactorialExperimentLineEdit = new QLineEdit(modelsFullFactorialExperimentGroupBox);
        uHatRegressionFullFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("uHatRegressionFullFactorialExperimentLineEdit"));
        uHatRegressionFullFactorialExperimentLineEdit->setReadOnly(false);

        gridLayout_11->addWidget(uHatRegressionFullFactorialExperimentLineEdit, 1, 1, 1, 1);


        gridLayout_5->addWidget(modelsFullFactorialExperimentGroupBox, 1, 0, 1, 2);


        gridLayout_8->addWidget(fullFactorialExperimentGroupBox, 0, 0, 1, 3);

        fractionalFactorialExperimentGroupBox = new QGroupBox(centralwidget);
        fractionalFactorialExperimentGroupBox->setObjectName(QString::fromUtf8("fractionalFactorialExperimentGroupBox"));
        sizePolicy.setHeightForWidth(fractionalFactorialExperimentGroupBox->sizePolicy().hasHeightForWidth());
        fractionalFactorialExperimentGroupBox->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(fractionalFactorialExperimentGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        fractionalFactorialExperimentTableWidget = new QTableWidget(fractionalFactorialExperimentGroupBox);
        if (fractionalFactorialExperimentTableWidget->columnCount() < 13)
            fractionalFactorialExperimentTableWidget->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        fractionalFactorialExperimentTableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem25);
        fractionalFactorialExperimentTableWidget->setObjectName(QString::fromUtf8("fractionalFactorialExperimentTableWidget"));

        gridLayout_7->addWidget(fractionalFactorialExperimentTableWidget, 0, 0, 1, 2);

        modelsFractionalFactorialExperimentGroupBox = new QGroupBox(fractionalFactorialExperimentGroupBox);
        modelsFractionalFactorialExperimentGroupBox->setObjectName(QString::fromUtf8("modelsFractionalFactorialExperimentGroupBox"));
        gridLayout_12 = new QGridLayout(modelsFractionalFactorialExperimentGroupBox);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        yHatRegressionFractionalFactorialExperimentTextLabel = new QLabel(modelsFractionalFactorialExperimentGroupBox);
        yHatRegressionFractionalFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("yHatRegressionFractionalFactorialExperimentTextLabel"));

        gridLayout_12->addWidget(yHatRegressionFractionalFactorialExperimentTextLabel, 0, 0, 1, 1);

        uHatRegressionFractionalFactorialExperimentTextLabel = new QLabel(modelsFractionalFactorialExperimentGroupBox);
        uHatRegressionFractionalFactorialExperimentTextLabel->setObjectName(QString::fromUtf8("uHatRegressionFractionalFactorialExperimentTextLabel"));

        gridLayout_12->addWidget(uHatRegressionFractionalFactorialExperimentTextLabel, 1, 0, 1, 1);

        yHatRegressionFractionalFactorialExperimentLineEdit = new QLineEdit(modelsFractionalFactorialExperimentGroupBox);
        yHatRegressionFractionalFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("yHatRegressionFractionalFactorialExperimentLineEdit"));
        yHatRegressionFractionalFactorialExperimentLineEdit->setReadOnly(false);

        gridLayout_12->addWidget(yHatRegressionFractionalFactorialExperimentLineEdit, 0, 1, 1, 1);

        uHatRegressionFractionalFactorialExperimentLineEdit = new QLineEdit(modelsFractionalFactorialExperimentGroupBox);
        uHatRegressionFractionalFactorialExperimentLineEdit->setObjectName(QString::fromUtf8("uHatRegressionFractionalFactorialExperimentLineEdit"));
        uHatRegressionFractionalFactorialExperimentLineEdit->setReadOnly(false);

        gridLayout_12->addWidget(uHatRegressionFractionalFactorialExperimentLineEdit, 1, 1, 1, 1);


        gridLayout_7->addWidget(modelsFractionalFactorialExperimentGroupBox, 1, 0, 1, 2);


        gridLayout_8->addWidget(fractionalFactorialExperimentGroupBox, 0, 3, 1, 2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        requestGenerator1GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 \320\267\320\260\321\217\320\262\320\276\320\272 1 \342\200\224 \321\200\320\260\320\262\320\275\320\276\320\274\320\265\321\200\320\275\320\276\320\265 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        lambda1GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\316\2731 \342\200\224 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214", nullptr));
        lambda1MinTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273<sub>1, min</sub>", nullptr));
        lambda1MaxTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273<sub>1, max</sub>", nullptr));
        lambda1TextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273<sub>1</sub>", nullptr));
        sigmaLambda1GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\317\203(\316\2731) \342\200\224 \320\241\320\232\320\236 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270", nullptr));
        sigmaLambda1MinTextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203<sub>min</sub>(\316\273<sub>1</sub>)", nullptr));
        sigmaLambda1MaxTextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203<sub>max</sub>(\316\273<sub>1</sub>)", nullptr));
        sigmaLambda1TextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203(\316\273<sub>1</sub>)", nullptr));
        outputParametersGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        yHatFractionalFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "\305\267 (\320\224\320\244\320\255)", nullptr));
        uHatFractionalFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "\303\273 (\320\224\320\244\320\255)", nullptr));
        uHatFullFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "\303\273 (\320\237\320\244\320\255)", nullptr));
        dyHatFullFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "|\316\224|", nullptr));
        actualAverageWaitingTimeTextLabel->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\272\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 t\314\205<sub>\320\276\320\266</sub>", nullptr));
        yHatFullFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "\305\267 (\320\237\320\244\320\255)", nullptr));
        duHatFullFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "|\316\224|", nullptr));
        dyHatFractionalFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "|\316\224|", nullptr));
        duHatFractionalFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "|\316\224|", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        requestGenerator2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 \320\267\320\260\321\217\320\262\320\276\320\272 2 \342\200\224 \321\200\320\260\320\262\320\275\320\276\320\274\320\265\321\200\320\275\320\276\320\265 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        lambda2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\316\2732 \342\200\224 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214", nullptr));
        lambda2MinTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273<sub>2, min</sub>", nullptr));
        lambda2MaxTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273<sub>2, max</sub>", nullptr));
        lambda2TextLabel->setText(QCoreApplication::translate("MainWindow", "\316\273<sub>2</sub>", nullptr));
        sigmaLambda2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\317\203(\316\2732) \342\200\224 \320\241\320\232\320\236 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270", nullptr));
        sigmaLambda2MinTextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203<sub>min</sub>(\316\273<sub>2</sub>)", nullptr));
        sigmaLambda2MaxTextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203<sub>max</sub>(\316\273<sub>2</sub>)", nullptr));
        sigmaLambda2TextLabel->setText(QCoreApplication::translate("MainWindow", "\317\203(\316\273<sub>2</sub>)", nullptr));
        requestProcessorGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\220 \342\200\224 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\222\320\265\320\271\320\261\321\203\320\273\320\273\320\260", nullptr));
        mu1GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\316\2741 \342\200\224 \320\270\320\275\321\202. \320\276\320\261\321\200. \320\267\320\260\321\217\320\262\320\276\320\272 1 \321\202\320\270\320\277\320\260", nullptr));
        mu1MinTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>1, min</sub>", nullptr));
        mu1MaxTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>1, max</sub>", nullptr));
        mu1TextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>1</sub>", nullptr));
        mu2GroupBox->setTitle(QCoreApplication::translate("MainWindow", "\316\2742 \342\200\224 \320\270\320\275\321\202. \320\276\320\261\321\200. \320\267\320\260\321\217\320\262\320\276\320\272 2 \321\202\320\270\320\277\320\260", nullptr));
        mu2MinTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>2, min</sub>", nullptr));
        mu2MaxTextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>2, max</sub>", nullptr));
        mu2TextLabel->setText(QCoreApplication::translate("MainWindow", "\316\274<sub>2</sub>", nullptr));
        fullFactorialExperimentGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\244\320\255", nullptr));
        QTableWidgetItem *___qtablewidgetitem = fullFactorialExperimentTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = fullFactorialExperimentTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "x1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = fullFactorialExperimentTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "x2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = fullFactorialExperimentTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "x3", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = fullFactorialExperimentTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "x4", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = fullFactorialExperimentTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "x5", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = fullFactorialExperimentTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "x6", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = fullFactorialExperimentTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\310\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = fullFactorialExperimentTableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\317\203\302\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = fullFactorialExperimentTableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\305\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = fullFactorialExperimentTableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "|\310\263 - \305\267|", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = fullFactorialExperimentTableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\303\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = fullFactorialExperimentTableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "|\310\263 - \303\273|", nullptr));
        modelsFullFactorialExperimentGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\320\270", nullptr));
        yHatRegressionFullFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "\305\267 \342\200\224 \320\273\320\270\320\275\320\265\320\271\320\275\320\260\321\217", nullptr));
        uHatRegressionFullFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "\303\273 \342\200\224 \321\207\320\260\321\201\321\202\320\270\321\207\320\275\320\276-\320\275\320\265\320\273\320\270\320\275\320\265\320\271\320\275\320\260\321\217", nullptr));
        fractionalFactorialExperimentGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\244\320\255", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "x1", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "x2", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "x3", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "x4", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "x5", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "x6", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "\310\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "\317\203\302\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "\305\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "|\310\263 - \305\267|", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "\303\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = fractionalFactorialExperimentTableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "|\310\263 - \303\273|", nullptr));
        modelsFractionalFactorialExperimentGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\320\270", nullptr));
        yHatRegressionFractionalFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "\305\267 \342\200\224 \320\273\320\270\320\275\320\265\320\271\320\275\320\260\321\217", nullptr));
        uHatRegressionFractionalFactorialExperimentTextLabel->setText(QCoreApplication::translate("MainWindow", "\303\273 \342\200\224 \321\207\320\260\321\201\321\202\320\270\321\207\320\275\320\276-\320\275\320\265\320\273\320\270\320\275\320\265\320\271\320\275\320\260\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
