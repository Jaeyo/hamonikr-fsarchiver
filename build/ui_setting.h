/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_setting_dialog
{
public:
    QFrame *frame;
    QLabel *label;
    QComboBox *cmb_Kerne;
    QLabel *label_2;
    QComboBox *cmb_zip;
    QLabel *label_3;
    QComboBox *cmb_language;
    QCheckBox *chk_file;
    QCheckBox *chk_tip;
    QCheckBox *chk_folder;
    QCheckBox *chk_key;
    QCheckBox *chk_split;
    QCheckBox *chk_password;
    QCheckBox *chk_datesave;
    QPushButton *cmd_save;
    QPushButton *cmd_cancel;
    QCheckBox *chk_pbr;
    QComboBox *cmb_network;
    QLabel *label_4;
    QCheckBox *chk_ssh;
    QCheckBox *chk_sshfs;
    QCheckBox *chk_prg;
    QCheckBox *chk_hidden;
    QComboBox *cmb_zstd;
    QLabel *label_5;
    QPushButton *cmd_zstd;
    QLabel *label_6;
    QComboBox *cmb_sleep;

    void setupUi(QDialog *setting_dialog)
    {
        if (setting_dialog->objectName().isEmpty())
            setting_dialog->setObjectName(QString::fromUtf8("setting_dialog"));
        setting_dialog->resize(473, 643);
        frame = new QFrame(setting_dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 451, 611));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 17, 225, 51));
        cmb_Kerne = new QComboBox(frame);
        cmb_Kerne->setObjectName(QString::fromUtf8("cmb_Kerne"));
        cmb_Kerne->setGeometry(QRect(241, 30, 200, 27));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 73, 225, 34));
        cmb_zip = new QComboBox(frame);
        cmb_zip->setObjectName(QString::fromUtf8("cmb_zip"));
        cmb_zip->setGeometry(QRect(241, 73, 200, 27));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 145, 225, 27));
        cmb_language = new QComboBox(frame);
        cmb_language->setObjectName(QString::fromUtf8("cmb_language"));
        cmb_language->setGeometry(QRect(240, 145, 200, 27));
        chk_file = new QCheckBox(frame);
        chk_file->setObjectName(QString::fromUtf8("chk_file"));
        chk_file->setGeometry(QRect(10, 185, 441, 39));
        chk_tip = new QCheckBox(frame);
        chk_tip->setObjectName(QString::fromUtf8("chk_tip"));
        chk_tip->setGeometry(QRect(10, 210, 441, 39));
        chk_folder = new QCheckBox(frame);
        chk_folder->setObjectName(QString::fromUtf8("chk_folder"));
        chk_folder->setGeometry(QRect(10, 260, 441, 39));
        chk_key = new QCheckBox(frame);
        chk_key->setObjectName(QString::fromUtf8("chk_key"));
        chk_key->setGeometry(QRect(10, 235, 441, 39));
        chk_split = new QCheckBox(frame);
        chk_split->setObjectName(QString::fromUtf8("chk_split"));
        chk_split->setGeometry(QRect(10, 310, 441, 39));
        chk_password = new QCheckBox(frame);
        chk_password->setObjectName(QString::fromUtf8("chk_password"));
        chk_password->setGeometry(QRect(10, 335, 441, 39));
        chk_datesave = new QCheckBox(frame);
        chk_datesave->setObjectName(QString::fromUtf8("chk_datesave"));
        chk_datesave->setGeometry(QRect(10, 360, 441, 39));
        cmd_save = new QPushButton(frame);
        cmd_save->setObjectName(QString::fromUtf8("cmd_save"));
        cmd_save->setGeometry(QRect(10, 540, 431, 27));
        cmd_cancel = new QPushButton(frame);
        cmd_cancel->setObjectName(QString::fromUtf8("cmd_cancel"));
        cmd_cancel->setGeometry(QRect(10, 570, 431, 27));
        chk_pbr = new QCheckBox(frame);
        chk_pbr->setObjectName(QString::fromUtf8("chk_pbr"));
        chk_pbr->setGeometry(QRect(10, 288, 441, 39));
        cmb_network = new QComboBox(frame);
        cmb_network->setObjectName(QString::fromUtf8("cmb_network"));
        cmb_network->setGeometry(QRect(240, 390, 200, 27));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 390, 225, 27));
        chk_ssh = new QCheckBox(frame);
        chk_ssh->setObjectName(QString::fromUtf8("chk_ssh"));
        chk_ssh->setGeometry(QRect(10, 415, 441, 39));
        chk_sshfs = new QCheckBox(frame);
        chk_sshfs->setObjectName(QString::fromUtf8("chk_sshfs"));
        chk_sshfs->setGeometry(QRect(10, 440, 441, 39));
        chk_prg = new QCheckBox(frame);
        chk_prg->setObjectName(QString::fromUtf8("chk_prg"));
        chk_prg->setGeometry(QRect(10, 465, 441, 39));
        chk_hidden = new QCheckBox(frame);
        chk_hidden->setObjectName(QString::fromUtf8("chk_hidden"));
        chk_hidden->setGeometry(QRect(10, 368310, 401, 22));
        cmb_zstd = new QComboBox(frame);
        cmb_zstd->setObjectName(QString::fromUtf8("cmb_zstd"));
        cmb_zstd->setGeometry(QRect(370, 110, 71, 27));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 108, 321, 30));
        cmd_zstd = new QPushButton(frame);
        cmd_zstd->setObjectName(QString::fromUtf8("cmd_zstd"));
        cmd_zstd->setGeometry(QRect(150, 570, 20, 20));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(15, 496, 351, 41));
        label_6->setWordWrap(true);
        cmb_sleep = new QComboBox(frame);
        cmb_sleep->setObjectName(QString::fromUtf8("cmb_sleep"));
        cmb_sleep->setGeometry(QRect(384, 500, 51, 27));
        cmd_zstd->raise();
        label->raise();
        cmb_Kerne->raise();
        label_2->raise();
        cmb_zip->raise();
        label_3->raise();
        cmb_language->raise();
        chk_file->raise();
        chk_tip->raise();
        chk_folder->raise();
        chk_key->raise();
        chk_split->raise();
        chk_password->raise();
        chk_datesave->raise();
        cmd_save->raise();
        cmd_cancel->raise();
        chk_pbr->raise();
        cmb_network->raise();
        label_4->raise();
        chk_ssh->raise();
        chk_sshfs->raise();
        chk_prg->raise();
        chk_hidden->raise();
        cmb_zstd->raise();
        label_5->raise();
        label_6->raise();
        cmb_sleep->raise();
        QWidget::setTabOrder(cmb_Kerne, cmb_zip);
        QWidget::setTabOrder(cmb_zip, cmb_language);
        QWidget::setTabOrder(cmb_language, chk_file);
        QWidget::setTabOrder(chk_file, chk_tip);
        QWidget::setTabOrder(chk_tip, chk_key);
        QWidget::setTabOrder(chk_key, chk_folder);
        QWidget::setTabOrder(chk_folder, chk_split);
        QWidget::setTabOrder(chk_split, chk_password);
        QWidget::setTabOrder(chk_password, chk_datesave);
        QWidget::setTabOrder(chk_datesave, cmd_save);
        QWidget::setTabOrder(cmd_save, cmd_cancel);

        retranslateUi(setting_dialog);
        QObject::connect(cmb_zip, SIGNAL(activated(QString)), cmd_zstd, SLOT(click()));

        QMetaObject::connectSlotsByName(setting_dialog);
    } // setupUi

    void retranslateUi(QDialog *setting_dialog)
    {
        setting_dialog->setWindowTitle(QApplication::translate("setting_dialog", "Basic settings", nullptr));
        label->setText(QApplication::translate("setting_dialog", "Number of processors\n"
"cores, for fsarchiver\n"
"should be used:", nullptr));
        label_2->setText(QApplication::translate("setting_dialog", "Standard\n"
"compression:", nullptr));
        label_3->setText(QApplication::translate("setting_dialog", "Language:", nullptr));
        chk_file->setText(QApplication::translate("setting_dialog", "Overwrite existing files by default", nullptr));
        chk_tip->setText(QApplication::translate("setting_dialog", "Activate notes for backup  by default", nullptr));
        chk_folder->setText(QApplication::translate("setting_dialog", "Directories write back\n"
"to the original location by default", nullptr));
        chk_key->setText(QApplication::translate("setting_dialog", "Enable encryption by default", nullptr));
        chk_split->setText(QApplication::translate("setting_dialog", "Archive file size divided on DVD", nullptr));
        chk_password->setText(QApplication::translate("setting_dialog", "Show passwords", nullptr));
        chk_datesave->setText(QApplication::translate("setting_dialog", "Save network input data", nullptr));
        cmd_save->setText(QApplication::translate("setting_dialog", "Save Settings", nullptr));
        cmd_cancel->setText(QApplication::translate("setting_dialog", "Exit", nullptr));
        chk_pbr->setText(QApplication::translate("setting_dialog", "Safe PBR by default", nullptr));
        label_4->setText(QApplication::translate("setting_dialog", "Network protocol:", nullptr));
        chk_ssh->setText(QApplication::translate("setting_dialog", "Display note for access to network computers", nullptr));
        chk_sshfs->setText(QApplication::translate("setting_dialog", "Displaying a note about mounting the network computer", nullptr));
        chk_prg->setText(QApplication::translate("setting_dialog", "Display notes on how to use the program qt-fsarchiver", nullptr));
        chk_hidden->setText(QApplication::translate("setting_dialog", "Show hidden directories and files", nullptr));
        label_5->setText(QApplication::translate("setting_dialog", "zstd level   1: very fast   22:highest compression", nullptr));
        cmd_zstd->setText(QApplication::translate("setting_dialog", "z", nullptr));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("setting_dialog", "If the program does not work correctly, you can \n"
"slow down the evaluation time. As standard, the \n"
"evaluation time set with factor 5 * 10 msec\n"
"You can set the factor between 1 and 20.", nullptr));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("setting_dialog", "Selection of the evaluation time \n"
"from the terminal program. ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setting_dialog: public Ui_setting_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
