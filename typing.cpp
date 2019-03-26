#include "typing.h"
#include "ui_typing.h"

Typing::Typing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Typing)
{
    ui->setupUi(this);
    setFixedSize(1060,650);
    setMaximumSize(1280,768);
    QTime midnight(0,0,0);
    qsrand(midnight.secsTo(QTime::currentTime()));
}

Typing::~Typing()
{
    delete ui;
}
