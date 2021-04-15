#ifndef CHATBOX_H
#define CHATBOX_H

#include <QDialog>

namespace Ui {
class chatbox;
}

class chatbox : public QDialog
{
    Q_OBJECT

public:
    explicit chatbox(QWidget *parent = nullptr);
    ~chatbox();

private:
    Ui::chatbox *ui;
};

#endif // CHATBOX_H
