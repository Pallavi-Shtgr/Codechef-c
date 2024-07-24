// Considering the new budget, Chef decided to keep all his money in a savings account.
// Chef has X income sources where he gets Y rupees from each source. However, due to bank restrictions, Chef can keep at most Z rupees in the savings account.

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        int total_income = X * Y;

        if (total_income <= Z) {
            printf("0\n");
        } else {
            int excess = total_income - Z;
            int sources_to_reduce = (excess + Y - 1) / Y; 
            printf("%d\n", sources_to_reduce);
        }
    }

    return 0;
}
