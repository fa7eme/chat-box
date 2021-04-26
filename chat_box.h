#ifndef CHAT_BOX_H
#define CHAT_BOX_H

#include <QWidget>

namespace Ui {
class chat_box;
}

class chat_box : public QWidget
{
    Q_OBJECT

public:
    explicit chat_box(QWidget *parent = nullptr);
    ~chat_box();

private:
    Ui::chat_box *ui;
};

#endif // CHAT_BOX_H
