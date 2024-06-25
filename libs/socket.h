#ifndef SOCKET_H
#define SOCKET_H

#include <string.h>
#include <arpa/inet.h>

class Socket{
    enum protocol{TCP, UDP};
    private:
        int     fd; // file descriptor
        int     port; // Port number
        struct  sockaddr_in address; // IPv4 address
        protocol prot_type;
    public:
        Socket(int port, protocol prot_type);
        // Initializes the socket
        void init_socket();
        //Binding socket to address and port
        void init_bind();
        //Listening on port for connection
        void init_listen();
        //handles TCP/UDP connection
        void handle_connection();
        //close Socket
        void close();

};

#endif 