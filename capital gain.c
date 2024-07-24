// The annual budget for ChefLand has been announced and people are concerned about the modification in capital gain tax.
// Given that the capital gain tax changed from X% to Y%, find whether it has INCREASED, DECREASED, or remained the SAME.

#include<stdio.h>
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    if (X < Y) {
        printf("INCREASED\n");
    } else if (X > Y) {
        printf("DECREASED\n");
    } else {
        printf("SAME\n");
    }

    return 0;
}
