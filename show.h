#ifndef SHOW_H
#define SHOW_H

#include <QWidget>
#include <QString>
#include <QPainter>

class Show : public QWidget
{
    Q_OBJECT
    QString showWord;
    bool gameOn = false;
    int symbPr = 0; //Количество символов введенных пользователем.
    bool mark = false; //В слове допущена ошибка
public:
    explicit Show(QWidget *parent = nullptr);

signals:

public slots:
    void getword(QString);
    void getbool(bool);

    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event);
};

#endif // SHOW_H
