#!/bin/bash
<<<<<<< HEAD
gcc -fPIC -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
=======
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
>>>>>>> ff2225ac1c2b5f736caa5f8f5d5a500b9f424203
