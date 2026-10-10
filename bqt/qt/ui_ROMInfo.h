/********************************************************************************
** Form generated from reading UI file 'ROMInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROMINFO_H
#define UI_ROMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

namespace QGBA {

class Ui_ROMInfo
{
public:
    QGridLayout *gridLayout;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *name;
    QLabel *label_3;
    QLabel *size;
    QLabel *label_4;
    QLabel *crc;
    QLabel *label_9;
    QLabel *md5;
    QLabel *label_10;
    QLabel *sha1;
    QLabel *label_6;
    QLabel *savefile;
    QGroupBox *formGroupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *title;
    QLabel *label_2;
    QLabel *id;
    QLabel *label_7;
    QLabel *maker;
    QLabel *label_8;
    QLabel *version;

    void setupUi(QDialog *QGBA__ROMInfo)
    {
        if (QGBA__ROMInfo->objectName().isEmpty())
            QGBA__ROMInfo->setObjectName("QGBA__ROMInfo");
        QGBA__ROMInfo->resize(180, 298);
        gridLayout = new QGridLayout(QGBA__ROMInfo);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        formGroupBox = new QGroupBox(QGBA__ROMInfo);
        formGroupBox->setObjectName("formGroupBox");
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        label_5 = new QLabel(formGroupBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        name = new QLabel(formGroupBox);
        name->setObjectName("name");
        name->setText(QString::fromUtf8("{NAME}"));
        name->setWordWrap(true);
        name->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, name);

        label_3 = new QLabel(formGroupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        size = new QLabel(formGroupBox);
        size->setObjectName("size");
        size->setText(QString::fromUtf8("{SIZE}"));
        size->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, size);

        label_4 = new QLabel(formGroupBox);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_4);

        crc = new QLabel(formGroupBox);
        crc->setObjectName("crc");
        crc->setText(QString::fromUtf8("{CRC}"));
        crc->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, crc);

        label_9 = new QLabel(formGroupBox);
        label_9->setObjectName("label_9");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_9);

        md5 = new QLabel(formGroupBox);
        md5->setObjectName("md5");
        md5->setText(QString::fromUtf8("{MD5}"));
        md5->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, md5);

        label_10 = new QLabel(formGroupBox);
        label_10->setObjectName("label_10");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_10);

        sha1 = new QLabel(formGroupBox);
        sha1->setObjectName("sha1");
        sha1->setText(QString::fromUtf8("{SHA1}"));
        sha1->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, sha1);

        label_6 = new QLabel(formGroupBox);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_6);

        savefile = new QLabel(formGroupBox);
        savefile->setObjectName("savefile");
        savefile->setText(QString::fromUtf8("{SAVEFILE}"));

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, savefile);


        gridLayout->addWidget(formGroupBox, 0, 0, 1, 1);

        formGroupBox_2 = new QGroupBox(QGBA__ROMInfo);
        formGroupBox_2->setObjectName("formGroupBox_2");
        formLayout_2 = new QFormLayout(formGroupBox_2);
        formLayout_2->setObjectName("formLayout_2");
        label = new QLabel(formGroupBox_2);
        label->setObjectName("label");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        title = new QLabel(formGroupBox_2);
        title->setObjectName("title");
        title->setText(QString::fromUtf8("{TITLE}"));
        title->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, title);

        label_2 = new QLabel(formGroupBox_2);
        label_2->setObjectName("label_2");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        id = new QLabel(formGroupBox_2);
        id->setObjectName("id");
        id->setText(QString::fromUtf8("{ID}"));
        id->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, id);

        label_7 = new QLabel(formGroupBox_2);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_7);

        maker = new QLabel(formGroupBox_2);
        maker->setObjectName("maker");
        maker->setText(QString::fromUtf8("{MAKER}"));
        maker->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, maker);

        label_8 = new QLabel(formGroupBox_2);
        label_8->setObjectName("label_8");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, label_8);

        version = new QLabel(formGroupBox_2);
        version->setObjectName("version");
        version->setText(QString::fromUtf8("{VERSION}"));
        version->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, version);


        gridLayout->addWidget(formGroupBox_2, 1, 0, 1, 1);


        retranslateUi(QGBA__ROMInfo);

        QMetaObject::connectSlotsByName(QGBA__ROMInfo);
    } // setupUi

    void retranslateUi(QDialog *QGBA__ROMInfo)
    {
        QGBA__ROMInfo->setWindowTitle(QCoreApplication::translate("QGBA::ROMInfo", "ROM Info", nullptr));
        formGroupBox->setTitle(QCoreApplication::translate("QGBA::ROMInfo", "File information", nullptr));
        label_5->setText(QCoreApplication::translate("QGBA::ROMInfo", "Game name:", nullptr));
        label_3->setText(QCoreApplication::translate("QGBA::ROMInfo", "File size:", nullptr));
        label_4->setText(QCoreApplication::translate("QGBA::ROMInfo", "CRC32:", nullptr));
        label_9->setText(QCoreApplication::translate("QGBA::ROMInfo", "MD5", nullptr));
        label_10->setText(QCoreApplication::translate("QGBA::ROMInfo", "SHA-1", nullptr));
        label_6->setText(QCoreApplication::translate("QGBA::ROMInfo", "Save file:", nullptr));
        formGroupBox_2->setTitle(QCoreApplication::translate("QGBA::ROMInfo", "ROM header", nullptr));
        label->setText(QCoreApplication::translate("QGBA::ROMInfo", "Internal name:", nullptr));
        label_2->setText(QCoreApplication::translate("QGBA::ROMInfo", "Game ID:", nullptr));
        label_7->setText(QCoreApplication::translate("QGBA::ROMInfo", "Maker Code:", nullptr));
        label_8->setText(QCoreApplication::translate("QGBA::ROMInfo", "Revision:", nullptr));
    } // retranslateUi

};

} // namespace QGBA

namespace QGBA {
namespace Ui {
    class ROMInfo: public Ui_ROMInfo {};
} // namespace Ui
} // namespace QGBA

#endif // UI_ROMINFO_H
