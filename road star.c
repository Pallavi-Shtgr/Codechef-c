// Reach 5 Star
// Chef loves giving contests on Codechef. Chef wants to becomes 5 star rated. Currently his rating on Codechef is X.
// After today's contest, his rating will increase by Y. Note that Y can be negative which means that Chef's rating will decrease.
// Find whether Chef will become 5 star rated after today's contest.
// Chef will be considered 5 star rated if his rating is greater than or equal to 2000.
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, l, r;
        scanf("%d %d %d", &N, &l, &r);

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int maxHappiness = 0, minHappiness = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] < l) {
                minHappiness++;
            } else if (A[i] > r) {
                maxHappiness++;
            }
        }

        printf("%d %d\n", maxHappiness, minHappiness);
    }

    return 0;
}
