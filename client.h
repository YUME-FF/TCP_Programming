#ifndef __CLIENT_H__
#define __CLIENT_H__
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cstring>
#include <iostream>

class Client {
 public:
  int status;
  int socket_fd;
  struct addrinfo host_info;
  struct addrinfo * host_info_list;
  const char * hostname;
  const char * port;

  void initStatus(const char * _hostname, const char * _port);
  void createSocket();
};
#endif