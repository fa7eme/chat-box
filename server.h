#ifndef SERVER_H
#define SERVER_H

#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include "chatbox.h"

#define PORT 8080

class Server
{
private:
    int new_socket;
    const char* result;
public:
    Server();
    void socket_creation();
    void read_text(int x);
    void send_text(const char *data);
};

#endif // SERVER_H
