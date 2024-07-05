// Chef heard that four-leaf clovers bring good luck, so he went looking for one.
// In his search, Chef found N clovers in total. Out of them, exactly one was a four-leaf clover, and all the others were three-leaf clovers.
// How many leaves did Chef collect in total, across all the clovers?

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int total = (N - 1) * 3 + 4;
    printf("%d\n", total);
    return 0;
}
