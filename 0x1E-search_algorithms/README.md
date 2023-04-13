# C - Search Algorithms :page_with_curl: 0x1E-search_algorithms

## About this project:
- In this project, I learnt and practiced ;
- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

## Files tasks descriptions:
* [search_algos.h](./search_algos.h): Header file containing definitions and
prototypes for all types and functions.

* [listint](./listint): Folder of helper files for task 12, singly linked list
jump search.
  * [create_list.c](./listint/create_list.c): C function that creates a `listint_t`
singly linked list.
  * [free_list.c](./listint/free_list.c): C function that frees a `listint_t`
singly linked list.
  * [print_list.c](./listint/print_list.c): C function that prints the contents
of a `listint_t` singly linked list.

* [skiplist](./skiplist): Folder of helper files for task 13, singly skipped list
jump search.
  * [create_skiplist.c](./skiplist/create_skiplist.c): C function that creates
a `skiplist_t` singly skipped list.
  * [free_skiplist.c](./skiplist/free_skiplist.c): C function that frees a
`skiplist_t` singly skipped list.
  * [print_skiplist.c](./skiplist/print_skiplist.c): C function that prints the
contents of a `skiplist_t` singly skipped list.


* [0-linear.c](./0-linear.c): C function that searches for a value in an array
  of integers using linear search.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* [1-binary.c](./1-binary.c): C function that searches for a value in a sorted
  array of integers using binary search.
  * Assumes the array is sorted in ascending order and that the value to search
  for is not repeated in the array.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the index where `value` is located.

* [2-O](./2-O): Text file containing the worst case time complexity of linear
  search.

* [3-O](./3-O): Text file containing the worst case space complexity of
  iterative linear search.

* [4-O](./4-O): Text file containing worst case case time complexity
  of binary search.

* [5-O](./5-O): Text file containing the worst case space complexity
  of binary search.

* [6-O](./6-O): Text file containing the space complexity of the following algorithm:
```
int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
		}
		return (map);
}
```

* [100-jump.c](./100-jump.c): C function that searches for a value in a
  sorted array of integers using jump search.
  * Uses the square root of the size of the array as the jump step.
  * Assumes the array is sorted in ascending order and that the value to search
  for is not repeated in the array.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the index where `value` is located.

* [101-O](./101-O): Text file containing the average case time complexity of
  jump search in an array of size `n` using `step = sqrt(n)`.

* [102-interpolation.c](./102-interpolation.c): C function that searches for
  a value in a sorted array of integers using interpolation search.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* [103-exponential.c](./103-exponential.c): C function that searches for a
  value in a sorted array of integers using exponential search.
  * Uses powers of 2 as exponential ranges to search the array.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* [104-advanced_binary.c](./104-advanced_binary.c): C function that searches
  for a value in a sorted array of integers using advanced binary search.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* [105-jump_list.c](./105-jump_list.c): C function that searches for a value
  in a `listint_t` sorted singly linked list of integers using jump search.
  * Uses the square root of the list size as the jump step.
  * Assumes that the singly linked list is sorted in ascending order.
	* If the value is not present or the head of the list is `NULL`, returns `NULL`.
	* Otherwise, returns a pointer to the first node where `value` is located.

* [106-linear_skip.c](./106-linear_skip.c): C function that searches for a value
  in a `skiplist_t` sorted skipped linked list of integers using jump search.
  * Assumes that the singly linked list is sorted in ascending order.
	* If the value is not present or the head of the list is `NULL`, returns `NULL`.
	* Otherwise, returns a pointer to the first node where `value` is located.

* [107-O](./107-O): Text file containing the average time complexity of jump
  search in a singly linked list of size `n`, using `step = sqrt(n)`.

* [108-O](./108-O): Text file containing the average time complexity of jump
  search in a sorted skipped linked list of of size `n`, using `step = sqrt(n)`.



