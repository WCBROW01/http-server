# http-server

TODO: Come up with an actual name for this

This is a toy HTTP server written in C using sockets. It isn't fit for any type of production use-case, and I'm not even sure if I'd even use it as a teaching tool in the state it's currently in. However, it does exist, and it will serve webpages.

The server currently runs on port 8000 and listens to all addresses by default.

## Building

You need a POSIX-compliant system in order to run this program.

To build and run, just run
```sh
$ make
$ ./http-server
```

## Generating internal documentation

If you have Doxygen installed, you can easily generate and read internal documentation in many formats! By default, HTML and LaTeX files are generated. It is available in the repositories of many Linux distributions.

To generate documentation, just run
```sh
$ doxygen
```
and you will find documentation present in a subdirectory labeled docs!

## Things currently on the todo list
- [x] Parse % encoding in URIs
- [x] Add MIME types
- [x] Slightly nicer status pages
- [ ] Configuration options (config file and CLI arg overrides)
- [x] Better program structure
