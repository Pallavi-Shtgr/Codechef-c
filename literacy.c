// You are given two positive integers P and L denoting the total population of Chefland and the total number of literate people in Chefland.
// Find whether the literacy rate of Chefland is greater than or equal to 
// 75%.
// Note that the literacy rate is calculated as  P/L ×100%


#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int P, L;
        scanf("%d %d", &P, &L);

        int A = L * 100 / P;
        
        if (A >= 75) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}


