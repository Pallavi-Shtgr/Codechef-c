// Nearly Equal
// The Hamming distance between two pairs of strings of equal length is defined to be the number of positions at which they contain different characters.
// For example, the Hamming distance between strings "there" and "shire" is 
// 2 (their first and third characters are different), while the Hamming distance between "order"and  "chaos" is 5, since they differ at every position.
// Chef has a string A of length N.
// Chef's favorite string is B, which has length M. It is known that M≤N.
// Find the minimum Hamming distance between B and some contiguous substring of A that has length M.

#include <stdio.h>
#include <string.h>

int hammingDistance(char *str1, char *str2, int length) {
    int distance = 0;
    for (int i = 0; i < length; i++) {
        if (str1[i] != str2[i]) {
            distance++;
        }
    }
    return distance;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);
        
        char A[N + 1];
        char B[M + 1];
        
        scanf("%s", A);
        scanf("%s", B);
        
        int minHamming = M;

        for (int i = 0; i <= N - M; i++) {
            int current = hammingDistance(A + i, B, M);
            if (current< minHamming) {
                minHamming = current;
            }
        }

        printf("%d\n", minHamming);
    }

    return 0;
}

