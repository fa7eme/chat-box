#include "server.h"
#include <iostream>

Server::Server()
{
    socket_creation();
}

void Server::socket_creation()
{
    // Server side C/C++ program to demonstrate Socket programming

    int server_fd;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);

    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // Forcefully attaching socket to the port 8080
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR ,
                   &opt, sizeof(opt)))
    {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons( PORT );

    // Forcefully attaching socket to the port 8080
    if (bind(server_fd, (struct sockaddr *)&address,
             sizeof(address))<0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    if (listen(server_fd, 3) < 0)
    {
        perror("listen");
        exit(EXIT_FAILURE);
    }
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address,
                             (socklen_t*)&addrlen))<0)
    {
        perror("accept");
        exit(EXIT_FAILURE);
    }

}

void Server::send_text(const char *data)
{
    while(1)
    {
        send(new_socket , "hello" , strlen(data) , 0 );
    }
}

void Server::read_text(int x)
{
    char buffer[1024] = {0} ;
    int valread = 0;
    while(1)
    {
        valread = read(new_socket, buffer, 1024);
        if(valread>0)
        {
            std::cout<<buffer<<std::endl;
        }
    }
}
