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

void Show::getcorrect(uint correct)
{
    symbPr = correct;
    repaint();
}

void Show::getbool(bool clear)
{
    mark = clear;
    repaint();
}

void Show::paintEvent(QPaintEvent *event)
{
    QPainter spen(this);
    if(gameOn){
        spen.setFont(QFont("Times", charSize,QFont::Bold));
        QString str;
        int startPosition = (this->width()-showWord.size()*charSize)/2;
        spen.setPen(QPen(Qt::gray));
        spen.drawText(startPosition,50,showWord);
        if(mark){
            spen.setPen(QPen(Qt::red));
            str = showWord.mid(0,symbPr+1);
            spen.drawText(startPosition,50,str);
            QString str2{"Нажмите Backspace"};
            spen.setFont(QFont("Times", 20,QFont::Bold));
            spen.setPen(QPen(Qt::gray));
            spen.drawText((this->width()-str2.size()*20)/2,100,str2);
        }
        if(symbPr){
            spen.setFont(QFont("Times", charSize,QFont::Bold));
            spen.setPen(QPen(Qt::black));
            str = showWord.mid(0,symbPr);
            spen.drawText(startPosition,50,str);
        }
    }
    else {
        spen.setFont(QFont("Times", 20,QFont::Bold));
        spen.setPen(QPen(Qt::gray));
        spen.drawText((this->width()-25*20)/2,50,"Здесь будет выведено слово");
    }
}
