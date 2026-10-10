/********************************************************************************
** Form generated from reading UI file 'SettingsView.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSVIEW_H
#define UI_SETTINGSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace QGBA {

class Ui_SettingsView
{
public:
    QGridLayout *gridLayout;
    QListWidget *tabs;
    QStackedWidget *stackedWidget;
    QWidget *av;
    QVBoxLayout *formLayout;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_12;
    QLabel *label_14;
    QComboBox *audioDriver;
    QLabel *audioBufferSizeLabel;
    QHBoxLayout *horizontalLayout_11;
    QComboBox *audioBufferSize;
    QLabel *label_16;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_14;
    QComboBox *sampleRate;
    QLabel *label_20;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_6;
    QSlider *volume;
    QCheckBox *mute;
    QLabel *label_34;
    QHBoxLayout *horizontalLayout_17;
    QSlider *volumeFf;
    QCheckBox *muteFf;
    QLabel *label_43;
    QRadioButton *multiplayerAudioAll;
    QRadioButton *multiplayerAudio1;
    QRadioButton *multiplayerAudioActive;
    QFrame *line_4;
    QFrame *line_5;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_13;
    QLabel *label_10;
    QComboBox *displayDriver;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_12;
    QSpinBox *frameskip;
    QLabel *label_13;
    QCheckBox *lockAspectRatio;
    QCheckBox *lockIntegerScaling;
    QCheckBox *interframeBlending;
    QCheckBox *resampleVideo;
    QFrame *line_12;
    QWidget *gameplay;
    QFormLayout *formLayout_14;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *fpsTarget;
    QLabel *label_11;
    QPushButton *nativeGB;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *videoSync;
    QCheckBox *audioSync;
    QFrame *line_16;
    QLabel *label_24;
    QCheckBox *autoload;
    QCheckBox *cheatAutoload;
    QPushButton *autorunScripts;
    QFrame *line_9;
    QCheckBox *autosave;
    QCheckBox *cheatAutosave;
    QFrame *line_21;
    QLabel *label_51;
    QCheckBox *saveStateScreenshot;
    QCheckBox *saveStateSave;
    QCheckBox *saveStateCheats;
    QFrame *line_22;
    QLabel *label_52;
    QCheckBox *loadStateScreenshot;
    QCheckBox *loadStateSave;
    QCheckBox *loadStateCheats;
    QFrame *line_2;
    QCheckBox *useDiscordPresence;
    QWidget *interface_2;
    QFormLayout *formLayout_4;
    QLabel *label_26;
    QComboBox *languages;
    QFrame *line_10;
    QLabel *label_6;
    QComboBox *libraryStyle;
    QCheckBox *showLibrary;
    QCheckBox *showFilenameInLibrary;
    QPushButton *clearCache;
    QFrame *line_8;
    QCheckBox *allowOpposingDirections;
    QCheckBox *suspendScreensaver;
    QLabel *label_41;
    QHBoxLayout *horizontalLayout_21;
    QCheckBox *pauseOnFocusLost;
    QCheckBox *muteOnFocusLost;
    QLabel *label_42;
    QHBoxLayout *horizontalLayout_24;
    QCheckBox *pauseOnMinimize;
    QCheckBox *muteOnMinimize;
    QFrame *line_17;
    QCheckBox *dynamicTitle;
    QCheckBox *showFps;
    QCheckBox *showFilename;
    QFrame *line_18;
    QCheckBox *showOSD;
    QVBoxLayout *osdDisplay;
    QCheckBox *showFrameCounter;
    QCheckBox *showResetInfo;
    QHBoxLayout *horizontalLayout_22;
    QLineEdit *bgImage;
    QPushButton *bgImageBrowse;
    QFrame *line_13;
    QLabel *label_53;
    QWidget *update;
    QFormLayout *formLayout_11;
    QLabel *label_46;
    QLabel *currentChannel;
    QLabel *label_50;
    QLabel *currentVersion;
    QFrame *line_20;
    QLabel *label_45;
    QComboBox *updateChannel;
    QLabel *label_44;
    QLabel *availVersion;
    QLabel *label_49;
    QLabel *lastChecked;
    QFrame *line_11;
    QCheckBox *updateAutoCheck;
    QPushButton *checkUpdate;
    QWidget *emulation;
    QFormLayout *formLayout_2;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *fastForwardRatio;
    QCheckBox *fastForwardUnbounded;
    QLabel *label_181;
    QHBoxLayout *horizontalLayout_51;
    QDoubleSpinBox *fastForwardHeldRatio;
    QCheckBox *fastForwardHeldUnbounded;
    QLabel *label_31;
    QSpinBox *autofireThreshold;
    QFrame *line;
    QCheckBox *rewind;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_13;
    QSpinBox *rewindCapacity;
    QLabel *label_7;
    QLabel *label_54;
    QHBoxLayout *horizontalLayout_23;
    QSpinBox *rewindBufferInterval;
    QFrame *line_3;
    QLabel *label_15;
    QComboBox *idleOptimization;
    QCheckBox *preload;
    QCheckBox *forceGbp;
    QCheckBox *vbaBugCompat;
    QWidget *enhancements;
    QFormLayout *formLayout_6;
    QLabel *label_36;
    QComboBox *hwaccelVideo;
    QGroupBox *oglEnhance;
    QFormLayout *formLayout_7;
    QLabel *label_37;
    QHBoxLayout *horizontalLayout_18;
    QSpinBox *videoScale;
    QSpacerItem *horizontalSpacer;
    QLabel *videoScaleSize;
    QSpacerItem *horizontalSpacer_2;
    QWidget *bios;
    QFormLayout *formLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *gbBios;
    QPushButton *gbBiosBrowse;
    QLabel *label_30;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *sgbBios;
    QPushButton *sgbBiosBrowse;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_30;
    QLineEdit *gbcBios;
    QPushButton *gbcBiosBrowse;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *gbaBios;
    QPushButton *gbaBiosBrowse;
    QCheckBox *useBios;
    QCheckBox *skipBios;
    QWidget *paths;
    QFormLayout *formLayout_3;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *savegamePath;
    QPushButton *savegameBrowse;
    QCheckBox *savegameSameDir;
    QFrame *line_7;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *savestatePath;
    QPushButton *savestateBrowse;
    QCheckBox *savestateSameDir;
    QFrame *line_6;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *screenshotPath;
    QPushButton *screenshotBrowse;
    QCheckBox *screenshotSameDir;
    QFrame *line_15;
    QLabel *label_47;
    QHBoxLayout *horizontalLayout_26;
    QLineEdit *patchPath;
    QPushButton *patchBrowse;
    QCheckBox *patchSameDir;
    QFrame *line_14;
    QLabel *label_48;
    QHBoxLayout *horizontalLayout_27;
    QLineEdit *cheatsPath;
    QPushButton *cheatsBrowse;
    QCheckBox *cheatsSameDir;
    QWidget *logging;
    QVBoxLayout *verticalLayout;
    QTableView *loggingView;
    QHBoxLayout *horizontalLayout_19;
    QCheckBox *logToFile;
    QCheckBox *logToStdout;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *logFile;
    QPushButton *logFileBrowse;
    QWidget *gb;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_9;
    QLabel *label_29;
    QComboBox *gbModel;
    QLabel *label_32;
    QComboBox *sgbModel;
    QLabel *label_33;
    QComboBox *cgbModel;
    QLabel *label_38;
    QComboBox *cgbHybridModel;
    QLabel *label_39;
    QComboBox *cgbSgbModel;
    QCheckBox *sgbBorders;
    QGroupBox *groupBox;
    QFormLayout *formLayout_8;
    QLabel *label_40;
    QComboBox *colorPreset;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_9;
    QFrame *color0;
    QFrame *color1;
    QFrame *color2;
    QFrame *color3;
    QLabel *label_69;
    QHBoxLayout *horizontalLayout_15;
    QFrame *color4;
    QFrame *color5;
    QFrame *color6;
    QFrame *color7;
    QLabel *label_70;
    QHBoxLayout *horizontalLayout_37;
    QFrame *color8;
    QFrame *color9;
    QFrame *color10;
    QFrame *color11;
    QFrame *line_19;
    QGridLayout *gridLayout_2;
    QRadioButton *sgbColor;
    QRadioButton *gbColor;
    QRadioButton *cgbColor;
    QRadioButton *scgbColor;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_10;
    QLabel *label_27;
    QComboBox *cameraDriver;
    QLabel *label_35;
    QComboBox *camera;
    QDialogButtonBox *buttonBox;
    QButtonGroup *multiplayerAudio;
    QButtonGroup *gbColors;

    void setupUi(QWidget *QGBA__SettingsView)
    {
        if (QGBA__SettingsView->objectName().isEmpty())
            QGBA__SettingsView->setObjectName("QGBA__SettingsView");
        QGBA__SettingsView->resize(880, 700);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGBA__SettingsView->sizePolicy().hasHeightForWidth());
        QGBA__SettingsView->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QGBA__SettingsView);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        tabs = new QListWidget(QGBA__SettingsView);
        new QListWidgetItem(tabs);
        new QListWidgetItem(tabs);
        new QListWidgetItem(tabs);
        new QListWidgetItem(tabs);
        new QListWidgetItem(tabs);
        new QListWidgetItem(tabs);
        new QListWidgetItem(tabs);
        new QListWidgetItem(tabs);
        new QListWidgetItem(tabs);
        new QListWidgetItem(tabs);
        tabs->setObjectName("tabs");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabs->sizePolicy().hasHeightForWidth());
        tabs->setSizePolicy(sizePolicy1);
        tabs->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(tabs, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(QGBA__SettingsView);
        stackedWidget->setObjectName("stackedWidget");
        av = new QWidget();
        av->setObjectName("av");
        formLayout = new QVBoxLayout(av);
        formLayout->setObjectName("formLayout");
        groupBox_4 = new QGroupBox(av);
        groupBox_4->setObjectName("groupBox_4");
        formLayout_12 = new QFormLayout(groupBox_4);
        formLayout_12->setObjectName("formLayout_12");
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName("label_14");

        formLayout_12->setWidget(0, QFormLayout::ItemRole::LabelRole, label_14);

        audioDriver = new QComboBox(groupBox_4);
        audioDriver->setObjectName("audioDriver");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(audioDriver->sizePolicy().hasHeightForWidth());
        audioDriver->setSizePolicy(sizePolicy2);

        formLayout_12->setWidget(0, QFormLayout::ItemRole::FieldRole, audioDriver);

        audioBufferSizeLabel = new QLabel(groupBox_4);
        audioBufferSizeLabel->setObjectName("audioBufferSizeLabel");

        formLayout_12->setWidget(1, QFormLayout::ItemRole::LabelRole, audioBufferSizeLabel);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        audioBufferSize = new QComboBox(groupBox_4);
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->addItem(QString());
        audioBufferSize->setObjectName("audioBufferSize");
        audioBufferSize->setEditable(true);

        horizontalLayout_11->addWidget(audioBufferSize);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName("label_16");

        horizontalLayout_11->addWidget(label_16);


        formLayout_12->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_11);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName("label_19");

        formLayout_12->setWidget(2, QFormLayout::ItemRole::LabelRole, label_19);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        sampleRate = new QComboBox(groupBox_4);
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->setObjectName("sampleRate");
        sampleRate->setEditable(true);

        horizontalLayout_14->addWidget(sampleRate);

        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName("label_20");

        horizontalLayout_14->addWidget(label_20);


        formLayout_12->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_14);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName("label_17");

        formLayout_12->setWidget(4, QFormLayout::ItemRole::LabelRole, label_17);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        volume = new QSlider(groupBox_4);
        volume->setObjectName("volume");
        volume->setMinimumSize(QSize(128, 0));
        volume->setMaximum(256);
        volume->setPageStep(16);
        volume->setValue(256);
        volume->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(volume);

        mute = new QCheckBox(groupBox_4);
        mute->setObjectName("mute");

        horizontalLayout_6->addWidget(mute);


        formLayout_12->setLayout(4, QFormLayout::ItemRole::FieldRole, horizontalLayout_6);

        label_34 = new QLabel(groupBox_4);
        label_34->setObjectName("label_34");

        formLayout_12->setWidget(5, QFormLayout::ItemRole::LabelRole, label_34);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        volumeFf = new QSlider(groupBox_4);
        volumeFf->setObjectName("volumeFf");
        volumeFf->setMinimumSize(QSize(128, 0));
        volumeFf->setMaximum(256);
        volumeFf->setPageStep(16);
        volumeFf->setValue(256);
        volumeFf->setOrientation(Qt::Horizontal);

        horizontalLayout_17->addWidget(volumeFf);

        muteFf = new QCheckBox(groupBox_4);
        muteFf->setObjectName("muteFf");

        horizontalLayout_17->addWidget(muteFf);


        formLayout_12->setLayout(5, QFormLayout::ItemRole::FieldRole, horizontalLayout_17);

        label_43 = new QLabel(groupBox_4);
        label_43->setObjectName("label_43");

        formLayout_12->setWidget(7, QFormLayout::ItemRole::LabelRole, label_43);

        multiplayerAudioAll = new QRadioButton(groupBox_4);
        multiplayerAudio = new QButtonGroup(QGBA__SettingsView);
        multiplayerAudio->setObjectName("multiplayerAudio");
        multiplayerAudio->addButton(multiplayerAudioAll);
        multiplayerAudioAll->setObjectName("multiplayerAudioAll");
        multiplayerAudioAll->setChecked(true);

        formLayout_12->setWidget(7, QFormLayout::ItemRole::FieldRole, multiplayerAudioAll);

        multiplayerAudio1 = new QRadioButton(groupBox_4);
        multiplayerAudio->addButton(multiplayerAudio1);
        multiplayerAudio1->setObjectName("multiplayerAudio1");

        formLayout_12->setWidget(8, QFormLayout::ItemRole::FieldRole, multiplayerAudio1);

        multiplayerAudioActive = new QRadioButton(groupBox_4);
        multiplayerAudio->addButton(multiplayerAudioActive);
        multiplayerAudioActive->setObjectName("multiplayerAudioActive");

        formLayout_12->setWidget(9, QFormLayout::ItemRole::FieldRole, multiplayerAudioActive);

        line_4 = new QFrame(groupBox_4);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_12->setWidget(3, QFormLayout::ItemRole::SpanningRole, line_4);

        line_5 = new QFrame(groupBox_4);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_12->setWidget(6, QFormLayout::ItemRole::SpanningRole, line_5);


        formLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(av);
        groupBox_5->setObjectName("groupBox_5");
        formLayout_13 = new QFormLayout(groupBox_5);
        formLayout_13->setObjectName("formLayout_13");
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName("label_10");

        formLayout_13->setWidget(0, QFormLayout::ItemRole::LabelRole, label_10);

        displayDriver = new QComboBox(groupBox_5);
        displayDriver->setObjectName("displayDriver");
        sizePolicy2.setHeightForWidth(displayDriver->sizePolicy().hasHeightForWidth());
        displayDriver->setSizePolicy(sizePolicy2);

        formLayout_13->setWidget(0, QFormLayout::ItemRole::FieldRole, displayDriver);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName("label_9");

        formLayout_13->setWidget(1, QFormLayout::ItemRole::LabelRole, label_9);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName("label_12");

        horizontalLayout_16->addWidget(label_12);

        frameskip = new QSpinBox(groupBox_5);
        frameskip->setObjectName("frameskip");

        horizontalLayout_16->addWidget(frameskip);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName("label_13");

        horizontalLayout_16->addWidget(label_13);


        formLayout_13->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_16);

        lockAspectRatio = new QCheckBox(groupBox_5);
        lockAspectRatio->setObjectName("lockAspectRatio");

        formLayout_13->setWidget(3, QFormLayout::ItemRole::FieldRole, lockAspectRatio);

        lockIntegerScaling = new QCheckBox(groupBox_5);
        lockIntegerScaling->setObjectName("lockIntegerScaling");

        formLayout_13->setWidget(4, QFormLayout::ItemRole::FieldRole, lockIntegerScaling);

        interframeBlending = new QCheckBox(groupBox_5);
        interframeBlending->setObjectName("interframeBlending");

        formLayout_13->setWidget(5, QFormLayout::ItemRole::FieldRole, interframeBlending);

        resampleVideo = new QCheckBox(groupBox_5);
        resampleVideo->setObjectName("resampleVideo");

        formLayout_13->setWidget(6, QFormLayout::ItemRole::FieldRole, resampleVideo);

        line_12 = new QFrame(groupBox_5);
        line_12->setObjectName("line_12");
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_13->setWidget(2, QFormLayout::ItemRole::SpanningRole, line_12);


        formLayout->addWidget(groupBox_5);

        stackedWidget->addWidget(av);
        gameplay = new QWidget();
        gameplay->setObjectName("gameplay");
        formLayout_14 = new QFormLayout(gameplay);
        formLayout_14->setObjectName("formLayout_14");
        label_3 = new QLabel(gameplay);
        label_3->setObjectName("label_3");

        formLayout_14->setWidget(0, QFormLayout::ItemRole::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        fpsTarget = new QDoubleSpinBox(gameplay);
        fpsTarget->setObjectName("fpsTarget");
        fpsTarget->setDecimals(4);
        fpsTarget->setMinimum(0.010000000000000);
        fpsTarget->setMaximum(240.000000000000000);
        fpsTarget->setValue(60.000000000000000);

        horizontalLayout_2->addWidget(fpsTarget);

        label_11 = new QLabel(gameplay);
        label_11->setObjectName("label_11");

        horizontalLayout_2->addWidget(label_11);


        formLayout_14->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);

        nativeGB = new QPushButton(gameplay);
        nativeGB->setObjectName("nativeGB");

        formLayout_14->setWidget(1, QFormLayout::ItemRole::FieldRole, nativeGB);

        label_2 = new QLabel(gameplay);
        label_2->setObjectName("label_2");

        formLayout_14->setWidget(2, QFormLayout::ItemRole::LabelRole, label_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        videoSync = new QCheckBox(gameplay);
        videoSync->setObjectName("videoSync");

        horizontalLayout_10->addWidget(videoSync);

        audioSync = new QCheckBox(gameplay);
        audioSync->setObjectName("audioSync");

        horizontalLayout_10->addWidget(audioSync);


        formLayout_14->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_10);

        line_16 = new QFrame(gameplay);
        line_16->setObjectName("line_16");
        line_16->setFrameShape(QFrame::Shape::HLine);
        line_16->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_14->setWidget(3, QFormLayout::ItemRole::SpanningRole, line_16);

        label_24 = new QLabel(gameplay);
        label_24->setObjectName("label_24");

        formLayout_14->setWidget(4, QFormLayout::ItemRole::LabelRole, label_24);

        autoload = new QCheckBox(gameplay);
        autoload->setObjectName("autoload");
        autoload->setChecked(true);

        formLayout_14->setWidget(4, QFormLayout::ItemRole::FieldRole, autoload);

        cheatAutoload = new QCheckBox(gameplay);
        cheatAutoload->setObjectName("cheatAutoload");
        cheatAutoload->setChecked(true);

        formLayout_14->setWidget(5, QFormLayout::ItemRole::FieldRole, cheatAutoload);

        autorunScripts = new QPushButton(gameplay);
        autorunScripts->setObjectName("autorunScripts");

        formLayout_14->setWidget(6, QFormLayout::ItemRole::FieldRole, autorunScripts);

        line_9 = new QFrame(gameplay);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_14->setWidget(7, QFormLayout::ItemRole::SpanningRole, line_9);

        autosave = new QCheckBox(gameplay);
        autosave->setObjectName("autosave");
        autosave->setChecked(true);

        formLayout_14->setWidget(8, QFormLayout::ItemRole::FieldRole, autosave);

        cheatAutosave = new QCheckBox(gameplay);
        cheatAutosave->setObjectName("cheatAutosave");
        cheatAutosave->setChecked(true);

        formLayout_14->setWidget(9, QFormLayout::ItemRole::FieldRole, cheatAutosave);

        line_21 = new QFrame(gameplay);
        line_21->setObjectName("line_21");
        line_21->setFrameShape(QFrame::Shape::HLine);
        line_21->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_14->setWidget(10, QFormLayout::ItemRole::SpanningRole, line_21);

        label_51 = new QLabel(gameplay);
        label_51->setObjectName("label_51");

        formLayout_14->setWidget(11, QFormLayout::ItemRole::LabelRole, label_51);

        saveStateScreenshot = new QCheckBox(gameplay);
        saveStateScreenshot->setObjectName("saveStateScreenshot");
        saveStateScreenshot->setChecked(true);

        formLayout_14->setWidget(11, QFormLayout::ItemRole::FieldRole, saveStateScreenshot);

        saveStateSave = new QCheckBox(gameplay);
        saveStateSave->setObjectName("saveStateSave");
        saveStateSave->setChecked(true);

        formLayout_14->setWidget(12, QFormLayout::ItemRole::FieldRole, saveStateSave);

        saveStateCheats = new QCheckBox(gameplay);
        saveStateCheats->setObjectName("saveStateCheats");
        saveStateCheats->setChecked(true);

        formLayout_14->setWidget(13, QFormLayout::ItemRole::FieldRole, saveStateCheats);

        line_22 = new QFrame(gameplay);
        line_22->setObjectName("line_22");
        line_22->setFrameShape(QFrame::Shape::HLine);
        line_22->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_14->setWidget(14, QFormLayout::ItemRole::SpanningRole, line_22);

        label_52 = new QLabel(gameplay);
        label_52->setObjectName("label_52");

        formLayout_14->setWidget(15, QFormLayout::ItemRole::LabelRole, label_52);

        loadStateScreenshot = new QCheckBox(gameplay);
        loadStateScreenshot->setObjectName("loadStateScreenshot");
        loadStateScreenshot->setChecked(true);

        formLayout_14->setWidget(15, QFormLayout::ItemRole::FieldRole, loadStateScreenshot);

        loadStateSave = new QCheckBox(gameplay);
        loadStateSave->setObjectName("loadStateSave");

        formLayout_14->setWidget(16, QFormLayout::ItemRole::FieldRole, loadStateSave);

        loadStateCheats = new QCheckBox(gameplay);
        loadStateCheats->setObjectName("loadStateCheats");

        formLayout_14->setWidget(17, QFormLayout::ItemRole::FieldRole, loadStateCheats);

        line_2 = new QFrame(gameplay);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_14->setWidget(18, QFormLayout::ItemRole::SpanningRole, line_2);

        useDiscordPresence = new QCheckBox(gameplay);
        useDiscordPresence->setObjectName("useDiscordPresence");

        formLayout_14->setWidget(19, QFormLayout::ItemRole::FieldRole, useDiscordPresence);

        stackedWidget->addWidget(gameplay);
        interface_2 = new QWidget();
        interface_2->setObjectName("interface_2");
        formLayout_4 = new QFormLayout(interface_2);
        formLayout_4->setObjectName("formLayout_4");
        label_26 = new QLabel(interface_2);
        label_26->setObjectName("label_26");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::LabelRole, label_26);

        languages = new QComboBox(interface_2);
        languages->setObjectName("languages");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::FieldRole, languages);

        line_10 = new QFrame(interface_2);
        line_10->setObjectName("line_10");
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_4->setWidget(1, QFormLayout::ItemRole::SpanningRole, line_10);

        label_6 = new QLabel(interface_2);
        label_6->setObjectName("label_6");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::LabelRole, label_6);

        libraryStyle = new QComboBox(interface_2);
        libraryStyle->addItem(QString());
        libraryStyle->addItem(QString());
        libraryStyle->setObjectName("libraryStyle");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::FieldRole, libraryStyle);

        showLibrary = new QCheckBox(interface_2);
        showLibrary->setObjectName("showLibrary");
        showLibrary->setChecked(true);

        formLayout_4->setWidget(3, QFormLayout::ItemRole::FieldRole, showLibrary);

        showFilenameInLibrary = new QCheckBox(interface_2);
        showFilenameInLibrary->setObjectName("showFilenameInLibrary");

        formLayout_4->setWidget(4, QFormLayout::ItemRole::FieldRole, showFilenameInLibrary);

        clearCache = new QPushButton(interface_2);
        clearCache->setObjectName("clearCache");

        formLayout_4->setWidget(5, QFormLayout::ItemRole::FieldRole, clearCache);

        line_8 = new QFrame(interface_2);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_4->setWidget(6, QFormLayout::ItemRole::SpanningRole, line_8);

        allowOpposingDirections = new QCheckBox(interface_2);
        allowOpposingDirections->setObjectName("allowOpposingDirections");

        formLayout_4->setWidget(7, QFormLayout::ItemRole::FieldRole, allowOpposingDirections);

        suspendScreensaver = new QCheckBox(interface_2);
        suspendScreensaver->setObjectName("suspendScreensaver");
        suspendScreensaver->setChecked(true);

        formLayout_4->setWidget(8, QFormLayout::ItemRole::FieldRole, suspendScreensaver);

        label_41 = new QLabel(interface_2);
        label_41->setObjectName("label_41");

        formLayout_4->setWidget(9, QFormLayout::ItemRole::LabelRole, label_41);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        pauseOnFocusLost = new QCheckBox(interface_2);
        pauseOnFocusLost->setObjectName("pauseOnFocusLost");

        horizontalLayout_21->addWidget(pauseOnFocusLost);

        muteOnFocusLost = new QCheckBox(interface_2);
        muteOnFocusLost->setObjectName("muteOnFocusLost");

        horizontalLayout_21->addWidget(muteOnFocusLost);


        formLayout_4->setLayout(9, QFormLayout::ItemRole::FieldRole, horizontalLayout_21);

        label_42 = new QLabel(interface_2);
        label_42->setObjectName("label_42");

        formLayout_4->setWidget(10, QFormLayout::ItemRole::LabelRole, label_42);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        pauseOnMinimize = new QCheckBox(interface_2);
        pauseOnMinimize->setObjectName("pauseOnMinimize");

        horizontalLayout_24->addWidget(pauseOnMinimize);

        muteOnMinimize = new QCheckBox(interface_2);
        muteOnMinimize->setObjectName("muteOnMinimize");

        horizontalLayout_24->addWidget(muteOnMinimize);


        formLayout_4->setLayout(10, QFormLayout::ItemRole::FieldRole, horizontalLayout_24);

        line_17 = new QFrame(interface_2);
        line_17->setObjectName("line_17");
        line_17->setFrameShape(QFrame::Shape::HLine);
        line_17->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_4->setWidget(11, QFormLayout::ItemRole::SpanningRole, line_17);

        dynamicTitle = new QCheckBox(interface_2);
        dynamicTitle->setObjectName("dynamicTitle");
        dynamicTitle->setChecked(true);

        formLayout_4->setWidget(12, QFormLayout::ItemRole::FieldRole, dynamicTitle);

        showFps = new QCheckBox(interface_2);
        showFps->setObjectName("showFps");
        showFps->setChecked(true);

        formLayout_4->setWidget(13, QFormLayout::ItemRole::FieldRole, showFps);

        showFilename = new QCheckBox(interface_2);
        showFilename->setObjectName("showFilename");
        showFilename->setChecked(true);

        formLayout_4->setWidget(14, QFormLayout::ItemRole::FieldRole, showFilename);

        line_18 = new QFrame(interface_2);
        line_18->setObjectName("line_18");
        line_18->setFrameShape(QFrame::Shape::HLine);
        line_18->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_4->setWidget(15, QFormLayout::ItemRole::SpanningRole, line_18);

        showOSD = new QCheckBox(interface_2);
        showOSD->setObjectName("showOSD");
        showOSD->setChecked(true);

        formLayout_4->setWidget(16, QFormLayout::ItemRole::FieldRole, showOSD);

        osdDisplay = new QVBoxLayout();
        osdDisplay->setObjectName("osdDisplay");
        osdDisplay->setContentsMargins(20, -1, -1, -1);
        showFrameCounter = new QCheckBox(interface_2);
        showFrameCounter->setObjectName("showFrameCounter");

        osdDisplay->addWidget(showFrameCounter);

        showResetInfo = new QCheckBox(interface_2);
        showResetInfo->setObjectName("showResetInfo");

        osdDisplay->addWidget(showResetInfo);


        formLayout_4->setLayout(17, QFormLayout::ItemRole::FieldRole, osdDisplay);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        bgImage = new QLineEdit(interface_2);
        bgImage->setObjectName("bgImage");
        sizePolicy2.setHeightForWidth(bgImage->sizePolicy().hasHeightForWidth());
        bgImage->setSizePolicy(sizePolicy2);

        horizontalLayout_22->addWidget(bgImage);

        bgImageBrowse = new QPushButton(interface_2);
        bgImageBrowse->setObjectName("bgImageBrowse");

        horizontalLayout_22->addWidget(bgImageBrowse);


        formLayout_4->setLayout(19, QFormLayout::ItemRole::FieldRole, horizontalLayout_22);

        line_13 = new QFrame(interface_2);
        line_13->setObjectName("line_13");
        line_13->setFrameShape(QFrame::Shape::HLine);
        line_13->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_4->setWidget(18, QFormLayout::ItemRole::SpanningRole, line_13);

        label_53 = new QLabel(interface_2);
        label_53->setObjectName("label_53");

        formLayout_4->setWidget(19, QFormLayout::ItemRole::LabelRole, label_53);

        stackedWidget->addWidget(interface_2);
        update = new QWidget();
        update->setObjectName("update");
        formLayout_11 = new QFormLayout(update);
        formLayout_11->setObjectName("formLayout_11");
        label_46 = new QLabel(update);
        label_46->setObjectName("label_46");

        formLayout_11->setWidget(0, QFormLayout::ItemRole::LabelRole, label_46);

        currentChannel = new QLabel(update);
        currentChannel->setObjectName("currentChannel");
        currentChannel->setText(QString::fromUtf8("None"));

        formLayout_11->setWidget(0, QFormLayout::ItemRole::FieldRole, currentChannel);

        label_50 = new QLabel(update);
        label_50->setObjectName("label_50");

        formLayout_11->setWidget(1, QFormLayout::ItemRole::LabelRole, label_50);

        currentVersion = new QLabel(update);
        currentVersion->setObjectName("currentVersion");
        currentVersion->setText(QString::fromUtf8("0"));
        currentVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_11->setWidget(1, QFormLayout::ItemRole::FieldRole, currentVersion);

        line_20 = new QFrame(update);
        line_20->setObjectName("line_20");
        line_20->setFrameShape(QFrame::Shape::HLine);
        line_20->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_11->setWidget(2, QFormLayout::ItemRole::SpanningRole, line_20);

        label_45 = new QLabel(update);
        label_45->setObjectName("label_45");

        formLayout_11->setWidget(3, QFormLayout::ItemRole::LabelRole, label_45);

        updateChannel = new QComboBox(update);
        updateChannel->setObjectName("updateChannel");

        formLayout_11->setWidget(3, QFormLayout::ItemRole::FieldRole, updateChannel);

        label_44 = new QLabel(update);
        label_44->setObjectName("label_44");

        formLayout_11->setWidget(4, QFormLayout::ItemRole::LabelRole, label_44);

        availVersion = new QLabel(update);
        availVersion->setObjectName("availVersion");
        availVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_11->setWidget(4, QFormLayout::ItemRole::FieldRole, availVersion);

        label_49 = new QLabel(update);
        label_49->setObjectName("label_49");

        formLayout_11->setWidget(5, QFormLayout::ItemRole::LabelRole, label_49);

        lastChecked = new QLabel(update);
        lastChecked->setObjectName("lastChecked");
        lastChecked->setText(QString::fromUtf8("Never"));

        formLayout_11->setWidget(5, QFormLayout::ItemRole::FieldRole, lastChecked);

        line_11 = new QFrame(update);
        line_11->setObjectName("line_11");
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_11->setWidget(6, QFormLayout::ItemRole::SpanningRole, line_11);

        updateAutoCheck = new QCheckBox(update);
        updateAutoCheck->setObjectName("updateAutoCheck");

        formLayout_11->setWidget(7, QFormLayout::ItemRole::FieldRole, updateAutoCheck);

        checkUpdate = new QPushButton(update);
        checkUpdate->setObjectName("checkUpdate");

        formLayout_11->setWidget(8, QFormLayout::ItemRole::FieldRole, checkUpdate);

        stackedWidget->addWidget(update);
        emulation = new QWidget();
        emulation->setObjectName("emulation");
        formLayout_2 = new QFormLayout(emulation);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label_18 = new QLabel(emulation);
        label_18->setObjectName("label_18");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_18);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        fastForwardRatio = new QDoubleSpinBox(emulation);
        fastForwardRatio->setObjectName("fastForwardRatio");
        fastForwardRatio->setEnabled(false);
        fastForwardRatio->setSuffix(QString::fromUtf8("\303\227"));
        fastForwardRatio->setMinimum(0.010000000000000);
        fastForwardRatio->setMaximum(20.000000000000000);
        fastForwardRatio->setSingleStep(0.500000000000000);
        fastForwardRatio->setValue(5.000000000000000);

        horizontalLayout_5->addWidget(fastForwardRatio);

        fastForwardUnbounded = new QCheckBox(emulation);
        fastForwardUnbounded->setObjectName("fastForwardUnbounded");
        fastForwardUnbounded->setChecked(true);

        horizontalLayout_5->addWidget(fastForwardUnbounded);


        formLayout_2->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_5);

        label_181 = new QLabel(emulation);
        label_181->setObjectName("label_181");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_181);

        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setObjectName("horizontalLayout_51");
        fastForwardHeldRatio = new QDoubleSpinBox(emulation);
        fastForwardHeldRatio->setObjectName("fastForwardHeldRatio");
        fastForwardHeldRatio->setEnabled(false);
        fastForwardHeldRatio->setSuffix(QString::fromUtf8("\303\227"));
        fastForwardHeldRatio->setMinimum(0.010000000000000);
        fastForwardHeldRatio->setMaximum(20.000000000000000);
        fastForwardHeldRatio->setSingleStep(0.500000000000000);
        fastForwardHeldRatio->setValue(5.000000000000000);

        horizontalLayout_51->addWidget(fastForwardHeldRatio);

        fastForwardHeldUnbounded = new QCheckBox(emulation);
        fastForwardHeldUnbounded->setObjectName("fastForwardHeldUnbounded");
        fastForwardHeldUnbounded->setChecked(true);

        horizontalLayout_51->addWidget(fastForwardHeldUnbounded);


        formLayout_2->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_51);

        label_31 = new QLabel(emulation);
        label_31->setObjectName("label_31");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_31);

        autofireThreshold = new QSpinBox(emulation);
        autofireThreshold->setObjectName("autofireThreshold");
        autofireThreshold->setMinimum(1);
        autofireThreshold->setMaximum(60);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, autofireThreshold);

        line = new QFrame(emulation);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::SpanningRole, line);

        rewind = new QCheckBox(emulation);
        rewind->setObjectName("rewind");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::FieldRole, rewind);

        label_8 = new QLabel(emulation);
        label_8->setObjectName("label_8");

        formLayout_2->setWidget(5, QFormLayout::ItemRole::LabelRole, label_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        rewindCapacity = new QSpinBox(emulation);
        rewindCapacity->setObjectName("rewindCapacity");
        rewindCapacity->setMaximum(3600);

        horizontalLayout_13->addWidget(rewindCapacity);

        label_7 = new QLabel(emulation);
        label_7->setObjectName("label_7");

        horizontalLayout_13->addWidget(label_7);


        formLayout_2->setLayout(5, QFormLayout::ItemRole::FieldRole, horizontalLayout_13);

        label_54 = new QLabel(emulation);
        label_54->setObjectName("label_54");

        formLayout_2->setWidget(6, QFormLayout::ItemRole::LabelRole, label_54);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        rewindBufferInterval = new QSpinBox(emulation);
        rewindBufferInterval->setObjectName("rewindBufferInterval");
        rewindBufferInterval->setSuffix(QString::fromUtf8("\303\227"));
        rewindBufferInterval->setMinimum(1);
        rewindBufferInterval->setMaximum(10);
        rewindBufferInterval->setSingleStep(1);
        rewindBufferInterval->setValue(1);

        horizontalLayout_23->addWidget(rewindBufferInterval);


        formLayout_2->setLayout(6, QFormLayout::ItemRole::FieldRole, horizontalLayout_23);

        line_3 = new QFrame(emulation);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_2->setWidget(7, QFormLayout::ItemRole::SpanningRole, line_3);

        label_15 = new QLabel(emulation);
        label_15->setObjectName("label_15");

        formLayout_2->setWidget(8, QFormLayout::ItemRole::LabelRole, label_15);

        idleOptimization = new QComboBox(emulation);
        idleOptimization->addItem(QString());
        idleOptimization->addItem(QString());
        idleOptimization->addItem(QString());
        idleOptimization->setObjectName("idleOptimization");

        formLayout_2->setWidget(8, QFormLayout::ItemRole::FieldRole, idleOptimization);

        preload = new QCheckBox(emulation);
        preload->setObjectName("preload");
        preload->setChecked(true);

        formLayout_2->setWidget(9, QFormLayout::ItemRole::FieldRole, preload);

        forceGbp = new QCheckBox(emulation);
        forceGbp->setObjectName("forceGbp");

        formLayout_2->setWidget(10, QFormLayout::ItemRole::FieldRole, forceGbp);

        vbaBugCompat = new QCheckBox(emulation);
        vbaBugCompat->setObjectName("vbaBugCompat");
        vbaBugCompat->setChecked(true);

        formLayout_2->setWidget(11, QFormLayout::ItemRole::FieldRole, vbaBugCompat);

        stackedWidget->addWidget(emulation);
        enhancements = new QWidget();
        enhancements->setObjectName("enhancements");
        formLayout_6 = new QFormLayout(enhancements);
        formLayout_6->setObjectName("formLayout_6");
        label_36 = new QLabel(enhancements);
        label_36->setObjectName("label_36");

        formLayout_6->setWidget(0, QFormLayout::ItemRole::LabelRole, label_36);

        hwaccelVideo = new QComboBox(enhancements);
        hwaccelVideo->addItem(QString());
        hwaccelVideo->addItem(QString());
        hwaccelVideo->setObjectName("hwaccelVideo");

        formLayout_6->setWidget(0, QFormLayout::ItemRole::FieldRole, hwaccelVideo);

        oglEnhance = new QGroupBox(enhancements);
        oglEnhance->setObjectName("oglEnhance");
        formLayout_7 = new QFormLayout(oglEnhance);
        formLayout_7->setObjectName("formLayout_7");
        label_37 = new QLabel(oglEnhance);
        label_37->setObjectName("label_37");

        formLayout_7->setWidget(0, QFormLayout::ItemRole::LabelRole, label_37);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        videoScale = new QSpinBox(oglEnhance);
        videoScale->setObjectName("videoScale");
        videoScale->setSuffix(QString::fromUtf8("\303\227"));
        videoScale->setMinimum(1);
        videoScale->setMaximum(16);

        horizontalLayout_18->addWidget(videoScale);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer);

        videoScaleSize = new QLabel(oglEnhance);
        videoScaleSize->setObjectName("videoScaleSize");
        videoScaleSize->setEnabled(false);

        horizontalLayout_18->addWidget(videoScaleSize);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_2);


        formLayout_7->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_18);


        formLayout_6->setWidget(1, QFormLayout::ItemRole::SpanningRole, oglEnhance);

        stackedWidget->addWidget(enhancements);
        bios = new QWidget();
        bios->setObjectName("bios");
        formLayout_5 = new QFormLayout(bios);
        formLayout_5->setObjectName("formLayout_5");
        label = new QLabel(bios);
        label->setObjectName("label");

        formLayout_5->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gbBios = new QLineEdit(bios);
        gbBios->setObjectName("gbBios");
        sizePolicy2.setHeightForWidth(gbBios->sizePolicy().hasHeightForWidth());
        gbBios->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(gbBios);

        gbBiosBrowse = new QPushButton(bios);
        gbBiosBrowse->setObjectName("gbBiosBrowse");

        horizontalLayout->addWidget(gbBiosBrowse);


        formLayout_5->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout);

        label_30 = new QLabel(bios);
        label_30->setObjectName("label_30");

        formLayout_5->setWidget(1, QFormLayout::ItemRole::LabelRole, label_30);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        sgbBios = new QLineEdit(bios);
        sgbBios->setObjectName("sgbBios");
        sizePolicy2.setHeightForWidth(sgbBios->sizePolicy().hasHeightForWidth());
        sgbBios->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(sgbBios);

        sgbBiosBrowse = new QPushButton(bios);
        sgbBiosBrowse->setObjectName("sgbBiosBrowse");

        horizontalLayout_12->addWidget(sgbBiosBrowse);


        formLayout_5->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_12);

        label_5 = new QLabel(bios);
        label_5->setObjectName("label_5");

        formLayout_5->setWidget(2, QFormLayout::ItemRole::LabelRole, label_5);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        gbcBios = new QLineEdit(bios);
        gbcBios->setObjectName("gbcBios");
        sizePolicy2.setHeightForWidth(gbcBios->sizePolicy().hasHeightForWidth());
        gbcBios->setSizePolicy(sizePolicy2);

        horizontalLayout_30->addWidget(gbcBios);

        gbcBiosBrowse = new QPushButton(bios);
        gbcBiosBrowse->setObjectName("gbcBiosBrowse");

        horizontalLayout_30->addWidget(gbcBiosBrowse);


        formLayout_5->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_30);

        label_4 = new QLabel(bios);
        label_4->setObjectName("label_4");

        formLayout_5->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        gbaBios = new QLineEdit(bios);
        gbaBios->setObjectName("gbaBios");
        sizePolicy2.setHeightForWidth(gbaBios->sizePolicy().hasHeightForWidth());
        gbaBios->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(gbaBios);

        gbaBiosBrowse = new QPushButton(bios);
        gbaBiosBrowse->setObjectName("gbaBiosBrowse");

        horizontalLayout_8->addWidget(gbaBiosBrowse);


        formLayout_5->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout_8);

        useBios = new QCheckBox(bios);
        useBios->setObjectName("useBios");
        useBios->setChecked(true);

        formLayout_5->setWidget(4, QFormLayout::ItemRole::FieldRole, useBios);

        skipBios = new QCheckBox(bios);
        skipBios->setObjectName("skipBios");

        formLayout_5->setWidget(5, QFormLayout::ItemRole::FieldRole, skipBios);

        stackedWidget->addWidget(bios);
        paths = new QWidget();
        paths->setObjectName("paths");
        formLayout_3 = new QFormLayout(paths);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label_21 = new QLabel(paths);
        label_21->setObjectName("label_21");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, label_21);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        savegamePath = new QLineEdit(paths);
        savegamePath->setObjectName("savegamePath");
        sizePolicy2.setHeightForWidth(savegamePath->sizePolicy().hasHeightForWidth());
        savegamePath->setSizePolicy(sizePolicy2);
        savegamePath->setMinimumSize(QSize(170, 0));

        horizontalLayout_3->addWidget(savegamePath);

        savegameBrowse = new QPushButton(paths);
        savegameBrowse->setObjectName("savegameBrowse");

        horizontalLayout_3->addWidget(savegameBrowse);


        formLayout_3->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_3);

        savegameSameDir = new QCheckBox(paths);
        savegameSameDir->setObjectName("savegameSameDir");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, savegameSameDir);

        line_7 = new QFrame(paths);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_3->setWidget(3, QFormLayout::ItemRole::SpanningRole, line_7);

        label_22 = new QLabel(paths);
        label_22->setObjectName("label_22");

        formLayout_3->setWidget(4, QFormLayout::ItemRole::LabelRole, label_22);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        savestatePath = new QLineEdit(paths);
        savestatePath->setObjectName("savestatePath");
        sizePolicy2.setHeightForWidth(savestatePath->sizePolicy().hasHeightForWidth());
        savestatePath->setSizePolicy(sizePolicy2);
        savestatePath->setMinimumSize(QSize(170, 0));

        horizontalLayout_4->addWidget(savestatePath);

        savestateBrowse = new QPushButton(paths);
        savestateBrowse->setObjectName("savestateBrowse");

        horizontalLayout_4->addWidget(savestateBrowse);


        formLayout_3->setLayout(4, QFormLayout::ItemRole::FieldRole, horizontalLayout_4);

        savestateSameDir = new QCheckBox(paths);
        savestateSameDir->setObjectName("savestateSameDir");

        formLayout_3->setWidget(5, QFormLayout::ItemRole::FieldRole, savestateSameDir);

        line_6 = new QFrame(paths);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_3->setWidget(6, QFormLayout::ItemRole::SpanningRole, line_6);

        label_23 = new QLabel(paths);
        label_23->setObjectName("label_23");

        formLayout_3->setWidget(7, QFormLayout::ItemRole::LabelRole, label_23);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        screenshotPath = new QLineEdit(paths);
        screenshotPath->setObjectName("screenshotPath");
        sizePolicy2.setHeightForWidth(screenshotPath->sizePolicy().hasHeightForWidth());
        screenshotPath->setSizePolicy(sizePolicy2);
        screenshotPath->setMinimumSize(QSize(170, 0));

        horizontalLayout_7->addWidget(screenshotPath);

        screenshotBrowse = new QPushButton(paths);
        screenshotBrowse->setObjectName("screenshotBrowse");

        horizontalLayout_7->addWidget(screenshotBrowse);


        formLayout_3->setLayout(7, QFormLayout::ItemRole::FieldRole, horizontalLayout_7);

        screenshotSameDir = new QCheckBox(paths);
        screenshotSameDir->setObjectName("screenshotSameDir");

        formLayout_3->setWidget(8, QFormLayout::ItemRole::FieldRole, screenshotSameDir);

        line_15 = new QFrame(paths);
        line_15->setObjectName("line_15");
        line_15->setFrameShape(QFrame::Shape::HLine);
        line_15->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_3->setWidget(9, QFormLayout::ItemRole::SpanningRole, line_15);

        label_47 = new QLabel(paths);
        label_47->setObjectName("label_47");

        formLayout_3->setWidget(10, QFormLayout::ItemRole::LabelRole, label_47);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        patchPath = new QLineEdit(paths);
        patchPath->setObjectName("patchPath");
        sizePolicy2.setHeightForWidth(patchPath->sizePolicy().hasHeightForWidth());
        patchPath->setSizePolicy(sizePolicy2);
        patchPath->setMinimumSize(QSize(170, 0));

        horizontalLayout_26->addWidget(patchPath);

        patchBrowse = new QPushButton(paths);
        patchBrowse->setObjectName("patchBrowse");

        horizontalLayout_26->addWidget(patchBrowse);


        formLayout_3->setLayout(10, QFormLayout::ItemRole::FieldRole, horizontalLayout_26);

        patchSameDir = new QCheckBox(paths);
        patchSameDir->setObjectName("patchSameDir");

        formLayout_3->setWidget(11, QFormLayout::ItemRole::FieldRole, patchSameDir);

        line_14 = new QFrame(paths);
        line_14->setObjectName("line_14");
        line_14->setFrameShape(QFrame::Shape::HLine);
        line_14->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_3->setWidget(12, QFormLayout::ItemRole::SpanningRole, line_14);

        label_48 = new QLabel(paths);
        label_48->setObjectName("label_48");

        formLayout_3->setWidget(13, QFormLayout::ItemRole::LabelRole, label_48);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        cheatsPath = new QLineEdit(paths);
        cheatsPath->setObjectName("cheatsPath");
        sizePolicy2.setHeightForWidth(cheatsPath->sizePolicy().hasHeightForWidth());
        cheatsPath->setSizePolicy(sizePolicy2);
        cheatsPath->setMinimumSize(QSize(170, 0));

        horizontalLayout_27->addWidget(cheatsPath);

        cheatsBrowse = new QPushButton(paths);
        cheatsBrowse->setObjectName("cheatsBrowse");

        horizontalLayout_27->addWidget(cheatsBrowse);


        formLayout_3->setLayout(13, QFormLayout::ItemRole::FieldRole, horizontalLayout_27);

        cheatsSameDir = new QCheckBox(paths);
        cheatsSameDir->setObjectName("cheatsSameDir");

        formLayout_3->setWidget(14, QFormLayout::ItemRole::FieldRole, cheatsSameDir);

        stackedWidget->addWidget(paths);
        logging = new QWidget();
        logging->setObjectName("logging");
        verticalLayout = new QVBoxLayout(logging);
        verticalLayout->setObjectName("verticalLayout");
        loggingView = new QTableView(logging);
        loggingView->setObjectName("loggingView");
        loggingView->horizontalHeader()->setMinimumSectionSize(0);
        loggingView->horizontalHeader()->setDefaultSectionSize(77);

        verticalLayout->addWidget(loggingView);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        logToFile = new QCheckBox(logging);
        logToFile->setObjectName("logToFile");

        horizontalLayout_19->addWidget(logToFile);

        logToStdout = new QCheckBox(logging);
        logToStdout->setObjectName("logToStdout");

        horizontalLayout_19->addWidget(logToStdout);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        logFile = new QLineEdit(logging);
        logFile->setObjectName("logFile");

        horizontalLayout_20->addWidget(logFile);

        logFileBrowse = new QPushButton(logging);
        logFileBrowse->setObjectName("logFileBrowse");

        horizontalLayout_20->addWidget(logFileBrowse);


        verticalLayout->addLayout(horizontalLayout_20);

        stackedWidget->addWidget(logging);
        gb = new QWidget();
        gb->setObjectName("gb");
        verticalLayout_2 = new QVBoxLayout(gb);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(gb);
        groupBox_2->setObjectName("groupBox_2");
        formLayout_9 = new QFormLayout(groupBox_2);
        formLayout_9->setObjectName("formLayout_9");
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName("label_29");

        formLayout_9->setWidget(0, QFormLayout::ItemRole::LabelRole, label_29);

        gbModel = new QComboBox(groupBox_2);
        gbModel->setObjectName("gbModel");

        formLayout_9->setWidget(0, QFormLayout::ItemRole::FieldRole, gbModel);

        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName("label_32");

        formLayout_9->setWidget(1, QFormLayout::ItemRole::LabelRole, label_32);

        sgbModel = new QComboBox(groupBox_2);
        sgbModel->setObjectName("sgbModel");

        formLayout_9->setWidget(1, QFormLayout::ItemRole::FieldRole, sgbModel);

        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName("label_33");

        formLayout_9->setWidget(2, QFormLayout::ItemRole::LabelRole, label_33);

        cgbModel = new QComboBox(groupBox_2);
        cgbModel->setObjectName("cgbModel");

        formLayout_9->setWidget(2, QFormLayout::ItemRole::FieldRole, cgbModel);

        label_38 = new QLabel(groupBox_2);
        label_38->setObjectName("label_38");

        formLayout_9->setWidget(3, QFormLayout::ItemRole::LabelRole, label_38);

        cgbHybridModel = new QComboBox(groupBox_2);
        cgbHybridModel->setObjectName("cgbHybridModel");

        formLayout_9->setWidget(3, QFormLayout::ItemRole::FieldRole, cgbHybridModel);

        label_39 = new QLabel(groupBox_2);
        label_39->setObjectName("label_39");

        formLayout_9->setWidget(4, QFormLayout::ItemRole::LabelRole, label_39);

        cgbSgbModel = new QComboBox(groupBox_2);
        cgbSgbModel->setObjectName("cgbSgbModel");

        formLayout_9->setWidget(4, QFormLayout::ItemRole::FieldRole, cgbSgbModel);

        sgbBorders = new QCheckBox(groupBox_2);
        sgbBorders->setObjectName("sgbBorders");

        formLayout_9->setWidget(5, QFormLayout::ItemRole::FieldRole, sgbBorders);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(gb);
        groupBox->setObjectName("groupBox");
        formLayout_8 = new QFormLayout(groupBox);
        formLayout_8->setObjectName("formLayout_8");
        label_40 = new QLabel(groupBox);
        label_40->setObjectName("label_40");

        formLayout_8->setWidget(0, QFormLayout::ItemRole::LabelRole, label_40);

        colorPreset = new QComboBox(groupBox);
        colorPreset->setObjectName("colorPreset");

        formLayout_8->setWidget(0, QFormLayout::ItemRole::FieldRole, colorPreset);

        label_28 = new QLabel(groupBox);
        label_28->setObjectName("label_28");

        formLayout_8->setWidget(1, QFormLayout::ItemRole::LabelRole, label_28);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        color0 = new QFrame(groupBox);
        color0->setObjectName("color0");
        color0->setMinimumSize(QSize(24, 24));
        color0->setAutoFillBackground(true);
        color0->setFrameShape(QFrame::StyledPanel);
        color0->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(color0);

        color1 = new QFrame(groupBox);
        color1->setObjectName("color1");
        color1->setMinimumSize(QSize(24, 24));
        color1->setAutoFillBackground(true);
        color1->setFrameShape(QFrame::StyledPanel);
        color1->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(color1);

        color2 = new QFrame(groupBox);
        color2->setObjectName("color2");
        color2->setMinimumSize(QSize(24, 24));
        color2->setAutoFillBackground(true);
        color2->setFrameShape(QFrame::StyledPanel);
        color2->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(color2);

        color3 = new QFrame(groupBox);
        color3->setObjectName("color3");
        color3->setMinimumSize(QSize(24, 24));
        color3->setAutoFillBackground(true);
        color3->setFrameShape(QFrame::StyledPanel);
        color3->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(color3);


        formLayout_8->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_9);

        label_69 = new QLabel(groupBox);
        label_69->setObjectName("label_69");

        formLayout_8->setWidget(2, QFormLayout::ItemRole::LabelRole, label_69);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        color4 = new QFrame(groupBox);
        color4->setObjectName("color4");
        color4->setMinimumSize(QSize(24, 24));
        color4->setAutoFillBackground(true);
        color4->setFrameShape(QFrame::StyledPanel);
        color4->setFrameShadow(QFrame::Raised);

        horizontalLayout_15->addWidget(color4);

        color5 = new QFrame(groupBox);
        color5->setObjectName("color5");
        color5->setMinimumSize(QSize(24, 24));
        color5->setAutoFillBackground(true);
        color5->setFrameShape(QFrame::StyledPanel);
        color5->setFrameShadow(QFrame::Raised);

        horizontalLayout_15->addWidget(color5);

        color6 = new QFrame(groupBox);
        color6->setObjectName("color6");
        color6->setMinimumSize(QSize(24, 24));
        color6->setAutoFillBackground(true);
        color6->setFrameShape(QFrame::StyledPanel);
        color6->setFrameShadow(QFrame::Raised);

        horizontalLayout_15->addWidget(color6);

        color7 = new QFrame(groupBox);
        color7->setObjectName("color7");
        color7->setMinimumSize(QSize(24, 24));
        color7->setAutoFillBackground(true);
        color7->setFrameShape(QFrame::StyledPanel);
        color7->setFrameShadow(QFrame::Raised);

        horizontalLayout_15->addWidget(color7);


        formLayout_8->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_15);

        label_70 = new QLabel(groupBox);
        label_70->setObjectName("label_70");

        formLayout_8->setWidget(3, QFormLayout::ItemRole::LabelRole, label_70);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName("horizontalLayout_37");
        color8 = new QFrame(groupBox);
        color8->setObjectName("color8");
        color8->setMinimumSize(QSize(24, 24));
        color8->setAutoFillBackground(true);
        color8->setFrameShape(QFrame::StyledPanel);
        color8->setFrameShadow(QFrame::Raised);

        horizontalLayout_37->addWidget(color8);

        color9 = new QFrame(groupBox);
        color9->setObjectName("color9");
        color9->setMinimumSize(QSize(24, 24));
        color9->setAutoFillBackground(true);
        color9->setFrameShape(QFrame::StyledPanel);
        color9->setFrameShadow(QFrame::Raised);

        horizontalLayout_37->addWidget(color9);

        color10 = new QFrame(groupBox);
        color10->setObjectName("color10");
        color10->setMinimumSize(QSize(24, 24));
        color10->setAutoFillBackground(true);
        color10->setFrameShape(QFrame::StyledPanel);
        color10->setFrameShadow(QFrame::Raised);

        horizontalLayout_37->addWidget(color10);

        color11 = new QFrame(groupBox);
        color11->setObjectName("color11");
        color11->setMinimumSize(QSize(24, 24));
        color11->setAutoFillBackground(true);
        color11->setFrameShape(QFrame::StyledPanel);
        color11->setFrameShadow(QFrame::Raised);

        horizontalLayout_37->addWidget(color11);


        formLayout_8->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout_37);

        line_19 = new QFrame(groupBox);
        line_19->setObjectName("line_19");
        line_19->setFrameShape(QFrame::Shape::HLine);
        line_19->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_8->setWidget(4, QFormLayout::ItemRole::SpanningRole, line_19);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        sgbColor = new QRadioButton(groupBox);
        sgbColor->setObjectName("sgbColor");

        gridLayout_2->addWidget(sgbColor, 0, 1, 1, 1);

        gbColor = new QRadioButton(groupBox);
        gbColor->setObjectName("gbColor");

        gridLayout_2->addWidget(gbColor, 0, 0, 1, 1);

        cgbColor = new QRadioButton(groupBox);
        cgbColor->setObjectName("cgbColor");

        gridLayout_2->addWidget(cgbColor, 1, 0, 1, 1);

        scgbColor = new QRadioButton(groupBox);
        scgbColor->setObjectName("scgbColor");

        gridLayout_2->addWidget(scgbColor, 1, 1, 1, 1);


        formLayout_8->setLayout(5, QFormLayout::ItemRole::SpanningRole, gridLayout_2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_3 = new QGroupBox(gb);
        groupBox_3->setObjectName("groupBox_3");
        formLayout_10 = new QFormLayout(groupBox_3);
        formLayout_10->setObjectName("formLayout_10");
        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName("label_27");

        formLayout_10->setWidget(0, QFormLayout::ItemRole::LabelRole, label_27);

        cameraDriver = new QComboBox(groupBox_3);
        cameraDriver->setObjectName("cameraDriver");
        sizePolicy2.setHeightForWidth(cameraDriver->sizePolicy().hasHeightForWidth());
        cameraDriver->setSizePolicy(sizePolicy2);

        formLayout_10->setWidget(0, QFormLayout::ItemRole::FieldRole, cameraDriver);

        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName("label_35");

        formLayout_10->setWidget(1, QFormLayout::ItemRole::LabelRole, label_35);

        camera = new QComboBox(groupBox_3);
        camera->setObjectName("camera");
        camera->setEnabled(false);
        sizePolicy2.setHeightForWidth(camera->sizePolicy().hasHeightForWidth());
        camera->setSizePolicy(sizePolicy2);

        formLayout_10->setWidget(1, QFormLayout::ItemRole::FieldRole, camera);


        verticalLayout_2->addWidget(groupBox_3);

        stackedWidget->addWidget(gb);

        gridLayout->addWidget(stackedWidget, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QGBA__SettingsView);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(QGBA__SettingsView);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QGBA__SettingsView, qOverload<>(&QWidget::close));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QGBA__SettingsView, qOverload<>(&QWidget::close));
        QObject::connect(tabs, &QListWidget::currentRowChanged, stackedWidget, &QStackedWidget::setCurrentIndex);
        QObject::connect(savegameSameDir, &QCheckBox::toggled, savegamePath, &QLineEdit::setDisabled);
        QObject::connect(savestateSameDir, &QCheckBox::toggled, savestatePath, &QLineEdit::setDisabled);
        QObject::connect(screenshotSameDir, &QCheckBox::toggled, screenshotPath, &QLineEdit::setDisabled);
        QObject::connect(patchSameDir, &QCheckBox::toggled, patchPath, &QLineEdit::setDisabled);
        QObject::connect(cheatsSameDir, &QCheckBox::toggled, cheatsPath, &QLineEdit::setDisabled);
        QObject::connect(fastForwardUnbounded, &QCheckBox::toggled, fastForwardRatio, &QDoubleSpinBox::setDisabled);
        QObject::connect(fastForwardHeldUnbounded, &QCheckBox::toggled, fastForwardHeldRatio, &QDoubleSpinBox::setDisabled);
        QObject::connect(dynamicTitle, &QCheckBox::toggled, showFps, &QCheckBox::setEnabled);
        QObject::connect(dynamicTitle, &QCheckBox::toggled, showFilename, &QCheckBox::setEnabled);
        QObject::connect(showOSD, &QCheckBox::toggled, showFrameCounter, &QCheckBox::setEnabled);
        QObject::connect(showOSD, &QCheckBox::toggled, showResetInfo, &QCheckBox::setEnabled);

        tabs->setCurrentRow(-1);
        stackedWidget->setCurrentIndex(0);
        audioBufferSize->setCurrentIndex(11);
        sampleRate->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QGBA__SettingsView);
    } // setupUi

    void retranslateUi(QWidget *QGBA__SettingsView)
    {
        QGBA__SettingsView->setWindowTitle(QCoreApplication::translate("QGBA::SettingsView", "Settings", nullptr));

        const bool __sortingEnabled = tabs->isSortingEnabled();
        tabs->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = tabs->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QGBA::SettingsView", "Audio/Video", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = tabs->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QGBA::SettingsView", "Gameplay", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = tabs->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QGBA::SettingsView", "Interface", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = tabs->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QGBA::SettingsView", "Update", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = tabs->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QGBA::SettingsView", "Emulation", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = tabs->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QGBA::SettingsView", "Enhancements", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = tabs->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("QGBA::SettingsView", "BIOS", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = tabs->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("QGBA::SettingsView", "Paths", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = tabs->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("QGBA::SettingsView", "Logging", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = tabs->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("QGBA::SettingsView", "Game Boy", nullptr));
        tabs->setSortingEnabled(__sortingEnabled);

        groupBox_4->setTitle(QCoreApplication::translate("QGBA::SettingsView", "Audio", nullptr));
        label_14->setText(QCoreApplication::translate("QGBA::SettingsView", "Audio driver:", nullptr));
        audioBufferSizeLabel->setText(QCoreApplication::translate("QGBA::SettingsView", "Audio buffer:", nullptr));
        audioBufferSize->setItemText(0, QCoreApplication::translate("QGBA::SettingsView", "32", nullptr));
        audioBufferSize->setItemText(1, QCoreApplication::translate("QGBA::SettingsView", "48", nullptr));
        audioBufferSize->setItemText(2, QCoreApplication::translate("QGBA::SettingsView", "64", nullptr));
        audioBufferSize->setItemText(3, QCoreApplication::translate("QGBA::SettingsView", "96", nullptr));
        audioBufferSize->setItemText(4, QCoreApplication::translate("QGBA::SettingsView", "128", nullptr));
        audioBufferSize->setItemText(5, QCoreApplication::translate("QGBA::SettingsView", "192", nullptr));
        audioBufferSize->setItemText(6, QCoreApplication::translate("QGBA::SettingsView", "256", nullptr));
        audioBufferSize->setItemText(7, QCoreApplication::translate("QGBA::SettingsView", "384", nullptr));
        audioBufferSize->setItemText(8, QCoreApplication::translate("QGBA::SettingsView", "512", nullptr));
        audioBufferSize->setItemText(9, QCoreApplication::translate("QGBA::SettingsView", "768", nullptr));
        audioBufferSize->setItemText(10, QCoreApplication::translate("QGBA::SettingsView", "1024", nullptr));
        audioBufferSize->setItemText(11, QCoreApplication::translate("QGBA::SettingsView", "1536", nullptr));
        audioBufferSize->setItemText(12, QCoreApplication::translate("QGBA::SettingsView", "2048", nullptr));
        audioBufferSize->setItemText(13, QCoreApplication::translate("QGBA::SettingsView", "3072", nullptr));
        audioBufferSize->setItemText(14, QCoreApplication::translate("QGBA::SettingsView", "4096", nullptr));

        audioBufferSize->setCurrentText(QCoreApplication::translate("QGBA::SettingsView", "1536", nullptr));
        label_16->setText(QCoreApplication::translate("QGBA::SettingsView", "samples", nullptr));
        label_19->setText(QCoreApplication::translate("QGBA::SettingsView", "Sample rate:", nullptr));
        sampleRate->setItemText(0, QCoreApplication::translate("QGBA::SettingsView", "22050", nullptr));
        sampleRate->setItemText(1, QCoreApplication::translate("QGBA::SettingsView", "32000", nullptr));
        sampleRate->setItemText(2, QCoreApplication::translate("QGBA::SettingsView", "44100", nullptr));
        sampleRate->setItemText(3, QCoreApplication::translate("QGBA::SettingsView", "48000", nullptr));

        sampleRate->setCurrentText(QCoreApplication::translate("QGBA::SettingsView", "44100", nullptr));
        label_20->setText(QCoreApplication::translate("QGBA::SettingsView", "Hz", nullptr));
        label_17->setText(QCoreApplication::translate("QGBA::SettingsView", "Volume:", nullptr));
        mute->setText(QCoreApplication::translate("QGBA::SettingsView", "Mute", nullptr));
        label_34->setText(QCoreApplication::translate("QGBA::SettingsView", "Fast forward volume:", nullptr));
        muteFf->setText(QCoreApplication::translate("QGBA::SettingsView", "Mute", nullptr));
        label_43->setText(QCoreApplication::translate("QGBA::SettingsView", "Audio in multiplayer:", nullptr));
        multiplayerAudioAll->setText(QCoreApplication::translate("QGBA::SettingsView", "All windows", nullptr));
        multiplayerAudio1->setText(QCoreApplication::translate("QGBA::SettingsView", "Player 1 window only", nullptr));
        multiplayerAudioActive->setText(QCoreApplication::translate("QGBA::SettingsView", "Currently active player window", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QGBA::SettingsView", "Video", nullptr));
        label_10->setText(QCoreApplication::translate("QGBA::SettingsView", "Display driver:", nullptr));
        label_9->setText(QCoreApplication::translate("QGBA::SettingsView", "Frameskip:", nullptr));
        label_12->setText(QCoreApplication::translate("QGBA::SettingsView", "Skip every", nullptr));
        label_13->setText(QCoreApplication::translate("QGBA::SettingsView", "frames", nullptr));
        lockAspectRatio->setText(QCoreApplication::translate("QGBA::SettingsView", "Lock aspect ratio", nullptr));
        lockIntegerScaling->setText(QCoreApplication::translate("QGBA::SettingsView", "Force integer scaling", nullptr));
        interframeBlending->setText(QCoreApplication::translate("QGBA::SettingsView", "Interframe blending", nullptr));
        resampleVideo->setText(QCoreApplication::translate("QGBA::SettingsView", "Bilinear filtering", nullptr));
        label_3->setText(QCoreApplication::translate("QGBA::SettingsView", "FPS target:", nullptr));
        label_11->setText(QCoreApplication::translate("QGBA::SettingsView", "frames per second", nullptr));
        nativeGB->setText(QCoreApplication::translate("QGBA::SettingsView", "Native (59.7275)", nullptr));
        label_2->setText(QCoreApplication::translate("QGBA::SettingsView", "Sync:", nullptr));
        videoSync->setText(QCoreApplication::translate("QGBA::SettingsView", "Video", nullptr));
        audioSync->setText(QCoreApplication::translate("QGBA::SettingsView", "Audio", nullptr));
        label_24->setText(QCoreApplication::translate("QGBA::SettingsView", "On loading a game:", nullptr));
        autoload->setText(QCoreApplication::translate("QGBA::SettingsView", "Load last state", nullptr));
        cheatAutoload->setText(QCoreApplication::translate("QGBA::SettingsView", "Load cheats", nullptr));
        autorunScripts->setText(QCoreApplication::translate("QGBA::SettingsView", "Edit autorun scripts", nullptr));
        autosave->setText(QCoreApplication::translate("QGBA::SettingsView", "Periodically autosave state", nullptr));
        cheatAutosave->setText(QCoreApplication::translate("QGBA::SettingsView", "Save entered cheats", nullptr));
        label_51->setText(QCoreApplication::translate("QGBA::SettingsView", "Save state extra data:", nullptr));
        saveStateScreenshot->setText(QCoreApplication::translate("QGBA::SettingsView", "Screenshot", nullptr));
        saveStateSave->setText(QCoreApplication::translate("QGBA::SettingsView", "Save game", nullptr));
        saveStateCheats->setText(QCoreApplication::translate("QGBA::SettingsView", "Cheat codes", nullptr));
        label_52->setText(QCoreApplication::translate("QGBA::SettingsView", "Load state extra data:", nullptr));
        loadStateScreenshot->setText(QCoreApplication::translate("QGBA::SettingsView", "Screenshot", nullptr));
        loadStateSave->setText(QCoreApplication::translate("QGBA::SettingsView", "Save game", nullptr));
        loadStateCheats->setText(QCoreApplication::translate("QGBA::SettingsView", "Cheat codes", nullptr));
        useDiscordPresence->setText(QCoreApplication::translate("QGBA::SettingsView", "Enable Discord Rich Presence", nullptr));
        label_26->setText(QCoreApplication::translate("QGBA::SettingsView", "Language", nullptr));
        label_6->setText(QCoreApplication::translate("QGBA::SettingsView", "Library:", nullptr));
        libraryStyle->setItemText(0, QCoreApplication::translate("QGBA::SettingsView", "List view", nullptr));
        libraryStyle->setItemText(1, QCoreApplication::translate("QGBA::SettingsView", "Tree view", nullptr));

        showLibrary->setText(QCoreApplication::translate("QGBA::SettingsView", "Show when no game open", nullptr));
        showFilenameInLibrary->setText(QCoreApplication::translate("QGBA::SettingsView", "Show filename instead of ROM name in library view", nullptr));
        clearCache->setText(QCoreApplication::translate("QGBA::SettingsView", "Clear cache", nullptr));
        allowOpposingDirections->setText(QCoreApplication::translate("QGBA::SettingsView", "Allow opposing input directions", nullptr));
        suspendScreensaver->setText(QCoreApplication::translate("QGBA::SettingsView", "Suspend screensaver", nullptr));
        label_41->setText(QCoreApplication::translate("QGBA::SettingsView", "When inactive:", nullptr));
        pauseOnFocusLost->setText(QCoreApplication::translate("QGBA::SettingsView", "Pause", nullptr));
        muteOnFocusLost->setText(QCoreApplication::translate("QGBA::SettingsView", "Mute", nullptr));
        label_42->setText(QCoreApplication::translate("QGBA::SettingsView", "When minimized:", nullptr));
        pauseOnMinimize->setText(QCoreApplication::translate("QGBA::SettingsView", "Pause", nullptr));
        muteOnMinimize->setText(QCoreApplication::translate("QGBA::SettingsView", "Mute", nullptr));
        dynamicTitle->setText(QCoreApplication::translate("QGBA::SettingsView", "Dynamically update window title", nullptr));
        showFps->setText(QCoreApplication::translate("QGBA::SettingsView", "Show FPS in title bar", nullptr));
        showFilename->setText(QCoreApplication::translate("QGBA::SettingsView", "Show filename instead of ROM name in title bar", nullptr));
        showOSD->setText(QCoreApplication::translate("QGBA::SettingsView", "Show OSD messages", nullptr));
        showFrameCounter->setText(QCoreApplication::translate("QGBA::SettingsView", "Show frame count in OSD", nullptr));
        showResetInfo->setText(QCoreApplication::translate("QGBA::SettingsView", "Show emulation info on reset", nullptr));
        bgImageBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Browse", nullptr));
        label_53->setText(QCoreApplication::translate("QGBA::SettingsView", "Custom border:", nullptr));
        label_46->setText(QCoreApplication::translate("QGBA::SettingsView", "Current channel:", nullptr));
        label_50->setText(QCoreApplication::translate("QGBA::SettingsView", "Current version:", nullptr));
        label_45->setText(QCoreApplication::translate("QGBA::SettingsView", "Update channel:", nullptr));
        label_44->setText(QCoreApplication::translate("QGBA::SettingsView", "Available version:", nullptr));
        availVersion->setText(QCoreApplication::translate("QGBA::SettingsView", "(Unknown)", nullptr));
        label_49->setText(QCoreApplication::translate("QGBA::SettingsView", "Last checked:", nullptr));
        updateAutoCheck->setText(QCoreApplication::translate("QGBA::SettingsView", "Automatically check on start", nullptr));
        checkUpdate->setText(QCoreApplication::translate("QGBA::SettingsView", "Check now", nullptr));
        label_18->setText(QCoreApplication::translate("QGBA::SettingsView", "Fast forward speed:", nullptr));
        fastForwardUnbounded->setText(QCoreApplication::translate("QGBA::SettingsView", "Unbounded", nullptr));
        label_181->setText(QCoreApplication::translate("QGBA::SettingsView", "Fast forward (held) speed:", nullptr));
        fastForwardHeldUnbounded->setText(QCoreApplication::translate("QGBA::SettingsView", "Unbounded", nullptr));
        label_31->setText(QCoreApplication::translate("QGBA::SettingsView", "Autofire interval:", nullptr));
        rewind->setText(QCoreApplication::translate("QGBA::SettingsView", "Enable rewind", nullptr));
        label_8->setText(QCoreApplication::translate("QGBA::SettingsView", "Rewind history:", nullptr));
        label_7->setText(QCoreApplication::translate("QGBA::SettingsView", "frames", nullptr));
        label_54->setText(QCoreApplication::translate("QGBA::SettingsView", "Rewind speed:", nullptr));
        label_15->setText(QCoreApplication::translate("QGBA::SettingsView", "Idle loops:", nullptr));
        idleOptimization->setItemText(0, QCoreApplication::translate("QGBA::SettingsView", "Run all", nullptr));
        idleOptimization->setItemText(1, QCoreApplication::translate("QGBA::SettingsView", "Remove known", nullptr));
        idleOptimization->setItemText(2, QCoreApplication::translate("QGBA::SettingsView", "Detect and remove", nullptr));

        preload->setText(QCoreApplication::translate("QGBA::SettingsView", "Preload entire ROM into memory", nullptr));
        forceGbp->setText(QCoreApplication::translate("QGBA::SettingsView", "Enable Game Boy Player features by default", nullptr));
        vbaBugCompat->setText(QCoreApplication::translate("QGBA::SettingsView", "Enable VBA bug compatibility in ROM hacks", nullptr));
        label_36->setText(QCoreApplication::translate("QGBA::SettingsView", "Video renderer:", nullptr));
        hwaccelVideo->setItemText(0, QCoreApplication::translate("QGBA::SettingsView", "Software", nullptr));
        hwaccelVideo->setItemText(1, QCoreApplication::translate("QGBA::SettingsView", "OpenGL", nullptr));

        oglEnhance->setTitle(QCoreApplication::translate("QGBA::SettingsView", "OpenGL enhancements", nullptr));
        label_37->setText(QCoreApplication::translate("QGBA::SettingsView", "High-resolution scale:", nullptr));
        videoScaleSize->setText(QCoreApplication::translate("QGBA::SettingsView", "(240\303\227160)", nullptr));
        label->setText(QCoreApplication::translate("QGBA::SettingsView", "GB BIOS file:", nullptr));
        gbBiosBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Browse", nullptr));
        label_30->setText(QCoreApplication::translate("QGBA::SettingsView", "SGB BIOS file:", nullptr));
        sgbBiosBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Browse", nullptr));
        label_5->setText(QCoreApplication::translate("QGBA::SettingsView", "GBC BIOS file:", nullptr));
        gbcBiosBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Browse", nullptr));
        label_4->setText(QCoreApplication::translate("QGBA::SettingsView", "GBA BIOS file:", nullptr));
        gbaBiosBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Browse", nullptr));
        useBios->setText(QCoreApplication::translate("QGBA::SettingsView", "Use BIOS file if found", nullptr));
        skipBios->setText(QCoreApplication::translate("QGBA::SettingsView", "Skip BIOS intro", nullptr));
        label_21->setText(QCoreApplication::translate("QGBA::SettingsView", "Save games", nullptr));
        savegameBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Browse", nullptr));
        savegameSameDir->setText(QCoreApplication::translate("QGBA::SettingsView", "Same directory as the ROM", nullptr));
        label_22->setText(QCoreApplication::translate("QGBA::SettingsView", "Save states", nullptr));
        savestateBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Browse", nullptr));
        savestateSameDir->setText(QCoreApplication::translate("QGBA::SettingsView", "Same directory as the ROM", nullptr));
        label_23->setText(QCoreApplication::translate("QGBA::SettingsView", "Screenshots", nullptr));
        screenshotBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Browse", nullptr));
        screenshotSameDir->setText(QCoreApplication::translate("QGBA::SettingsView", "Same directory as the ROM", nullptr));
        label_47->setText(QCoreApplication::translate("QGBA::SettingsView", "Patches", nullptr));
        patchBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Browse", nullptr));
        patchSameDir->setText(QCoreApplication::translate("QGBA::SettingsView", "Same directory as the ROM", nullptr));
        label_48->setText(QCoreApplication::translate("QGBA::SettingsView", "Cheats", nullptr));
        cheatsBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Browse", nullptr));
        cheatsSameDir->setText(QCoreApplication::translate("QGBA::SettingsView", "Same directory as the ROM", nullptr));
        logToFile->setText(QCoreApplication::translate("QGBA::SettingsView", "Log to file", nullptr));
        logToStdout->setText(QCoreApplication::translate("QGBA::SettingsView", "Log to console", nullptr));
        logFileBrowse->setText(QCoreApplication::translate("QGBA::SettingsView", "Select Log File", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QGBA::SettingsView", "Models", nullptr));
        label_29->setText(QCoreApplication::translate("QGBA::SettingsView", "GB only:", nullptr));
        label_32->setText(QCoreApplication::translate("QGBA::SettingsView", "SGB compatible:", nullptr));
        label_33->setText(QCoreApplication::translate("QGBA::SettingsView", "GBC only:", nullptr));
        label_38->setText(QCoreApplication::translate("QGBA::SettingsView", "GBC compatible:", nullptr));
        label_39->setText(QCoreApplication::translate("QGBA::SettingsView", "SGB and GBC compatible:", nullptr));
        sgbBorders->setText(QCoreApplication::translate("QGBA::SettingsView", "Super Game Boy borders", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QGBA::SettingsView", "Game Boy palette", nullptr));
        label_40->setText(QCoreApplication::translate("QGBA::SettingsView", "Preset:", nullptr));
        label_28->setText(QCoreApplication::translate("QGBA::SettingsView", "Default BG colors:", nullptr));
        label_69->setText(QCoreApplication::translate("QGBA::SettingsView", "Default sprite colors 1:", nullptr));
        label_70->setText(QCoreApplication::translate("QGBA::SettingsView", "Default sprite colors 2:", nullptr));
        sgbColor->setText(QCoreApplication::translate("QGBA::SettingsView", "SGB color palette if available", nullptr));
        gbColor->setText(QCoreApplication::translate("QGBA::SettingsView", "Default color palette only", nullptr));
        cgbColor->setText(QCoreApplication::translate("QGBA::SettingsView", "GBC color palette if available", nullptr));
        scgbColor->setText(QCoreApplication::translate("QGBA::SettingsView", "SGB (preferred) or GBC color palette if available", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QGBA::SettingsView", "Game Boy Camera", nullptr));
        label_27->setText(QCoreApplication::translate("QGBA::SettingsView", "Driver:", nullptr));
        label_35->setText(QCoreApplication::translate("QGBA::SettingsView", "Source:", nullptr));
    } // retranslateUi

};

} // namespace QGBA

namespace QGBA {
namespace Ui {
    class SettingsView: public Ui_SettingsView {};
} // namespace Ui
} // namespace QGBA

#endif // UI_SETTINGSVIEW_H
