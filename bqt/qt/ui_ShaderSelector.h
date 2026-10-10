/********************************************************************************
** Form generated from reading UI file 'ShaderSelector.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADERSELECTOR_H
#define UI_SHADERSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>

namespace QGBA {

class Ui_ShaderSelector
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *shaderName;
    QLabel *author;
    QLabel *description;
    QFrame *line;
    QTabWidget *passes;
    QGridLayout *gridLayout;
    QPushButton *unload;
    QPushButton *load;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QGBA__ShaderSelector)
    {
        if (QGBA__ShaderSelector->objectName().isEmpty())
            QGBA__ShaderSelector->setObjectName("QGBA__ShaderSelector");
        QGBA__ShaderSelector->resize(386, 350);
        verticalLayout = new QVBoxLayout(QGBA__ShaderSelector);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(QGBA__ShaderSelector);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        shaderName = new QLabel(QGBA__ShaderSelector);
        shaderName->setObjectName("shaderName");
        shaderName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(shaderName);

        author = new QLabel(QGBA__ShaderSelector);
        author->setObjectName("author");
        author->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(author);


        verticalLayout->addLayout(horizontalLayout);

        description = new QLabel(QGBA__ShaderSelector);
        description->setObjectName("description");
        QFont font1;
        font1.setItalic(true);
        description->setFont(font1);
        description->setWordWrap(true);

        verticalLayout->addWidget(description);

        line = new QFrame(QGBA__ShaderSelector);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        passes = new QTabWidget(QGBA__ShaderSelector);
        passes->setObjectName("passes");

        verticalLayout->addWidget(passes);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        unload = new QPushButton(QGBA__ShaderSelector);
        unload->setObjectName("unload");

        gridLayout->addWidget(unload, 0, 0, 1, 1);

        load = new QPushButton(QGBA__ShaderSelector);
        load->setObjectName("load");

        gridLayout->addWidget(load, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QGBA__ShaderSelector);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(QGBA__ShaderSelector);

        passes->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QGBA__ShaderSelector);
    } // setupUi

    void retranslateUi(QDialog *QGBA__ShaderSelector)
    {
        QGBA__ShaderSelector->setWindowTitle(QCoreApplication::translate("QGBA::ShaderSelector", "Shaders", nullptr));
        label->setText(QCoreApplication::translate("QGBA::ShaderSelector", "Active Shader:", nullptr));
        shaderName->setText(QCoreApplication::translate("QGBA::ShaderSelector", "Name", nullptr));
        author->setText(QCoreApplication::translate("QGBA::ShaderSelector", "Author", nullptr));
        description->setText(QCoreApplication::translate("QGBA::ShaderSelector", "Description", nullptr));
        unload->setText(QCoreApplication::translate("QGBA::ShaderSelector", "Unload Shader", nullptr));
        load->setText(QCoreApplication::translate("QGBA::ShaderSelector", "Load New Shader", nullptr));
    } // retranslateUi

};

} // namespace QGBA

namespace QGBA {
namespace Ui {
    class ShaderSelector: public Ui_ShaderSelector {};
} // namespace Ui
} // namespace QGBA

#endif // UI_SHADERSELECTOR_H
