# C - Dynamic libraries :page_with_curl: 0x18-dynamic_libraries
## About this project:
In this project i learnt and practiced;
- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable `$LD_LIBRARY_PATH` and how to use it
- What are the differences between static and shared libraries
- Basic usage `nm`, `ldd`, `ldconfig`
## Tasks file description:
* [main.h](./main.h): Header file containing the prototypes of all functions
  included in `libholberton.so`.

* [libdynamic.so](libdynamic.so): dynamic library containing all functions found in [main.h](main.h).

* [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh): Bash script that creates a
  dynamic library called `liball.so` from all the `.c` files in the current directory.

* [100-operations.so](./100-operations.so): C dynamic library containing basic C
  mathematical operation functions that can be called from Python.
  * Includes:
    * `int add(int a, int b);`
    * `int sub(int a, int b);`
    * `int mul(int a, int b);`
    * `int div(int a, int b);`
    * `int mod(int a, int b);`

* [101-make_me_win.sh](./101-make_me_win.sh): Bash script to inject the libmask.so library, using LD_PRELOAD, in the giga million program
