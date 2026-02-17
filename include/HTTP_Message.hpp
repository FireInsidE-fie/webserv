#ifndef HTTP_MESSAGE_HPP
#define HTTP_MESSAGE_HPP

#include <map>
#include <string>

class HTTP_Message {
public:
    virtual ~HTTP_Message();

    virtual const std::string& body() const = 0;
    virtual const std::string& header(const std::string&) = 0;

    virtual void set_header(const std::string&, const std::string&) = 0;

private:
    int                                     _major_version;
    int                                     _minor_version;
    std::multimap<std::string, std::string> _headers;
    std::string                             _body;
};

#endif
