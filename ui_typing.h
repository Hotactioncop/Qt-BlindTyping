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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "keyboard.h"
#include "show.h"

QT_BEGIN_NAMESPACE

class Ui_Typing
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    Show *ShowWidget;
    Keyboard *KeyboardWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *startButton;
    QPushButton *NextButton;
    QPushButton *ExitButton;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer_2;
    QPushButton *MusicButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Typing)
    {
        if (Typing->objectName().isEmpty())
            Typing->setObjectName(QString::fromUtf8("Typing"));
        Typing->resize(1248, 654);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Typing->sizePolicy().hasHeightForWidth());
        Typing->setSizePolicy(sizePolicy);
        Typing->setMaximumSize(QSize(16777215, 890));
        Typing->setBaseSize(QSize(768, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/keyboard.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Typing->setWindowIcon(icon);
        Typing->setLayoutDirection(Qt::LeftToRight);
        centralWidget = new QWidget(Typing);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        ShowWidget = new Show(centralWidget);
        ShowWidget->setObjectName(QString::fromUtf8("ShowWidget"));
        ShowWidget->setMinimumSize(QSize(0, 150));

        verticalLayout->addWidget(ShowWidget);

        KeyboardWidget = new Keyboard(centralWidget);
        KeyboardWidget->setObjectName(QString::fromUtf8("KeyboardWidget"));
        sizePolicy.setHeightForWidth(KeyboardWidget->sizePolicy().hasHeightForWidth());
        KeyboardWidget->setSizePolicy(sizePolicy);
        KeyboardWidget->setMinimumSize(QSize(1060, 400));
        KeyboardWidget->setMaximumSize(QSize(16777215, 16777215));
        KeyboardWidget->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(KeyboardWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setMinimumSize(QSize(160, 30));
        startButton->setMaximumSize(QSize(160, 30));

        verticalLayout_2->addWidget(startButton);

        NextButton = new QPushButton(centralWidget);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));
        NextButton->setMinimumSize(QSize(160, 30));
        NextButton->setMaximumSize(QSize(160, 30));

        verticalLayout_2->addWidget(NextButton);

        ExitButton = new QPushButton(centralWidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setMinimumSize(QSize(160, 30));
        ExitButton->setMaximumSize(QSize(160, 30));

        verticalLayout_2->addWidget(ExitButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(160, 20));
        label->setMaximumSize(QSize(160, 20));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(160, 30));
        lcdNumber->setMaximumSize(QSize(160, 30));

        verticalLayout_2->addWidget(lcdNumber);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        MusicButton = new QPushButton(centralWidget);
        MusicButton->setObjectName(QString::fromUtf8("MusicButton"));
        MusicButton->setMinimumSize(QSize(100, 30));
        MusicButton->setMaximumSize(QSize(100, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Image/buttonOff.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MusicButton->setIcon(icon1);

        verticalLayout_2->addWidget(MusicButton);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        Typing->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Typing);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1248, 21));
        Typing->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Typing);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Typing->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Typing);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Typing->setStatusBar(statusBar);

        retranslateUi(Typing);
        QObject::connect(startButton, SIGNAL(clicked()), KeyboardWidget, SLOT(startGame()));
        QObject::connect(KeyboardWidget, SIGNAL(sendWord(QString)), ShowWidget, SLOT(getword(QString)));
        QObject::connect(KeyboardWidget, SIGNAL(sendSignal(bool)), ShowWidget, SLOT(getbool(bool)));
        QObject::connect(KeyboardWidget, SIGNAL(correctChar(uint)), ShowWidget, SLOT(getcorrect(uint)));
        QObject::connect(ExitButton, SIGNAL(clicked()), Typing, SLOT(close()));
        QObject::connect(NextButton, SIGNAL(clicked()), KeyboardWidget, SLOT(nextLevel()));
        QObject::connect(KeyboardWidget, SIGNAL(sendProgress(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(KeyboardWidget, SIGNAL(sendScore(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(MusicButton, SIGNAL(clicked()), KeyboardWidget, SLOT(playMusic()));
        QObject::connect(KeyboardWidget, SIGNAL(changeMusic(bool)), Typing, SLOT(changeMusicIcon(bool)));

        QMetaObject::connectSlotsByName(Typing);
    } // setupUi

    void retranslateUi(QMainWindow *Typing)
    {
        Typing->setWindowTitle(QApplication::translate("Typing", "\320\241\320\273\320\265\320\277\320\260\321\217 \320\277\320\265\321\207\320\260\321\202\321\214", nullptr));
        startButton->setText(QApplication::translate("Typing", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        NextButton->setText(QApplication::translate("Typing", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\260\321\217 \320\261\321\203\320\272\320\262\320\260", nullptr));
        ExitButton->setText(QApplication::translate("Typing", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label->setText(QApplication::translate("Typing", "\320\221\320\260\320\273\320\273\321\213", nullptr));
        MusicButton->setText(QApplication::translate("Typing", "\320\234\321\203\320\267\321\213\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Typing: public Ui_Typing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPING_H
