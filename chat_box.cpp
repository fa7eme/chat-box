#include "chat_box.h"
#include "ui_chat_box.h"

chat_box::chat_box(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chat_box)
{
    ui->setupUi(this);
}

chat_box::~chat_box()
{
    delete ui;
}
