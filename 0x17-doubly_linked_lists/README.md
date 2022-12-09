# C - Doubly linked lists :page_with_curl: 0x17-doubly_linked_lists
## About this project:
In this project i learnt and practiced;
- What is a doubly linked list
- How to use doubly linked lists
## Tasks file descriptions:
  * [lists.h](./lists.h): Header file containing definitions and prototypes for all types
  and functions written for the project.

  * [4-free_dlistint.c](./4-free_dlistint.c): C function that frees a
  doubly-linked `dlistint_t` list.

  * [5-get_dnodeint.c](./5-get_dnodeint.c): C function that locates a given node of a
  doubly-linked `dlistint_t` list.
  * The parameter `index` is the index of the node to locate - indices start at `0`.
  * If the node does not exist - returns `NULL`.
  * Otherwise - returns the address of the located node.

  * [6-sum_dlistint.c](./6-sum_dlistint.c): C function that sums all the data (`n`)
  of a doubly-linked `dlistint_t` list.
  * If the list is empty - returns `0`.
  * Otherwise - returns the sum of all the data (`n`).

  * [7-insert_dnodeint.c](./7-insert_dnodeint.c): C function that inserts a new node at a
  given position.
  * The parameter `idx` is the index of the list where the new node should
  be added - indices start at `0`.
  * If the function fails - returns `NULL`.
  * Otherwise - returns the address of the new element.
  * Requires compilation with functions defined in [2-add_dnodeint.c](./2-add_dnodeint.c)
  and [3-add_dnodeint_end.c](./3-add_dnodeint_end.c).

  * [8-delete_dnodeint.c](./8-delete_dnodeint.c): C function that deletes the node at
  index `index` of a doubly-linked `dlistint_t` list.
  * The paramter `index` is the index of the node to delete - indices start at `0`.
  * If the function fails - returns `-1`.
  * Otherwise - returns `1`.

  * [100-password](./100-password): Text file containing the password for the
  [crackme4](https://github.com/holbertonschool/0x16.c) executable.

  * [102-result](./102-result): Text file containing the largest palindrome made from a
  product of two three-digit numbers.

  * [103-keygen.c](./103-keygen.c): C function that generates passwords for the
  [crackme5](https://github.com/holbertonschool/0x16.c) executable.
  * Usage of the crackme: `./crackme5 username key`
  * Usage of the keygen: `./keygen5 username`
