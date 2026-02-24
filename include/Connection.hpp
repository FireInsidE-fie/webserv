#ifndef CONNECTION_HPP
#define CONNECTION_HPP

#include "Request.hpp"
#include "Response.hpp"
#include "config.hpp"

class Connection {
public:
    Connection(const Config_Server* const, int socket);
    ~Connection();

    const Request&  request() const;
    const Response& response() const;

    // TODO Send and receive functions

    void set_config(const Config_Server* const);

private:
    const Config_Server* _config;

    Request  _request;
    Response _response;

    int _socket;

    std::string _read_buffer;
    size_t      _read_index;
    std::string _write_buffer;
    size_t      _write_index;
};

#endif
