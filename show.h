#ifndef SHOW_H
#define SHOW_H

#include <QWidget>
#include <QString>
#include <QPainter>
#include <QDebug>

class Show : public QWidget
{
    Q_OBJECT
    QString showWord;       //Проверочное слово - выводится на экран
    bool gameOn = false;
    int symbPr = -1;        //Количество символов введенных пользователем.
    bool mark = false;      //В слове допущена ошибка
    uint charSize = 48;     //Размер каждой буквы
public:
    explicit Show(QWidget *parent = nullptr);

signals:

public slots:
    void getword(QString);      //Вызывается при получении нового слова от класса Keyboard
    void getcorrect(uint);      //Вызывается при получении количества верно введенных букв от класса Keyboard
    void getbool(bool);         //Вызывается при  наличии ошибки в слове или её исправлении от класса Keyboard

    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event);
};

#endif // SHOW_H
