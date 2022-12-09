# Bit Manipulation :page_with_curl: 0x14-bit_manipulation
## About this project:
In this project i learnt and practiced;
- How to manipulate bits and use bitwise operators.
## Tasks file description:
* [main.h](./main.h):Header file containing prototypes for all functions written in the project.
* [0-binary_to_uint.c](./0-binary_to_uint.c): C function that converts a binary number to an `unsigned int`.
  * `b` is a pointer to a string of `0` and `1` characters.
  * If `b` is `NULL` or there are one or more characters in `b` that are not `0` or `1` - returns `0`.
  * Otherwise - returns the converted number.

* [1-print_binary.c](./1-print_binary.c): C function that prints the binary representation of a number.

* [2-get_bit.c](./2-get_bit.c): C function that returns the value of a bit at a given index.
  * Indices start at `0`.
  * Returns `-1` if error.
  * Else returns the value of the bit at the given index.

* [3-set_bit.c](./3-set_bit.c): C function that sets the value of a bit at a given index to `1`.
  * If an error occurs - returns `-1`.
  * Otherwise - returns `1`.

* [4-clear_bit.c](./4-clear_bit.c): C function that sets the value of a bit at a given index to `0`.
  * Returns `-1` if error
  * Else - returns `1`.

* [5-flip_bits.c](./5-flip_bits.c): C function that returns the number of bits need to be flipped to get from one number to another.

* [100-get_endianness.c](./100-get_endianness.c): C function that checks the endianness.
  * Returns `0` if Big-endian
  * Returns `1` if Little-endian


* [101-password](./101-password): File containing the password for the [crackme3](https://github.com/holbertonschool/0x13.c) executable.
