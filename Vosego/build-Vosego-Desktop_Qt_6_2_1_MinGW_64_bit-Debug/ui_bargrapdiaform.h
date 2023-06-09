/********************************************************************************
** Form generated from reading UI file 'bargrapdiaform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARGRAPDIAFORM_H
#define UI_BARGRAPDIAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_barGrapDiaForm
{
public:
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout_3;
    QFrame *horizontalFrame_2;
    QHBoxLayout *horizontalLayout_4;

    void setupUi(QWidget *barGrapDiaForm)
    {
        if (barGrapDiaForm->objectName().isEmpty())
            barGrapDiaForm->setObjectName(QString::fromUtf8("barGrapDiaForm"));
        barGrapDiaForm->resize(656, 914);
        horizontalFrame = new QFrame(barGrapDiaForm);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(0, 0, 651, 421));
        horizontalLayout_3 = new QHBoxLayout(horizontalFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalFrame_2 = new QFrame(barGrapDiaForm);
        horizontalFrame_2->setObjectName(QString::fromUtf8("horizontalFrame_2"));
        horizontalFrame_2->setGeometry(QRect(0, 430, 651, 481));
        horizontalLayout_4 = new QHBoxLayout(horizontalFrame_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        retranslateUi(barGrapDiaForm);

        QMetaObject::connectSlotsByName(barGrapDiaForm);
    } // setupUi

    void retranslateUi(QWidget *barGrapDiaForm)
    {
        barGrapDiaForm->setWindowTitle(QCoreApplication::translate("barGrapDiaForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class barGrapDiaForm: public Ui_barGrapDiaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARGRAPDIAFORM_H
