#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "client.h"
#include "server.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE


void client_read(int t, Client s);
void client_send(int a, Client s);

void server_read(int t, Server s);
void server_send(int a, Server s);

namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pb_client_clicked();

private slots:
    void on_pb_server_clicked();

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
