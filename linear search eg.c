// Example in a List:
// Let's say you have a list of numbers, and you want to find the number 
// 6

// List: [4,1,6,8]

// Start with the first element (4). Is it 6? No.
// Move to the next element (1). Is it 6? No.
// Move to the next element (6). Is it 6? Yes. You've found the number 6.
// In this example, it took three comparisons to find the number 6.

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Define the array
    int array[] = {3, 5, 2, 9, 7, 1};
    int length = sizeof(array) / sizeof(array[0]);
    bool found = false;

    // Check if 7 is present in the array
    for (int i = 0; i < length; ++i) {
        if (array[i] == 7) {
            found = true;
            break;
        }
    }

    // Print the result
    if (found) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
