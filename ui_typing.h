/********************************************************************************
** Form generated from reading UI file 'typing.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPING_H
#define UI_TYPING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "keyboard.h"

QT_BEGIN_NAMESPACE

class Ui_Typing
{
public:
    QAction *action;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *Wordlabel;
    QHBoxLayout *KeyboardLayout;
    Keyboard *KeyboardWidget;
    QHBoxLayout *TypingLayout;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Typing)
    {
        if (Typing->objectName().isEmpty())
            Typing->setObjectName(QString::fromUtf8("Typing"));
        Typing->resize(768, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Typing->sizePolicy().hasHeightForWidth());
        Typing->setSizePolicy(sizePolicy);
        Typing->setMaximumSize(QSize(768, 600));
        Typing->setBaseSize(QSize(768, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/keyboard.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Typing->setWindowIcon(icon);
        action = new QAction(Typing);
        action->setObjectName(QString::fromUtf8("action"));
        centralWidget = new QWidget(Typing);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Wordlabel = new QLabel(centralWidget);
        Wordlabel->setObjectName(QString::fromUtf8("Wordlabel"));
        Wordlabel->setMinimumSize(QSize(0, 100));
        Wordlabel->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setPointSize(30);
        Wordlabel->setFont(font);
        Wordlabel->setFrameShape(QFrame::Box);
        Wordlabel->setFrameShadow(QFrame::Sunken);
        Wordlabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Wordlabel);

        KeyboardLayout = new QHBoxLayout();
        KeyboardLayout->setSpacing(6);
        KeyboardLayout->setObjectName(QString::fromUtf8("KeyboardLayout"));
        KeyboardLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        KeyboardWidget = new Keyboard(centralWidget);
        KeyboardWidget->setObjectName(QString::fromUtf8("KeyboardWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(KeyboardWidget->sizePolicy().hasHeightForWidth());
        KeyboardWidget->setSizePolicy(sizePolicy1);
        KeyboardWidget->setMinimumSize(QSize(0, 650));
        KeyboardWidget->setMaximumSize(QSize(16777215, 16777215));
        KeyboardWidget->setLayoutDirection(Qt::LeftToRight);

        KeyboardLayout->addWidget(KeyboardWidget);


        verticalLayout->addLayout(KeyboardLayout);

        TypingLayout = new QHBoxLayout();
        TypingLayout->setSpacing(6);
        TypingLayout->setObjectName(QString::fromUtf8("TypingLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 100));
        label->setMaximumSize(QSize(16777215, 100));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(30);
        label->setFont(font1);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label->setAlignment(Qt::AlignCenter);

        TypingLayout->addWidget(label);


        verticalLayout->addLayout(TypingLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        Typing->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Typing);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 768, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Typing->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Typing);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Typing->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Typing);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Typing->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);
        mainToolBar->addAction(action);

        retranslateUi(Typing);
        QObject::connect(KeyboardWidget, SIGNAL(sendWord(QString)), Wordlabel, SLOT(setText(QString)));
        QObject::connect(KeyboardWidget, SIGNAL(printWord(QString)), label, SLOT(setText(QString)));
        QObject::connect(action, SIGNAL(triggered()), KeyboardWidget, SLOT(startGame()));

        QMetaObject::connectSlotsByName(Typing);
    } // setupUi

    void retranslateUi(QMainWindow *Typing)
    {
        Typing->setWindowTitle(QApplication::translate("Typing", "\320\241\320\273\320\265\320\277\320\260\321\217 \320\277\320\265\321\207\320\260\321\202\321\214", nullptr));
        action->setText(QApplication::translate("Typing", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        Wordlabel->setText(QString());
        label->setText(QString());
        menu->setTitle(QApplication::translate("Typing", "\320\236\320\277\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Typing: public Ui_Typing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPING_H
