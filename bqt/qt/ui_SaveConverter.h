/********************************************************************************
** Form generated from reading UI file 'SaveConverter.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVECONVERTER_H
#define UI_SAVECONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

namespace QGBA {

class Ui_SaveConverter
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *inputFile;
    QPushButton *inputBrowse;
    QComboBox *inputType;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *outputFile;
    QPushButton *outputBrowse;
    QComboBox *outputType;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QGBA__SaveConverter)
    {
        if (QGBA__SaveConverter->objectName().isEmpty())
            QGBA__SaveConverter->setObjectName("QGBA__SaveConverter");
        QGBA__SaveConverter->resize(546, 300);
        verticalLayout = new QVBoxLayout(QGBA__SaveConverter);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(QGBA__SaveConverter);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        inputFile = new QLineEdit(groupBox);
        inputFile->setObjectName("inputFile");

        gridLayout->addWidget(inputFile, 0, 0, 1, 1);

        inputBrowse = new QPushButton(groupBox);
        inputBrowse->setObjectName("inputBrowse");

        gridLayout->addWidget(inputBrowse, 0, 1, 1, 1);

        inputType = new QComboBox(groupBox);
        inputType->setObjectName("inputType");
        inputType->setEnabled(false);

        gridLayout->addWidget(inputType, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QGBA__SaveConverter);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        outputFile = new QLineEdit(groupBox_2);
        outputFile->setObjectName("outputFile");

        gridLayout_2->addWidget(outputFile, 0, 0, 1, 1);

        outputBrowse = new QPushButton(groupBox_2);
        outputBrowse->setObjectName("outputBrowse");

        gridLayout_2->addWidget(outputBrowse, 0, 1, 1, 1);

        outputType = new QComboBox(groupBox_2);
        outputType->setObjectName("outputType");
        outputType->setEnabled(false);

        gridLayout_2->addWidget(outputType, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(QGBA__SaveConverter);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(inputFile, inputBrowse);
        QWidget::setTabOrder(inputBrowse, inputType);
        QWidget::setTabOrder(inputType, outputFile);
        QWidget::setTabOrder(outputFile, outputBrowse);
        QWidget::setTabOrder(outputBrowse, outputType);

        retranslateUi(QGBA__SaveConverter);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QGBA__SaveConverter, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QGBA__SaveConverter, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(QGBA__SaveConverter);
    } // setupUi

    void retranslateUi(QDialog *QGBA__SaveConverter)
    {
        QGBA__SaveConverter->setWindowTitle(QCoreApplication::translate("QGBA::SaveConverter", "Convert/Extract Save Game", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QGBA::SaveConverter", "Input file", nullptr));
        inputBrowse->setText(QCoreApplication::translate("QGBA::SaveConverter", "Browse", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QGBA::SaveConverter", "Output file", nullptr));
        outputBrowse->setText(QCoreApplication::translate("QGBA::SaveConverter", "Browse", nullptr));
    } // retranslateUi

};

} // namespace QGBA

namespace QGBA {
namespace Ui {
    class SaveConverter: public Ui_SaveConverter {};
} // namespace Ui
} // namespace QGBA

#endif // UI_SAVECONVERTER_H
