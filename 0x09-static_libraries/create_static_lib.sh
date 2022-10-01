#!/bin/bash
<<<<<<< HEAD
gcc -c ./*.c
ar -rc liball.a ./*.o
=======
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc liball.a *.o
>>>>>>> e28327e (Multi-push)
