# 0verkill
This is a fork of 0verkill in hopes to revive the game's development.

This fork takes over from where [github.com/hackndev/0verkill](https://github.com/hackndev/0verkill) left off.

I'm working on refactoring the project's code to make further development easier.

Join #0verkill channel in my [Discord Server](https://discord.gg/wpE3Nfp) if you are interested in this project.

## Patches done
- Fix `md5` checksum calculation. (It was very broken, more noticable when running the client and server on different machines.)
- Rename `configure.in` to `configure.ac`

## Install
You need a C compiler (gcc or clang), `autoconf` and `make`
```sh
$ autoreconf
# Pass --with-x for X11 support.
$ ./configure
$ make
```
Then start a server `./server` and start playing `./0verkill` and connect to the server.

The patches done makes it incompatible with the original game's server as there was some major bug that needed to be fixed with the way the md5 checksum was being calculated.

Windows support although implemented in the original code is very outdated and there isn't any proper build instructions. Status is unknown and help wanted.
