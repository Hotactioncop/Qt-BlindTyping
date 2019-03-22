#include "typing.h"
#include "ui_typing.h"

Typing::Typing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Typing)
{
    ui->setupUi(this);
    setFixedSize(1050,520);
    setMaximumSize(1280,768);
}

Typing::~Typing()
{
    delete ui;
}
