// Data structure definitions for HTTP server, could be used for a C file in future

#ifndef HTTP_H
#define HTTP_H

#include <stdio.h>
#include <limits.h>

#include <sys/stat.h>

struct http_header {
    char buf[8192];
    size_t len;
};

enum http_request_type {
    HTTP_GET, HTTP_HEAD, HTTP_POST, HTTP_PUT, HTTP_DELETE,
    HTTP_CONNECT, HTTP_OPTIONS, HTTP_TRACE, HTTP_PATCH
};


struct http_request {
    char path[PATH_MAX];
    enum http_request_type request_type;
    int major_version, minor_version;
    int error;
};

struct URI {
    char path[PATH_MAX];
    char query[4096];
    struct stat filestat;
    int error;
};

enum connection_type { CONN_CLOSE, CONN_KEEPALIVE };

struct http_response {
    int major_version, minor_version;
    int status, connection;
    struct URI uri;
    const char *mime_type;
    size_t header_sent;
    struct http_header header;
    size_t content_length, content_sent;
    FILE *content;
};

#endif // HTTP_H
