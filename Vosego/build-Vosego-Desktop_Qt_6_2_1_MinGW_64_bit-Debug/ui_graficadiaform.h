/********************************************************************************
** Form generated from reading UI file 'graficadiaform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICADIAFORM_H
#define UI_GRAFICADIAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraficaDiaForm
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableWidget *tableWidget;
    QLabel *label;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QFrame *horizontalFrame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTableWidget *tableWidget_2;
    QFrame *horizontalFrame_3;
    QHBoxLayout *horizontalLayout_3;
    QFrame *horizontalFrame_4;
    QHBoxLayout *horizontalLayout_4;

    void setupUi(QWidget *GraficaDiaForm)
    {
        if (GraficaDiaForm->objectName().isEmpty())
            GraficaDiaForm->setObjectName(QString::fromUtf8("GraficaDiaForm"));
        GraficaDiaForm->resize(365, 950);
        scrollArea = new QScrollArea(GraficaDiaForm);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 30, 351, 561));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 349, 559));
        tableWidget = new QTableWidget(scrollAreaWidgetContents);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 351, 561));
        QFont font;
        font.setBold(true);
        tableWidget->setFont(font);
        tableWidget->horizontalHeader()->setMinimumSectionSize(100);
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(GraficaDiaForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 91, 16));
        label->setFont(font);
        horizontalFrame = new QFrame(GraficaDiaForm);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(370, 30, 651, 421));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalFrame_2 = new QFrame(GraficaDiaForm);
        horizontalFrame_2->setObjectName(QString::fromUtf8("horizontalFrame_2"));
        horizontalFrame_2->setGeometry(QRect(370, 460, 651, 481));
        horizontalLayout_2 = new QHBoxLayout(horizontalFrame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(GraficaDiaForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 600, 101, 16));
        label_2->setFont(font);
        tableWidget_2 = new QTableWidget(GraficaDiaForm);
        if (tableWidget_2->columnCount() < 1)
            tableWidget_2->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 620, 351, 321));
        tableWidget_2->setFont(font);
        horizontalFrame_3 = new QFrame(GraficaDiaForm);
        horizontalFrame_3->setObjectName(QString::fromUtf8("horizontalFrame_3"));
        horizontalFrame_3->setGeometry(QRect(680, 600, 651, 421));
        horizontalLayout_3 = new QHBoxLayout(horizontalFrame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalFrame_4 = new QFrame(GraficaDiaForm);
        horizontalFrame_4->setObjectName(QString::fromUtf8("horizontalFrame_4"));
        horizontalFrame_4->setGeometry(QRect(680, 1030, 651, 481));
        horizontalLayout_4 = new QHBoxLayout(horizontalFrame_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        retranslateUi(GraficaDiaForm);

        QMetaObject::connectSlotsByName(GraficaDiaForm);
    } // setupUi

    void retranslateUi(QWidget *GraficaDiaForm)
    {
        GraficaDiaForm->setWindowTitle(QCoreApplication::translate("GraficaDiaForm", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("GraficaDiaForm", "Name of the batch", nullptr));
        label->setText(QCoreApplication::translate("GraficaDiaForm", "List of Batches", nullptr));
        label_2->setText(QCoreApplication::translate("GraficaDiaForm", "List of Images", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("GraficaDiaForm", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraficaDiaForm: public Ui_GraficaDiaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICADIAFORM_H
