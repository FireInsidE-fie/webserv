#include "Connection.hpp"

#include <cassert>

#include "Request.hpp"
#include "Response.hpp"
#include "config.hpp"

Connection::Connection(const Config_Server* const config, int socket)
    : _config(config),
      _request(),
      _response(),
      _socket(socket),
      _read_buffer(),
      _read_index(0),
      _write_buffer(),
      _write_index(0) {
    assert(config && "Config_Server pointer");
    assert(socket > 2 && "Valid Socket Number");

    _working_read_buffer = new char[RECV_SIZE];
    _working_write_buffer = new char[SEND_SIZE];
}

Connection::~Connection() {
    delete[] _working_read_buffer;
    delete[] _working_write_buffer;
}

const Request& Connection::request() const {
    return _request;
}

const Response& Connection::response() const {
    return _response;
}

/**
 * @brief Returns a pointer to the first unprocessed char in the read buffer.
 */
const char* Connection::read_data() const {
    return _read_buffer.c_str() + _read_index;
}

/**
 * @brief Returns a pointer to the first unprocessed char in the write buffer.
 */
const char* Connection::write_data() const {
    return _write_buffer.c_str() + _write_index;
}
void Connection::set_config(const Config_Server* const config) {
    assert(config && "Config_Server pointer");

    _config = config;
}
