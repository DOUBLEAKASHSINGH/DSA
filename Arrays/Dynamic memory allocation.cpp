#include <iostream>
using namespace std;

int main() {

    int *p = new int; // Dynamic memory allocation
    delete p; // Deallocate memory (It is for heap memory because Dynamic memory allocation is used)
    // Dynamic memory allocation is term used when we allocate memory at runtime into the heap while bydefault memory is allocated into stack.


    // Memory leak example
    int *p1 = new int[10]; // Allocating an array of 10 integers
    delete[] p1; // Deallocate memory for the array

    // how the memory leak occured here
    int *p2 = new int[10]; // Allocating another array of 10 integers
    // No delete[] p2; here, so memory leak occurs

    while (true){
        int *p = new int;
    }
    while (true){
        int i = 10;
    }    
}