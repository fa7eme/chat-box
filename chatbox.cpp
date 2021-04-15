#include "chatbox.h"
#include "ui_chatbox.h"

chatbox::chatbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chatbox)
{
    ui->setupUi(this);
}

chatbox::~chatbox()
{
    delete ui;
}
