# Windows_MinGWLibrary
Little repository with basics about how to create a DYNAMIC library using g++ and use it in Windows

Now I know how to create global variables in DYNAMIC libraries and manipulate them through functions

Build the library with

`g++ libtest.cpp -shared -D MY_EXPORT -o libtest.so`

Now use it with your program with

`g++ main.cpp libtest.so`

Remember we can add `-m64` for 64 bit mode or `-m32` for 32 bit mode
