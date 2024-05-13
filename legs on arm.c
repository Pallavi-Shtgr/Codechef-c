// Legs on a Farm
// After a long and fulfilling career, Chef has decided to retire to a farm out in the countryside.
// This farm has several cows and chickens, but Chef doesn't know exactly how many of each there are — he can only see that there are N legs in total across all the animals.
// Note that each cow has 4 legs and each chicken has 2 legs, and it is guaranteed that N is even.With N legs in total, what's the minimum possible number of animals that can be present on the farm?
#include <stdio.h>

int main() {
    int T;
    scanf("%d", & T);

    while (T--) {
        int N;
        scanf("%d", & N);

        int a;
        if (N % 4 == 0)
            a = N / 4;
        else
            a = N / 4 + 1;

        printf("%d\n", a);
    }

    return 0;
}