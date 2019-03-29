#include "keyboard.h"

Keyboard::Keyboard(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1280,950);
    QPixmap pix = QPixmap(":/Images/Image/OnlyRussian.png").scaled(1024,254,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes.resize(3);
    for(auto&X:pixes){              //Загружаем в вектор изображения всех кнопок клавиатуры, включая изображения верно и неверно введенных.
        X.resize(34);
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
    pixes[0][12] = QPixmap(":/Images/Image/A.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][13] = QPixmap(":/Images/Image/S.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][14] = QPixmap(":/Images/Image/D.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][15] = QPixmap(":/Images/Image/F.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][16] = QPixmap(":/Images/Image/G.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][17] = QPixmap(":/Images/Image/H.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][18] = QPixmap(":/Images/Image/J.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][19] = QPixmap(":/Images/Image/K.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][20] = QPixmap(":/Images/Image/L.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][21] = QPixmap(":/Images/Image/;.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][22] = QPixmap(":/Images/Image/'.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][23] = QPixmap(":/Images/Image/Z.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][24] = QPixmap(":/Images/Image/X.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][25] = QPixmap(":/Images/Image/C.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][26] = QPixmap(":/Images/Image/V.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][27] = QPixmap(":/Images/Image/B.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][28] = QPixmap(":/Images/Image/N.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][29] = QPixmap(":/Images/Image/M.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][30] = QPixmap(":/Images/Image/,.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][31] = QPixmap(":/Images/Image/yu.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][32] = QPixmap(":/Images/Image/DOT.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[0][33] = QPixmap(":/Images/Image/SPACE.png").scaled(538,84,Qt::KeepAspectRatio,Qt::FastTransformation);

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
    pixes[1][12] = QPixmap(":/Images/Image/Atrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][13] = QPixmap(":/Images/Image/Strue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][14] = QPixmap(":/Images/Image/Dtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][15] = QPixmap(":/Images/Image/Ftrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][16] = QPixmap(":/Images/Image/Gtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][17] = QPixmap(":/Images/Image/Htrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][18] = QPixmap(":/Images/Image/Jtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][19] = QPixmap(":/Images/Image/Ktrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][20] = QPixmap(":/Images/Image/Ltrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][21] = QPixmap(":/Images/Image/;true.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][22] = QPixmap(":/Images/Image/'true.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][23] = QPixmap(":/Images/Image/Ztrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][24] = QPixmap(":/Images/Image/Xtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][25] = QPixmap(":/Images/Image/Ctrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][26] = QPixmap(":/Images/Image/Vtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][27] = QPixmap(":/Images/Image/Btrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][28] = QPixmap(":/Images/Image/Ntrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][29] = QPixmap(":/Images/Image/Mtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][30] = QPixmap(":/Images/Image/,true.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][31] = QPixmap(":/Images/Image/YUtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][32] = QPixmap(":/Images/Image/DOTtrue.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[1][33] = QPixmap(":/Images/Image/SPACEtrue.png").scaled(538,84,Qt::KeepAspectRatio,Qt::FastTransformation);

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
    pixes[2][12] = QPixmap(":/Images/Image/Afalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][13] = QPixmap(":/Images/Image/Sfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][14] = QPixmap(":/Images/Image/Dfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][15] = QPixmap(":/Images/Image/Ffalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][16] = QPixmap(":/Images/Image/Gfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][17] = QPixmap(":/Images/Image/Hfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][18] = QPixmap(":/Images/Image/Jfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][19] = QPixmap(":/Images/Image/Kfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][20] = QPixmap(":/Images/Image/Lfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][21] = QPixmap(":/Images/Image/;false.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][22] = QPixmap(":/Images/Image/'false.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][23] = QPixmap(":/Images/Image/Zfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][24] = QPixmap(":/Images/Image/Xfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][25] = QPixmap(":/Images/Image/Cfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][26] = QPixmap(":/Images/Image/Vfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][27] = QPixmap(":/Images/Image/Bfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][28] = QPixmap(":/Images/Image/Nfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][29] = QPixmap(":/Images/Image/Mfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][30] = QPixmap(":/Images/Image/,false.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][31] = QPixmap(":/Images/Image/YUfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][32] = QPixmap(":/Images/Image/DOTfalse.png").scaled(84,84,Qt::KeepAspectRatio,Qt::FastTransformation);
    pixes[2][33] = QPixmap(":/Images/Image/SPACEfalse.png").scaled(538,84,Qt::KeepAspectRatio,Qt::FastTransformation);

    /*Имеем два вектора QChar и один вектор QString.
     * 1ый вектор QChar содержит буквы алфавита расположенные от центра к краям. Необходим для вывода клавиш на экран в данной последовательности.
     * 2ой вектор Qchar содержит буквы алфавита, отсортированные по иерархии расположения на клавиатуре. Необходим для обращения символу из первого вектора
     * для определения местоположения и вывода клавиши на экран.
     * 3ий вектор QString содержит вектор слов, отсортированных в последовательности согласно первому вектору букв.*/

    wordBase.resize(36);
    levelProgress.resize(36);
    QFile textSymbols(":/Text/Symbols.txt");
    if(textSymbols.open(QIODevice::ReadOnly |QIODevice::Text)){
        QString someString = textSymbols.readLine();            //Файл содержит 32 буквы алфавита, расположенные от центра клавиатуры к краям
        someString.remove('\n');
        for(QChar* ptr=someString.begin();ptr!=someString.end();ptr++){
            symbols.push_back(*ptr);                            //Побуквенно переносим в вектор
        }
    }
    int charQuant = 0;
    QFile textFile(":/Text/Words.txt");
    if(textFile.open(QIODevice::ReadOnly |QIODevice::Text))
        {
            while(!textFile.atEnd())
            {
                checkWord = textFile.readLine();//Читаем файл построчно QString.
                checkWord.remove('\n');         //Удаляем признак конца строки '\n'
                charQuant =checkWord.size();
                for(QChar *ptr = checkWord.begin(); ptr!=checkWord.end(); ptr++)
                {
                    if(symbols.indexOf(*ptr)>index) //Проверяем индекс каждой буквы по нашему вектору.
                    {
                        index = symbols.indexOf(*ptr);//Присваиваем максимальный индекс нашего слова согласно вектору букв.
                    }
                }
                if(index>0){
                    wordBase[index].push_back(checkWord); //помещаем это слово в пустой массив согласно индексу.
                    levelProgress[index]+=charQuant;
                    charQuant=0;
                }
                index = -1;                               //возвращаем индекс в исходное состояние.
            }
        }
        else
        {
            QMessageBox::warning(this,"Внимание", "Файл поврежден или отсутствует.");
        }
    QFile placeSymbols(":/Text/PlaceOnKeyboard.txt");
    if(placeSymbols.open(QIODevice::ReadOnly |QIODevice::Text)){
        QString someString = placeSymbols.readLine();       //Файл содержит 32 буквы алфавита, отсортированные по иерархии расположения на клавиатуре(йцукен...фывапр...ячсмит...)
        someString.remove('\n');                            //Побуквенно переносим в вектор
        for(QChar* ptr=someString.begin();ptr!=someString.end();ptr++){
            place.push_back(*ptr);
        }
    }
    for(auto&X:levelProgress){
        qDebug() << X;
        if(X>500)X=500;
    }
}

void Keyboard::startGame()
{
    if(!gameOn){
        idTimer=startTimer(1000);
        gameOn=true;
        index = 2;      //Устанавливаем индекс на 2 для вывода на экран всех предшестующих букв клавиатуры и вывода слова, состоящего из этих букв. п-0, р-1, о-2.
        checkWord=wordBase[index][qrand()%wordBase[index].size()];      //произвольно выбираем слово из нашего вектора.
        emit sendWord(checkWord);                                       //передаем слово для вывода на верхний экран.
    }
    this->setFocus();
}

void Keyboard::nextLevel()
{
    if(gameOn && index<31){
        index++;
        checkWord=wordBase[index][qrand()%wordBase[index].size()];      //произвольно выбираем слово из нашего вектора.
        missChar = false;
        mistake = false;
        keyHold=false;
        myWord.clear();
        emit sendWord(checkWord);                                       //передаем слово для вывода на верхний экран.
        repaint();
    }
    this->setFocus();
}


void Keyboard::paintEvent(QPaintEvent *event)
{
    /*Выводим на экран все клавиши, до значения index включительно.
     * Определяем какой последовательности на клавиатуре соответствует каждая из букв до index.
     * Если текущую букву пользователь не вводил с клавиатуры, то выводим на экран дефолтный Pixmap - содержится в векторе pixes[0][...]
     * Как только доходим до буквы, которую пользователь ввел с клавиатуры, проверяем, если она совпадает с текущей в checkWord (missChar==false),
     * то выводим на экран положительный Pixmap - содержится в векторе pixes[1][...]
     * Если пользователь ввел неверную букву, то выводим на экран отрицательный Pixmap - содержится в векторе pixes[2][...]*/
    QPainter pens(this);
    if(!gameOn){
        index =31;
    }
    for(QChar*ptr=symbols.begin(); ptr<=(symbols.begin()+index); ptr++){
        int keep = place.indexOf(*ptr);
        if(keep<12){
            if (keep==buttPos){
                if(!missChar){
                    pens.drawPixmap(2*keep+keep*pixes[0][0].width(),5,pixes[1][keep]);
                }
                else {
                    pens.drawPixmap(2*keep+keep*pixes[0][0].width(),5,pixes[2][keep]);
                }
            }
            else {
                pens.drawPixmap(2*keep+keep*pixes[0][0].width(),5,pixes[0][keep]);
            }
        }
        else if(keep<23){
            if (keep==buttPos){
                if(!missChar){
                    pens.drawPixmap(30+2*(keep-12)+(keep-12)*pixes[0][0].width(),10+pixes[0][0].height(),pixes[1][keep]);
                }
                else {
                    pens.drawPixmap(30+2*(keep-12)+(keep-12)*pixes[0][0].width(),10+pixes[0][0].height(),pixes[2][keep]);
                }
            }
            else {
                pens.drawPixmap(30+2*(keep-12)+(keep-12)*pixes[0][0].width(),10+pixes[0][0].height(),pixes[0][keep]);
            }
        }
        else{
            if (keep==buttPos){
                if(!missChar){
                    pens.drawPixmap(70+2*(keep-22)+(keep-23)*pixes[0][0].width(),15+2*pixes[0][0].height(),pixes[1][keep]);
                }
                else {
                    pens.drawPixmap(70+2*(keep-22)+(keep-23)*pixes[0][0].width(),15+2*pixes[0][0].height(),pixes[2][keep]);
                }
            }
            else {
                pens.drawPixmap(70+2*(keep-23)+(keep-23)*pixes[0][0].width(),15+2*pixes[0][0].height(),pixes[0][keep]);
            }
        }
    }
    //Выводимт на экран клавишу, которую пользователь ввел с клавиатуры, но не совпадающую ни с одной буквой из представленных на экране(до значения index в векторе symbols)
    if(buttPos<=33){
        if(symbols.indexOf(place[buttPos])>index){          //Если пользовательная клавиша находится за пределами выведенных на экран клавиш(больше чем index вектора symbols)
            if(buttPos<12){
                pens.drawPixmap(2*buttPos+buttPos*pixes[0][0].width(),5,pixes[2][buttPos]); //Выводим на экран клавишу из первой строки
            }
            else if(buttPos<23){
                pens.drawPixmap(30+2*(buttPos-12)+(buttPos-12)*pixes[0][0].width(),10+pixes[0][0].height(),pixes[2][buttPos]);//Выводим на экран клавишу из второй строки
            }
            else if(buttPos<33){
                pens.drawPixmap(70+2*(buttPos-23)+(buttPos-23)*pixes[0][0].width(),15+2*pixes[0][0].height(),pixes[2][buttPos]);//Выводим на экран клавишу из третьей строки
            }
            else if(buttPos==33){
                pens.drawPixmap(172,20+3*pixes[0][0].height(),pixes[2][buttPos]);//Выводим на экран пробел
            }
        }
    }
}

void Keyboard::keyPressEvent(QKeyEvent *event)
{
    if(keyHold){
        return;
    }
    if(!missChar){
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
            buttPos=33;
        }
        else if (event->key()==Qt::Key_Backspace){
            if(myWord.size()!=0){
                myWord.remove(myWord.size()-1,1);
            }
            if(myWord.size()==0){
                emit correctChar(myWord.size());
            }
        }
        if(myWord.size()<=checkWord.size() && myWord.size()!=0){
            if(myWord.at(myWord.size()-1)==checkWord.at(myWord.size()-1)){
                missChar = false;
                emit correctChar(myWord.size());
                repaint();
                if(myWord==checkWord)keyHold=true; //Блокирует залипание клавиш
            }
            else {
                missChar = true;
                mistake = true;
                emit sendSignal(true);
                repaint();
            }
        }
    }
    else {
        if (event->key()==Qt::Key_Backspace){
            if(myWord.size()!=0){
                myWord.remove(myWord.size()-1,1);
                emit sendSignal(false);
                buttPos = 100;
                missChar = false;
                repaint();
            }
        }
    }
}


void Keyboard::keyReleaseEvent(QKeyEvent *event)
{
    if(missChar == false){
        buttPos = 100;
        repaint();
    }
}


void Keyboard::timerEvent(QTimerEvent *event)
{
    int index2;
    if(checkWord==myWord){
        if (!mistake){
            progress += checkWord.size();
            index2 = wordBase[index].indexOf(checkWord);
            if(wordBase[index].size()!=1){
                swap(wordBase[index][index2],wordBase[index][wordBase[index].size()-1]);
                wordBase[index].pop_back();
            }
            else {
                wordBase[index].pop_back();
                index++;
                progress=0;
            }
        }
        else {
            progress += checkWord.size()/2;
            mistake=false;
        }
        if(progress>=levelProgress[index]){
            index++;
            progress = 0;
        }
        emit sendProgress (progress*100/levelProgress[index]);
        checkWord=wordBase[index][qrand()%wordBase[index].size()];
        keyHold=false;
        emit sendWord(checkWord);
        myWord.clear();
        repaint();
    }
}
