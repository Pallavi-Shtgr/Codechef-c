// Input Format
// The first line of input will contain a single integer 
// 𝑇
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains a single integer 
// 𝑁
// N — the size of the array.
// Output Format
// For each test case, output on a new line, the size of the largest subarray with even sum.

#include <stdio.h>

int largestEvenSumSubarray(int A[], int N) {
    int maxSize = 0;

    for (int start = 0; start < N; ++start) {
        int sum = 0;
        for (int end = start; end < N; ++end) {
            sum += A[end];
            if (sum % 2 == 0) {
                int currentSize = end - start + 1;
                if (currentSize > maxSize) {
                    maxSize = currentSize;
                }
            }
        }
    }

    return maxSize;
}

int main() {
    int T;

    scanf("%d", &T);

    for (int t = 0; t < T; ++t) {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; ++i) {
            scanf("%d", &A[i]);
        }

        printf("%d\n", largestEvenSumSubarray(A, N));
    }

    return 0;
}