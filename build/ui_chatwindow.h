/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionCloseTab;
    QWidget *widget_2;
    QWidget *splitter;
    QTabWidget *tab;
    QWidget *widget_4;
    QWidget *tab_5;
    QLineEdit *lineEdit;
    QListView *userView;
    QPushButton *disconnect;
    QWidget *hide3;
    QWidget *layoutWidget;
    QHBoxLayout *hide1;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *hide2;
    QLabel *label_2;
    QLineEdit *editPseudo;
    QLabel *label_5;
    QPushButton *buttonConnect;

    void setupUi(QWidget *ChatWindowClass)
    {
        if (ChatWindowClass->objectName().isEmpty())
            ChatWindowClass->setObjectName(QString::fromUtf8("ChatWindowClass"));
        ChatWindowClass->resize(747, 497);
        actionQuit = new QAction(ChatWindowClass);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionCloseTab = new QAction(ChatWindowClass);
        actionCloseTab->setObjectName(QString::fromUtf8("actionCloseTab"));
        widget_2 = new QWidget(ChatWindowClass);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 741, 501));
        splitter = new QWidget(widget_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setEnabled(true);
        splitter->setGeometry(QRect(10, 10, 721, 491));
        splitter->setStyleSheet(QString::fromUtf8(""));
        tab = new QTabWidget(splitter);
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setEnabled(true);
        tab->setGeometry(QRect(10, 0, 541, 431));
        tab->setStyleSheet(QString::fromUtf8(""));
        tab->setTabShape(QTabWidget::Rounded);
        tab->setTabsClosable(false);
        widget_4 = new QWidget();
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        tab->addTab(widget_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tab->addTab(tab_5, QString());
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 450, 701, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(16777215, 30));
        userView = new QListView(splitter);
        userView->setObjectName(QString::fromUtf8("userView"));
        userView->setGeometry(QRect(560, 20, 161, 391));
        userView->setMinimumSize(QSize(0, 300));
        userView->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        disconnect = new QPushButton(splitter);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));
        disconnect->setGeometry(QRect(642, 420, 71, 28));
        hide3 = new QWidget(widget_2);
        hide3->setObjectName(QString::fromUtf8("hide3"));
        hide3->setGeometry(QRect(10, 10, 731, 441));
        layoutWidget = new QWidget(hide3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 250, 27));
        hide1 = new QHBoxLayout(layoutWidget);
        hide1->setSpacing(7);
        hide1->setContentsMargins(11, 11, 11, 11);
        hide1->setObjectName(QString::fromUtf8("hide1"));
        hide1->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans,sans-serif"));
        label_9->setFont(font);

        hide1->addWidget(label_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hide1->addItem(horizontalSpacer_4);

        hide2 = new QLabel(hide3);
        hide2->setObjectName(QString::fromUtf8("hide2"));
        hide2->setGeometry(QRect(10, 70, 681, 81));
        hide2->setWordWrap(true);
        hide2->setOpenExternalLinks(true);
        label_2 = new QLabel(hide3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 160, 291, 211));
        editPseudo = new QLineEdit(hide3);
        editPseudo->setObjectName(QString::fromUtf8("editPseudo"));
        editPseudo->setGeometry(QRect(120, 160, 151, 22));
        label_5 = new QLabel(hide3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 160, 61, 21));
        buttonConnect = new QPushButton(hide3);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));
        buttonConnect->setGeometry(QRect(210, 360, 151, 41));
        buttonConnect->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(ChatWindowClass);

        tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ChatWindowClass);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowClass)
    {
        actionQuit->setText(QApplication::translate("ChatWindowClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("ChatWindowClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionCloseTab->setText(QApplication::translate("ChatWindowClass", "Fermer l'onglet", 0, QApplication::UnicodeUTF8));
        tab->setTabText(tab->indexOf(widget_4), QApplication::translate("ChatWindowClass", "Tab 1", 0, QApplication::UnicodeUTF8));
        tab->setTabText(tab->indexOf(tab_5), QApplication::translate("ChatWindowClass", "Tab 2", 0, QApplication::UnicodeUTF8));
        disconnect->setText(QApplication::translate("ChatWindowClass", "Logout", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600; color:#000000;\">Social</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        hide2->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"justify\">Connect with our community by checking out our <a href=\"https://bitcointalk.org/index.php?topic=713546.0\"><span style=\" text-decoration: underline; color:#0000ff;\">Bitcointalk thread.</a> We are also present on IRC.</p><p align=\"justify\">You may connect to the IRC channel directly from your wallet by inputing a username beneath.</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p>A few IRC commands :</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/JOIN #channel <span style=\" color:#9a9a9a;\">Join a channel</span></li><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/NICK nickname <span style=\" color:#9a9a9a;\">Change nickname</span></li><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/PRIVMSG nickname message <span style=\" color:#9a9a9a;\">Send PM </span></li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If userlist gets buggy, switch tabs to fix</li></ul></body></html>", 0, QApplication::UnicodeUTF8));
        editPseudo->setText(QString());
        label_5->setText(QApplication::translate("ChatWindowClass", "Nickname :", 0, QApplication::UnicodeUTF8));
        buttonConnect->setText(QApplication::translate("ChatWindowClass", "Connect to IRC", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowClass: public Ui_ChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
