#include "typing.h"
#include "ui_typing.h"
Typing::Typing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Typing)
{
    ui->setupUi(this);
    QTime midnight(0,0,0);
    qsrand(midnight.secsTo(QTime::currentTime()));
    ui->progressBar->setStyleSheet("QProgressBar{border: 1px solid transparent;text-align: center;"
                                       "color:rgba(255,255,250,255);"
                                       "border-radius: 5px;"
                                       "border-width: 3px;"
                                       "border-image: 9,2,5,2; "
                                       "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(200, 200, 200, 200), stop:1 rgba(0, 0, 0, 200));"
                                        "}"
                                       "QProgressBar::chunk {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(255,200,0,255), stop: 1 rgba(255,0,0,255));}");
    ui->startButton->setStyleSheet("QPushButton{border: 2px solid #8f8f91;"
                                       "border-radius: 6px;"
                                       "background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);"
                                       "min-width: 80px;"
                                       "}"
                                       "QPushButton::pressed{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"
                                       "QPushButton::default{border-color: navy;}"
                                       "QPushButton::flat{border: none;}"
                                       "QPushButton::hover:!pressed{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #aadbde, stop: 1 #a6f7fa);}"
                                   );
    ui->NextButton->setStyleSheet("QPushButton{border: 2px solid #8f8f91;"
                                       "border-radius: 6px;"
                                       "background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);"
                                       "min-width: 80px;"
                                       "}"
                                       "QPushButton::pressed{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"
                                       "QPushButton::default{border-color: navy;}"
                                       "QPushButton::flat{border: none;}"
                                       "QPushButton::hover:!pressed{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #aadbde, stop: 1 #a6f7fa);}"
                                   );
    ui->ExitButton->setStyleSheet("QPushButton{border: 2px solid #8f8f91;"
                                       "border-radius: 6px;"
                                       "background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);"
                                       "min-width: 80px;"
                                       "}"
                                       "QPushButton::pressed{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"
                                       "QPushButton::default{border-color: navy;}"
                                       "QPushButton::flat{border: none;}"
                                       "QPushButton::hover:!pressed{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #aadbde, stop: 1 #a6f7fa);}"
                                   );
    ui->MusicButton->setStyleSheet("QPushButton{border: 2px solid #8f8f91;"
                                       "border-radius: 6px;"
                                       "background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);"
                                       "min-width: 80px;"
                                       "}"
                                       "QPushButton::pressed{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"
                                       "QPushButton::default{border-color: navy;}"
                                       "QPushButton::flat{border: none;}"
                                   );

    ui->lcdNumber->setStyleSheet("QLCDNumber{border: 2px solid #8f8f91;"
                                       "border-radius: 6px;"
                                       "background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);"
                                       "min-width: 80px;"
                                       "}"
                                   );
}

Typing::~Typing()
{
    delete ui;
}

void Typing::changeMusicIcon(bool sound)
{
    QIcon icon;
    if(sound){
        icon.addFile(QString::fromUtf8(":/Images/Image/buttonOn.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ui->MusicButton->setIcon(icon);
    }
    else {
        icon.addFile(QString::fromUtf8(":/Images/Image/buttonOff.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ui->MusicButton->setIcon(icon);
    }
}
