#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <thread>
#include <chat_box.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void server_read(int t, Server s){
    s.read_text(t);
}
void server_send(int a, Server s)
{
    s.send_text("hey");
}

void client_send(int a, Client s)
{
    s.send_text("hey");
}
void client_read(int a, Client s)
{
    s.read_text(a);
}
void MainWindow::on_pb_server_clicked()
{
    Server serv;
    chat_box *chat=new chat_box;
    chat->show();
    std::cout<<"fuck you"<<std::endl;
//    std::thread sent_server(server_send, 3, serv);
//    std::thread read_server(server_read, 4, serv);
//    sent_server.join();
//    read_server.join();
}

void MainWindow::on_pb_client_clicked()
{
    Client cli;
    chat_box *chat=new chat_box;
    chat->show();
    std::cout<<"fuck you"<<std::endl;
//    std::thread thr(client_read, 4, cli);
//    std::thread sent(client_send, 3, cli);
//    sent.join();
//    thr.join();
}
