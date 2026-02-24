#include "Response.hpp"

#include <cstdlib>
#include <string>

#include "config.hpp"

Response::Response() {}

Response::~Response() {}

HTTP_Code Response::code() const {
    return _code;
}

const std::string& Response::response_string() const {
    return _response_string;
}

void Response::set_code(HTTP_Code code) {
    _code = code;
}

void Response::set_response_string(const std::string& response_string) {
    _response_string = response_string;
}

/**
 * @brief Serialize the Response in order to be able to send it through a socket
 * directly.
 */
std::string Response::serialize() const {
    std::string serialized;

    // TODO append the http code first
    serialized.append(_response_string);

    return serialized;
}
