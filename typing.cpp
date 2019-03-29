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

}

Typing::~Typing()
{
    delete ui;
}
