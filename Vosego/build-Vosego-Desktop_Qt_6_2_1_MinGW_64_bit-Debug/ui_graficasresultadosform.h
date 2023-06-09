/********************************************************************************
** Form generated from reading UI file 'graficasresultadosform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICASRESULTADOSFORM_H
#define UI_GRAFICASRESULTADOSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraficasResultadosForm
{
public:
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *listWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QWidget *tab_2;
    QFrame *horizontalFramePieChart;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QWidget *GraficasResultadosForm)
    {
        if (GraficasResultadosForm->objectName().isEmpty())
            GraficasResultadosForm->setObjectName(QString::fromUtf8("GraficasResultadosForm"));
        GraficasResultadosForm->resize(665, 726);
        label = new QLabel(GraficasResultadosForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 480, 61, 16));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        scrollArea = new QScrollArea(GraficasResultadosForm);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 500, 651, 211));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 649, 209));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 651, 211));
        QFont font1;
        font1.setPointSize(17);
        font1.setItalic(true);
        listWidget->setFont(font1);
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget = new QTabWidget(GraficasResultadosForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 651, 481));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalFrame = new QFrame(tab);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(0, 0, 591, 461));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalFramePieChart = new QFrame(tab_2);
        horizontalFramePieChart->setObjectName(QString::fromUtf8("horizontalFramePieChart"));
        horizontalFramePieChart->setGeometry(QRect(0, 0, 641, 451));
        horizontalLayout_2 = new QHBoxLayout(horizontalFramePieChart);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(GraficasResultadosForm);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GraficasResultadosForm);
    } // setupUi

    void retranslateUi(QWidget *GraficasResultadosForm)
    {
        GraficasResultadosForm->setWindowTitle(QCoreApplication::translate("GraficasResultadosForm", "Graph", nullptr));
        label->setText(QCoreApplication::translate("GraficasResultadosForm", "Summary", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("GraficasResultadosForm", "Diseased/Healthy", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("GraficasResultadosForm", "Diseased Proportion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraficasResultadosForm: public Ui_GraficasResultadosForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICASRESULTADOSFORM_H
