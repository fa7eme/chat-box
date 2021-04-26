#include "client.h"
#include <iostream>

Client::Client()
{
    sock = 0 ;
    socket_creation();
}

void Client::socket_creation()
{
    struct sockaddr_in serv_addr;
    std::string hello;
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n Socket creation error \n");

    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 and IPv6 addresses from text to binary form
    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)
    {
        printf("\nInvalid address/ Address not supported \n");

    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("\nConnection Failed \n");

    }

}

void Client::send_text(const char *data)
{
    while(1)
    {
        send(sock , "hello" , strlen(data) , 0 );
    }
}

void Client::read_text(int x)
{
    char buffer[1024]={0};
    int valread = 0;
    while(1)
    {
        valread = read(sock, buffer, 1024);
        std::cout<<valread<<std::endl;
        if(valread>0)
        {
            std::cout<<buffer<<std::endl;
        }
    }
}
