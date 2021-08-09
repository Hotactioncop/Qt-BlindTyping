#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QChar>
#include <QDebug>
#include <QFile>
#include <QKeyEvent>
#include <QKeySequence>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMessageBox>
#include <QMultimedia>
#include <QPainter>
#include <QPixmap>
#include <QSize>
#include <QSound>
#include <QString>
#include <QTextCodec>
#include <QTextStream>
#include <QThread>
#include <QTimer>
#include <QVector>
#include <QWidget>

class Keyboard : public QWidget {
  Q_OBJECT
  QString checkWord; //Проверочное слово
  int buttPos = 100; //Индекс кнопки клавиатуры нажатой пользователем - для
                     //вывода изображения на экран.
  bool missChar = false; //Соответствие введенной пользователем буквы.
  QString myWord; //Слово, образующееся в процессе ввода пользователем символов
                  //с клавиатуры. Проверяется на соответствие с установленным
                  //словом checkWord
  QVector<QVector<QPixmap>>
      pixes; //Вектор изображений кнопок клавиатуры для вывода на экран
  int idTimer; //Установка таймера для проверки слова и замены на новое.
  bool gameOn = false;  //Признак начала игры
  bool mistake = false; //Наличие ошибки в слове
  bool keyHold = false; //Защита от залипания клавиш
  int index =
      -1; //Положение индекса в векторе wordBase - с которого начнется вывод
          //слов. При старте устанавливается на 2 - (наличие трех букв П Р О)
  QVector<QChar>
      symbols; //Вектор отсортированных букв, по нарастающей сложности(от центра
               //клавиатуры П Р О, к краям Й Ъ Я Ю)
  QVector<QChar> place; //Вектор отсортированных букв, согласно расположению на
                        //клавиатуре(йцукен...фывапр...ячсмит...), для вывода на
                        //экран клавиатуры
  QVector<QVector<QString>>
      wordBase; //База слов, отсортированных по вектору symbols (сортировка по
                //принципу наличия в слове буквы, имеющей максимальный индекс в
                //векторе symbols)
  QVector<int> levelProgress; //Прогресс
  int wellWord = 0; //Правильно введедено слов на текущем уровне сложности
  int Score = 0;    //Набрано очков
  int progress = 0; //Прогресс на текущем уровне
  //    QMediaPlayer * m_player;             // Аудио плеер
  //    QMediaPlaylist * m_playlist;         // Плейлист
  bool sound = false; //Идентификатор включения звука
public:
  explicit Keyboard(QWidget *parent = nullptr);

signals:
  void sendWord(QString); //Передаем проверочное слово checkWord на виджет - для
                          //вывода на экран
  void sendSignal(bool); //Передаем признак наличия ошибки
  void correctChar(uint); //Передаем количество букв в нашем слове myWord
  void sendProgress(int); //Передаем прогресс за текущий уровень
  void sendScore(int); //Передаем количество набранных очков
  void changeMusic(bool);

public slots:
  void startGame(); //Слот Начала игры. Вызывается при нажатии пользователем
                    //кнопки "Старт".
  void nextLevel(); //Переходим на следующий уровень(index++)
  void playMusic();

  // QWidget interface
protected:
  virtual void paintEvent(QPaintEvent *event);
  virtual void keyPressEvent(QKeyEvent *event);
  virtual void keyReleaseEvent(QKeyEvent *event);
  virtual void timerEvent(QTimerEvent *event);
};

#endif // KEYBOARD_H
