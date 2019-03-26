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
#include <QChar>
#include <QFile>
#include <QTimer>
#include <QThread>
#include <QMessageBox>
#include <QTextStream>
#include <QTextCodec>

class Keyboard : public QWidget
{
    Q_OBJECT
    QPixmap pix;
    QString checkWord;
    int buttPos = 100;
    bool hit = true;
    QString myWord;
    int NextWord = 0;
    QVector <QString> stringWord;
    QVector <QVector<QPixmap>> pixes;
    int idTimer;
    bool gameOn = false;
    uint charNumbers = 3;
    bool mistake = false;
    int index = -1;
    QVector<QChar> symbols;
    QVector<QChar> place;
    QVector <QVector<QString>> wordBase;
public:
    explicit Keyboard(QWidget *parent = nullptr);

signals:
    void sendWord(QString);
    void printWord(QString);

public slots:
    void startGame();

    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event);

    // QWidget interface
protected:
    virtual void keyPressEvent(QKeyEvent *event);

    // QWidget interface
protected:
    virtual void keyReleaseEvent(QKeyEvent *event);

    // QObject interface
protected:
    virtual void timerEvent(QTimerEvent *event);
};

#endif // KEYBOARD_H
