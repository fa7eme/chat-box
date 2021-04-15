#ifndef CLIENT_H
#define CLIENT_H
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#define PORT 8080

class Client
{
private:
    int sock;
public:
    Client();
    void socket_creation();
    void send_text(const char* data);
    void read_text(int x);
};

#endif // CLIENT_H
