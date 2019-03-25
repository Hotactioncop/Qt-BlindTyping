#include "typing.h"
#include "ui_typing.h"

Typing::Typing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Typing)
{
    ui->setupUi(this);
    setFixedSize(1060,650);
    setMaximumSize(1280,768);
}

Typing::~Typing()
{
    delete ui;
}
