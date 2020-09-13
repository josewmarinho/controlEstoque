/********************************************************************************
** Form generated from reading UI file 'mw_novavenda.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_NOVAVENDA_H
#define UI_MW_NOVAVENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_mw_novavenda
{
public:

    void setupUi(QDialog *mw_novavenda)
    {
        if (mw_novavenda->objectName().isEmpty())
            mw_novavenda->setObjectName(QString::fromUtf8("mw_novavenda"));
        mw_novavenda->resize(400, 300);

        retranslateUi(mw_novavenda);

        QMetaObject::connectSlotsByName(mw_novavenda);
    } // setupUi

    void retranslateUi(QDialog *mw_novavenda)
    {
        mw_novavenda->setWindowTitle(QCoreApplication::translate("mw_novavenda", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_novavenda: public Ui_mw_novavenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_NOVAVENDA_H
