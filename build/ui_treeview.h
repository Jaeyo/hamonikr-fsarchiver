/********************************************************************************
** Form generated from reading UI file 'treeview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEVIEW_H
#define UI_TREEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_treeview_dialog
{
public:
    QFrame *frame;
    QPushButton *cmd_cancel;
    QPushButton *cmd_save;
    QTreeView *treeView;
    QLabel *label;
    QPushButton *pushButton_treeview;
    QPushButton *pushButton_treeview_2;

    void setupUi(QDialog *treeview_dialog)
    {
        if (treeview_dialog->objectName().isEmpty())
            treeview_dialog->setObjectName(QString::fromUtf8("treeview_dialog"));
        treeview_dialog->resize(473, 415);
        frame = new QFrame(treeview_dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 451, 391));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        cmd_cancel = new QPushButton(frame);
        cmd_cancel->setObjectName(QString::fromUtf8("cmd_cancel"));
        cmd_cancel->setGeometry(QRect(10, 350, 423, 27));
        cmd_cancel->setAutoDefault(false);
        cmd_cancel->setFlat(false);
        cmd_save = new QPushButton(frame);
        cmd_save->setObjectName(QString::fromUtf8("cmd_save"));
        cmd_save->setGeometry(QRect(10, 315, 423, 27));
        cmd_save->setAutoDefault(false);
        treeView = new QTreeView(frame);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 40, 421, 261));
        treeView->header()->setDefaultSectionSize(400);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 411, 17));
        pushButton_treeview = new QPushButton(frame);
        pushButton_treeview->setObjectName(QString::fromUtf8("pushButton_treeview"));
        pushButton_treeview->setGeometry(QRect(50, 320, 31, 16));
        pushButton_treeview_2 = new QPushButton(frame);
        pushButton_treeview_2->setObjectName(QString::fromUtf8("pushButton_treeview_2"));
        pushButton_treeview_2->setGeometry(QRect(340, 320, 31, 16));
        pushButton_treeview_2->raise();
        cmd_cancel->raise();
        treeView->raise();
        label->raise();
        pushButton_treeview->raise();
        cmd_save->raise();
        QWidget::setTabOrder(cmd_cancel, cmd_save);

        retranslateUi(treeview_dialog);
        QObject::connect(treeView, SIGNAL(clicked(QModelIndex)), pushButton_treeview, SLOT(click()));
        QObject::connect(treeView, SIGNAL(activated(QModelIndex)), pushButton_treeview_2, SLOT(click()));

        cmd_save->setDefault(true);


        QMetaObject::connectSlotsByName(treeview_dialog);
    } // setupUi

    void retranslateUi(QDialog *treeview_dialog)
    {
        treeview_dialog->setWindowTitle(QApplication::translate("treeview_dialog", "Select restore file", nullptr));
        cmd_cancel->setText(QApplication::translate("treeview_dialog", "Cancel", nullptr));
        cmd_save->setText(QApplication::translate("treeview_dialog", "Next", nullptr));
        label->setText(QApplication::translate("treeview_dialog", "Existing restore files:", nullptr));
        pushButton_treeview->setText(QApplication::translate("treeview_dialog", "a", nullptr));
        pushButton_treeview_2->setText(QApplication::translate("treeview_dialog", "a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class treeview_dialog: public Ui_treeview_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEVIEW_H
