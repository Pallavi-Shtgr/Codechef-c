// Pointers - Debug this code
// The code in the IDE is trying to write a program that takes an integer as input, increments its value by 1 using a function, and then prints the updated value.
// The code is trying to use the concept of pointers - however, it is incorrect.
// Debug the code to solve this problem.

// Solution as follows

#include <stdio.h>
void incrementByOne(int *numPtr) {
    (*numPtr)++; 
}

int main() {
    int number;
    scanf("%d", &number);
    incrementByOne(&number);

    printf("%d\n", number);

    return 0;
}
