#include "keyboard.h"

Keyboard::Keyboard(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1280,900);
    pix = QPixmap(":/Images/Image/OnlyRussian.png").scaled(1024,254,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes.resize(3);
    for(auto&X:pixes){
        X.resize(33);
    }
    pixes[0][0] = QPixmap(":/Images/Image/Q.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][1] = QPixmap(":/Images/Image/W.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][2] = QPixmap(":/Images/Image/E.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][3] = QPixmap(":/Images/Image/R.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][4] = QPixmap(":/Images/Image/T.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][5] = QPixmap(":/Images/Image/Y.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][6] = QPixmap(":/Images/Image/U.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][7] = QPixmap(":/Images/Image/I.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][8] = QPixmap(":/Images/Image/O.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][9] = QPixmap(":/Images/Image/P.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][10] = QPixmap(":/Images/Image/{.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][11] = QPixmap(":/Images/Image/}.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][0] = QPixmap(":/Images/Image/Qtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][1] = QPixmap(":/Images/Image/Wtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][2] = QPixmap(":/Images/Image/Etrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][3] = QPixmap(":/Images/Image/Rtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][4] = QPixmap(":/Images/Image/Ttrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][5] = QPixmap(":/Images/Image/Ytrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][6] = QPixmap(":/Images/Image/Utrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][7] = QPixmap(":/Images/Image/Itrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][8] = QPixmap(":/Images/Image/Otrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][9] = QPixmap(":/Images/Image/Ptrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][10] = QPixmap(":/Images/Image/{true.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][11] = QPixmap(":/Images/Image/}true.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][0] = QPixmap(":/Images/Image/Qfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][1] = QPixmap(":/Images/Image/Wfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][2] = QPixmap(":/Images/Image/Efalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][3] = QPixmap(":/Images/Image/Rfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][4] = QPixmap(":/Images/Image/Tfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][5] = QPixmap(":/Images/Image/Yfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][6] = QPixmap(":/Images/Image/Ufalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][7] = QPixmap(":/Images/Image/Ifalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][8] = QPixmap(":/Images/Image/Ofalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][9] = QPixmap(":/Images/Image/Pfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][10] = QPixmap(":/Images/Image/{false.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][11] = QPixmap(":/Images/Image/}false.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);

}


void Keyboard::paintEvent(QPaintEvent *event)
{
    qDebug() << "paintEvent";
    QPainter pens(this);
    int i=0;
    for(int j = 0; j<12; j++){
        if (j==buttPos){
            qDebug() << "j==buttPos";
            if(hit){
                pens.drawPixmap(i,5,pixes[1][j]);
            }
            else {
                pens.drawPixmap(i,5,pixes[2][j]);
            }
        }
        else {
            pens.drawPixmap(i,5,pixes[0][j]);
        }
        i+=86;
    }
//    pens.drawPixmap(0,0,pix);
//    pens.setBrush(Qt::darkBlue);
    checkWord = "йцуенг";
    emit sendWord(checkWord);
    this->setFocus();
}


