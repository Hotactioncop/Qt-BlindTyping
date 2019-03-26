#ifndef TYPING_H
#define TYPING_H

#include <QMainWindow>
#include <QString>
#include <QTime>

namespace Ui {
class Typing;
}

class Typing : public QMainWindow
{
    Q_OBJECT

public:
    explicit Typing(QWidget *parent = nullptr);
    ~Typing();

private:
    Ui::Typing *ui;

};

#endif // TYPING_H
