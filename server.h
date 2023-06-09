#ifndef __SERVER_H__
#define __SERVER_H__
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cstring>
#include <iostream>

class Server {
 public:
  int status;
  int socket_fd;
  int client_connection_fd;
  struct addrinfo host_info;
  struct addrinfo * host_info_list;
  const char * hostname;
  const char * port;

  void initStatus(const char * _hostname, const char * _port);
  void createSocket();
  void acceptConnection(std::string & ip);
  int getPort();
};
#endif