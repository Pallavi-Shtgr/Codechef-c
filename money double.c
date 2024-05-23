
// Money Double
// Chef's bank gives him a unique offer — at the end of each year, they offer Chef to either add 1000 rupees to his bank account, or double the amount stored in his bank account.
// Chef initially has X rupees in his account. What is the maximum amount of money that Chef can accumulate after Y years?
// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// The first and only line of each test case contains 2 space-separated integers X and Y, as described in the statement.
// Output Format
// For each test case, output on a new line one integer: the maximum amount of money which Chef can accumulate after Y years.

#include<stdio.h>
    int M(int X, int Y) {
    for (int i = 0; i < Y; ++i) {
        if (X * 2 > X + 1000) {
            X *= 2;
        } else {
            X += 1000;
        }
    }
    return X;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int X;
        int Y;
        scanf("%d %d", &X, &Y);
        int result = M(X, Y);
        printf("%d\n", result);
    }
 
}
