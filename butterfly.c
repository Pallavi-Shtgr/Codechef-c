Butterfly
In your garden, there are exactly 
R
R red butterflies, 
G
G green butterflies and 
B
B blue butterflies.
There are also exactly 
R
R red flowers, 
G
G green flowers and 
B
B blue flowers.

Determine whether it is possible for every butterfly to feed on exactly one flower, such that:

No two butterflies feed on the same flower; and
Each butterfly feeds on a flower whose color is different from its own color.
For example, a red butterfly can only feed on green and blue flowers, not red flowers.


#include <stdio.h>
int max(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    int t;

    scanf("%d", &t);

    while (t--) {
        int r, g, b;
        scanf("%d %d %d", &r, &g, &b);
    
        int max_color = max(r, g, b);
    
        if (max_color <= (r + g + b) - max_color) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}

