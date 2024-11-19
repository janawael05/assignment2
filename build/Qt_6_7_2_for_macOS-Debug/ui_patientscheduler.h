/********************************************************************************
** Form generated from reading UI file 'patientscheduler.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTSCHEDULER_H
#define UI_PATIENTSCHEDULER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PatientScheduler
{
public:

    void setupUi(QDialog *PatientScheduler)
    {
        if (PatientScheduler->objectName().isEmpty())
            PatientScheduler->setObjectName("PatientScheduler");
        PatientScheduler->resize(400, 300);

        retranslateUi(PatientScheduler);

        QMetaObject::connectSlotsByName(PatientScheduler);
    } // setupUi

    void retranslateUi(QDialog *PatientScheduler)
    {
        PatientScheduler->setWindowTitle(QCoreApplication::translate("PatientScheduler", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientScheduler: public Ui_PatientScheduler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTSCHEDULER_H
