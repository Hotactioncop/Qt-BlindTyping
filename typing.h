#ifndef TYPING_H
#define TYPING_H

#include <QMainWindow>
#include <QString>
#include <QTime>
#include <QProgressBar>


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
public slots:
    void changeMusicIcon(bool);
};

#endif // TYPING_H
