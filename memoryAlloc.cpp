/**
 * @file memoryAlloc.cpp
 * @author Rohit Roy
 * @brief Dynamic Memoey Allocation of 1D Array using 'new' and 'delete' operator
 * @version 0.1
 * @date 2022-01-14
 * 
 * @copyright Copyright (c) 2022
 * 
The process of allocating memeory to the variables during execution of a program (or at run time) is called Dynamic Memory Allocation. We have to use concept of pointers to dynamically allocate memory.

The 'new' operator is used to dynamically allocate memory in C++.

The 'delete' operator is used to de-allocate or release memory space.

Dynamic memory allocation in C/C++ refers to performing memory allocation manually by programmer. Dynamically allocated memory is allocated on Heap and non-static and local variables get memory allocated on Stack.

Allocate block of memory: new operator is also used to allocate a block(an array) of memory of type data-type. 

Example:    int *p = new int[10]
Dynamically allocates memory for 10 integers continuously of type int and returns pointer to the first element of the sequence, which is assigned to p(a pointer). p[0] refers to first element, p[1] refers to second element and so on. 
 
Normal Array Declaration vs Using new 
There is a difference between declaring a normal array and allocating a block of memory using new. The most important difference is, normal arrays are deallocated by compiler (If array is local, then deallocated when function returns or completes). However, dynamically allocated arrays always remain there until either they are deallocated by programmer or program terminates.

*/
#include <iostream>
using namespace std;

void accept(int A[], int size)
{
    cout << "Enter array elements: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }
}

void display(int A[], int size)
{
    cout << "\nYour array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << ", ";
    }
}

int main()
{
    int n;
    cout << "\nEnter size of array : ";
    cin >> n;
    int *arr = new int[n];
    accept(arr,n);
    display(arr,n);
    cout << endl;
    // delete arr; // this de-allocates the memory of single element. 
    delete []arr; //de-allocates the memory of entire block of array elemets
    return 0;
}