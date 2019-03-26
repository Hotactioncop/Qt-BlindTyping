#include "typing.h"
#include <QApplication>
#include <QtGui>
#include <QTextCodec>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Typing w;
    w.show();

    return a.exec();
}
