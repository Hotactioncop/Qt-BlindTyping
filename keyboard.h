#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QWidget>
#include <QSize>
#include <QPainter>
#include <QPixmap>
#include <QDebug>
#include <QString>
#include <QKeyEvent>
#include <QKeySequence>
#include <QVector>

class Keyboard : public QWidget
{
    Q_OBJECT
    QPixmap pix;
    QString checkWord;
    int buttPos = 100;
    bool hit = true;
    QString myWord;
    QVector <QVector<QPixmap>> pixes;
public:
    explicit Keyboard(QWidget *parent = nullptr);

signals:
    void sendWord(QString);
    void printWord(QString);

public slots:

    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event);

    // QWidget interface
protected:
    virtual void keyPressEvent(QKeyEvent *event);

    // QWidget interface
protected:
    virtual void keyReleaseEvent(QKeyEvent *event);
};

#endif // KEYBOARD_H
