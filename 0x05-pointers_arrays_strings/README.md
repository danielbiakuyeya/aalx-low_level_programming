0x05. C - Pointers, arrays and strings


Pointers:

A pointer is a variable that stores the memory address of another variable.
Pointers allow you to indirectly access and manipulate data stored in memory.
In C, you declare a pointer using the * symbol, like this: int *ptr;.
You can assign the address of a variable to a pointer using the address-of operator &, like this: ptr = &myVariable;.
To access the value pointed to by a pointer, you use the dereference operator *, like this: int x = *ptr;.
Arrays:

An array is a collection of elements of the same data type, stored in contiguous memory locations.
Arrays in C are zero-indexed, meaning the first element has an index of 0, the second element has an index of 1, and so on.
You declare an array by specifying its data type and size, like this: int myArray[5];.
Elements in an array can be accessed using square brackets, e.g., myArray[2] accesses the third element.
C does not perform bounds checking, so you must ensure that you do not access elements outside the bounds of the array to avoid undefined behavior.
Relationship between Pointers and Arrays:

In C, arrays and pointers are closely related. An array name can be thought of as a constant pointer to the first element of the array.
For example, if you have an array int myArray[5];, you can use myArray like a pointer to the first element, and myArray + 2 would point to the third element.
You can use pointer arithmetic to navigate through array elements, like *(myArray + 2) to access the third element.
Arrays can decay into pointers when used in most expressions, which means the array name effectively acts as a pointer to its first element.
Here's a simple example that illustrates the relationship between pointers and arrays in C:


#include <stdio.h>

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};
    int *ptr = myArray; // 'myArray' decays into a pointer to its first element

    printf("Value at index 2 of myArray: %d\n", myArray[2]); // Accessing with array syntax
    printf("Value at index 2 using pointer: %d\n", *(ptr + 2)); // Accessing with pointer arithmetic

    return 0;
}
This code demonstrates how arrays and pointers can be used interchangeably to access elements of the array. Understanding pointers and arrays is crucial for effective memory management and efficient data manipulation in C.