void Keyboard::keyPressEvent(QKeyEvent *event)
{
    if(hit){
        qDebug() << "keyPressEvent";
        if (event->modifiers()==Qt::ShiftModifier ){
            if (event->key()==Qt::Key_Q){
                myWord+="Й";
                buttPos = 0;
            }
            else if (event->key()==Qt::Key_W){
                myWord+="Ц";
                buttPos = 1;
            }
            else if (event->key()==Qt::Key_E){
                myWord+="У";
                buttPos = 2;
            }
            else if (event->key()==Qt::Key_R){
                myWord+="К";
                buttPos = 3;
            }
            else if (event->key()==Qt::Key_T){
                myWord+="Е";
                buttPos = 4;
            }
            else if (event->key()==Qt::Key_Y){
                myWord+="Н";
                buttPos = 5;
            }
            else if (event->key()==Qt::Key_U){
                myWord+="Г";
                buttPos = 6;
            }
            else if (event->key()==Qt::Key_I){
                myWord+="Ш";
                buttPos = 7;
            }
            else if (event->key()==Qt::Key_O){
                myWord+="Щ";
                buttPos = 8;
            }
            else if (event->key()==Qt::Key_P){
                myWord+="З";
                buttPos = 9;
            }
            else if (event->key()==Qt::Key_BraceLeft){
                myWord+="Х";
                buttPos = 10;
            }
            else if (event->key()==Qt::Key_BraceRight){
                myWord+="Ъ";
                buttPos = 11;
            }
            else if (event->key()==Qt::Key_A){
                myWord+="Ф";
                buttPos = 12;
            }
            else if (event->key()==Qt::Key_S){
                myWord+="Ы";
                buttPos = 13;
            }
            else if (event->key()==Qt::Key_D){
                myWord+="В";
                buttPos = 14;
            }
            else if (event->key()==Qt::Key_F){
                myWord+="А";
                buttPos = 15;
            }
            else if (event->key()==Qt::Key_G){
                myWord+="П";
                buttPos = 16;
            }
            else if (event->key()==Qt::Key_H){
                myWord+="Р";
                buttPos = 17;
            }
            else if (event->key()==Qt::Key_J){
                myWord+="О";
                buttPos = 18;
            }
            else if (event->key()==Qt::Key_K){
                myWord+="Л";
                buttPos = 19;
            }
            else if (event->key()==Qt::Key_L){
                myWord+="Д";
                buttPos = 20;
            }
            else if (event->key()==Qt::Key_Colon){
                myWord+="Ж";
                buttPos = 21;
            }
            else if (event->key()==Qt::Key_QuoteDbl){
                myWord+="Э";
                buttPos = 22;
            }
            else if (event->key()==Qt::Key_Z){
                myWord+="Я";
                buttPos = 23;
            }
            else if (event->key()==Qt::Key_X){
                myWord+="Ч";
                buttPos = 24;
            }
            else if (event->key()==Qt::Key_C){
                myWord+="С";
                buttPos = 25;
            }
            else if (event->key()==Qt::Key_V){
                myWord+="М";
                buttPos = 26;
            }
            else if (event->key()==Qt::Key_B){
                myWord+="И";
                buttPos = 27;
            }
            else if (event->key()==Qt::Key_N){
                myWord+="Т";
                buttPos = 28;
            }
            else if (event->key()==Qt::Key_M){
                myWord+="Ь";
                buttPos = 29;
            }
            else if (event->key()==Qt::Key_Less){
                myWord+="Б";
                buttPos = 30;
            }
            else if (event->key()==Qt::Key_Greater){
                myWord+="Ю";
                buttPos = 31;
            }
            else if (event->key()==Qt::Key_Question){
                myWord+=",";
                buttPos = 32;
            }
        }
        else {
            if (event->key()==Qt::Key_Q){
                myWord+="й";
                buttPos = 0;
            }
            else if (event->key()==Qt::Key_W){
                myWord+="ц";
                buttPos = 1;
            }
            else if (event->key()==Qt::Key_E){
                myWord+="у";
                buttPos = 2;
            }
            else if (event->key()==Qt::Key_R){
                myWord+="к";
                buttPos = 3;
            }
            else if (event->key()==Qt::Key_T){
                myWord+="е";
                buttPos = 4;
            }
            else if (event->key()==Qt::Key_Y){
                myWord+="н";
                buttPos = 5;
            }
            else if (event->key()==Qt::Key_U){
                myWord+="г";
                buttPos = 6;
            }
            else if (event->key()==Qt::Key_I){
                myWord+="ш";
                buttPos = 7;
            }
            else if (event->key()==Qt::Key_O){
                myWord+="щ";
                buttPos = 8;
            }
            else if (event->key()==Qt::Key_P){
                myWord+="з";
                buttPos = 9;
            }
            else if (event->key()==Qt::Key_BracketLeft){
                myWord+="х";
                buttPos = 10;
            }
            else if (event->key()==Qt::Key_BracketRight){
                myWord+="ъ";
                buttPos = 11;
            }
            else if (event->key()==Qt::Key_A){
                myWord+="ф";
                buttPos = 12;
            }
            else if (event->key()==Qt::Key_S){
                myWord+="ы";
                buttPos = 13;
            }
            else if (event->key()==Qt::Key_D){
                myWord+="в";
                buttPos = 14;
            }
            else if (event->key()==Qt::Key_F){
                myWord+="а";
                buttPos = 15;
            }
            else if (event->key()==Qt::Key_G){
                myWord+="п";
                buttPos = 16;
            }
            else if (event->key()==Qt::Key_H){
                myWord+="р";
                buttPos = 17;
            }
            else if (event->key()==Qt::Key_J){
                myWord+="о";
                buttPos = 18;
            }
            else if (event->key()==Qt::Key_K){
                myWord+="л";
                buttPos = 19;
            }
            else if (event->key()==Qt::Key_L){
                myWord+="д";
                buttPos = 20;
            }
            else if (event->key()==Qt::Key_Semicolon){
                myWord+="ж";
                buttPos = 21;
            }
            else if (event->key()==Qt::Key_Apostrophe){
                myWord+="э";
                buttPos = 22;
            }
            else if (event->key()==Qt::Key_Z){
                myWord+="я";
                buttPos = 23;
            }
            else if (event->key()==Qt::Key_X){
                myWord+="ч";
                buttPos = 24;
            }
            else if (event->key()==Qt::Key_C){
                myWord+="с";
                buttPos = 25;
            }
            else if (event->key()==Qt::Key_V){
                myWord+="м";
                buttPos = 26;
            }
            else if (event->key()==Qt::Key_B){
                myWord+="и";
                buttPos = 27;
            }
            else if (event->key()==Qt::Key_N){
                myWord+="т";
                buttPos = 28;
            }
            else if (event->key()==Qt::Key_M){
                myWord+="ь";
                buttPos = 29;
            }
            else if (event->key()==Qt::Key_Comma){
                myWord+="б";
                buttPos = 30;
            }
            else if (event->key()==Qt::Key_Period){
                myWord+="ю";
                buttPos = 31;
            }
            else if (event->key()==Qt::Key_Slash){
                myWord+=".";
                buttPos = 32;
            }
        }
        if (event->key()==Qt::Key_Space){
            myWord+=" ";
            emit printWord(myWord);
        }
        if (event->key()==Qt::Key_Backspace){
            qDebug() << "True Key_Backspace";
            if(myWord.size()!=0){
                myWord.remove(myWord.size()-1,1);
                emit printWord(myWord);
            }
        }
        if(myWord.size()<=checkWord.size() && myWord.size()!=0){
            qDebug() <<myWord.at(myWord.size()-1) << " " << checkWord.at(myWord.size()-1);
            if(myWord.at(myWord.size()-1)==checkWord.at(myWord.size()-1)){
                qDebug() <<"Ошибка тут";
                hit = true;
                emit printWord(myWord);
                repaint();
            }
            else {
                hit = false;
                qDebug() <<"false";
                emit printWord(myWord);
                repaint();
            }
        }
    }
    else {
        if (event->key()==Qt::Key_Backspace){
            qDebug() << "False Key_Backspace";
            if(myWord.size()!=0){
                myWord.remove(myWord.size()-1,1);
                emit printWord(myWord);
                buttPos = 100;
                hit = true;
                repaint();
            }
        }
    }
}


void Keyboard::keyReleaseEvent(QKeyEvent *event)
{
    if(hit == true){
        qDebug() <<"Почему release";

        buttPos = 100;
        repaint();
    }
}
