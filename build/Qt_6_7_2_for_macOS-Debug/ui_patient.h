/********************************************************************************
** Form generated from reading UI file 'patient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENT_H
#define UI_PATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Patient
{
public:

    void setupUi(QDialog *Patient)
    {
        if (Patient->objectName().isEmpty())
            Patient->setObjectName("Patient");
        Patient->resize(400, 300);

        retranslateUi(Patient);

        QMetaObject::connectSlotsByName(Patient);
    } // setupUi

    void retranslateUi(QDialog *Patient)
    {
        Patient->setWindowTitle(QCoreApplication::translate("Patient", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Patient: public Ui_Patient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENT_H
