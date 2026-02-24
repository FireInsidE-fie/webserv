#ifndef REQUEST_HPP
#define REQUEST_HPP

#include "HTTP_Message.hpp"
#include "config.hpp"

enum HTTP_Method { GET, POST, DELETE };
enum Status_Parsing {
    EMPTY,
    REQUEST_LINE,
    HEADERS,
    BODY,
    PARSED
};  // TODO Might move it to a parsing-related header if needed elsewhere

/**
 * @brief Represents a request issued by an active connection.
 */
class Request : virtual public HTTP_Message {
public:
    Request();
    ~Request();

private:
    const Config_Location& _config;

    HTTP_Method    _method;
    Status_Parsing _status;
};

#endif
