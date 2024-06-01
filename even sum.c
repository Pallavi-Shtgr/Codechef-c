// Even Sum Subarray
// Given an array A of size N, find the size of the largest subarray of 𝐴
// A which has an even sum.For example, for the array 
// [2,1,2][2,1,2] the answer is just 11 as the largest subarray with an even sum is [2][2].
// Note that a subarray is a contiguous part of an array. For the array 
// [1,3,2][1,3,2], some possible subarrays are [1],[2],[1,3],[1,3,2[1],[2],[1,3],[1,3,2]. However,[1,2] [1,2] is not a subarray for this array.

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
