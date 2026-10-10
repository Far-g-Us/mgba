/********************************************************************************
** Form generated from reading UI file 'ArchiveInspector.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHIVEINSPECTOR_H
#define UI_ARCHIVEINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include "library/LibraryController.h"

namespace QGBA {

class Ui_ArchiveInspector
{
public:
    QGridLayout *gridLayout;
    QLabel *loading;
    QDialogButtonBox *buttonBox;
    QGBA::LibraryController *archiveView;

    void setupUi(QDialog *QGBA__ArchiveInspector)
    {
        if (QGBA__ArchiveInspector->objectName().isEmpty())
            QGBA__ArchiveInspector->setObjectName("QGBA__ArchiveInspector");
        QGBA__ArchiveInspector->resize(600, 400);
        gridLayout = new QGridLayout(QGBA__ArchiveInspector);
        gridLayout->setObjectName("gridLayout");
        loading = new QLabel(QGBA__ArchiveInspector);
        loading->setObjectName("loading");

        gridLayout->addWidget(loading, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QGBA__ArchiveInspector);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);

        archiveView = new QGBA::LibraryController(QGBA__ArchiveInspector);
        archiveView->setObjectName("archiveView");

        gridLayout->addWidget(archiveView, 0, 0, 1, 2);


        retranslateUi(QGBA__ArchiveInspector);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QGBA__ArchiveInspector, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QGBA__ArchiveInspector, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(QGBA__ArchiveInspector);
    } // setupUi

    void retranslateUi(QDialog *QGBA__ArchiveInspector)
    {
        QGBA__ArchiveInspector->setWindowTitle(QCoreApplication::translate("QGBA::ArchiveInspector", "Open in archive...", nullptr));
        loading->setText(QCoreApplication::translate("QGBA::ArchiveInspector", "Loading...", nullptr));
    } // retranslateUi

};

} // namespace QGBA

namespace QGBA {
namespace Ui {
    class ArchiveInspector: public Ui_ArchiveInspector {};
} // namespace Ui
} // namespace QGBA

#endif // UI_ARCHIVEINSPECTOR_H
