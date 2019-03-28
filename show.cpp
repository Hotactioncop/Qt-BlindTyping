#include "show.h"

Show::Show(QWidget *parent) : QWidget(parent)
{

}

void Show::getword(QString other)
{
    gameOn = true;
    showWord = other;
    symbPr=0;
    mark = false;
    repaint();
}

void Show::getbool(bool clear)
{
    if(mark){

        mark = false;
        repaint();
        return;
    }
    else {
        if(clear){
            symbPr++;
        }
        else {
            mark=true;
        }
        repaint();
    }
}


void Show::paintEvent(QPaintEvent *event)
{
    if(gameOn){
        QPainter spen(this);
        spen.setPen(QPen(Qt::gray));
        spen.setFont(QFont("Times", 48,QFont::Bold));
        QString correctStr;
        QString wrongStr;
        QString leftStr;

        if(symbPr){
            spen.setPen(QPen(Qt::black));
            correctStr = showWord.mid(0,symbPr);
            spen.drawText((this->width()-showWord.size()*48)/2,50,correctStr);
        }
        if(mark){
            spen.setPen(QPen(Qt::red));
            wrongStr = showWord.mid(symbPr,1);
            spen.drawText((this->width()-showWord.size()*48)/2+correctStr.size()*41,50,wrongStr);
            spen.setPen(QPen(Qt::gray));
            leftStr = showWord.mid(symbPr+1);
            spen.drawText((this->width()-showWord.size()*48)/2+correctStr.size()*41+40,50,leftStr);
        }
        else{
            spen.setPen(QPen(Qt::gray));
            leftStr = showWord.mid(symbPr);
            spen.drawText((this->width()-showWord.size()*48)/2+correctStr.size()*41,50,leftStr);
        }
    }
}
