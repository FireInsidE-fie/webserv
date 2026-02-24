#ifndef CONNECTION_HPP
#define CONNECTION_HPP

#include "Request.hpp"
#include "Response.hpp"
#include "config.hpp"

class Connection {
public:
    Connection(const Config_Server&, int socket);
    ~Connection();

    const Request&  request() const;
    const Response& response() const;

    // TODO Send and receive functions

private:
    const Config_Server& _config;

    Request  _request;
    Response _response;

    int _socket;
    // TODO Read and write buffers? How?
};

#endif
