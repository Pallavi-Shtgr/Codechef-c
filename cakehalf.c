Let Me Eat Cake!
Alice and Bob both bought a full cake each.
Alice's cake has A slices, and Bob's cake has B slices.
Alice will be unhappy if she has strictly less slices than Bob does. Similarly, Bob will be unhappy if he has strictly less slices than Alice does.
Charlie doesn't want either of his friends to be unhappy, so he proposes a solution: while either Alice or Bob are unhappy, he will attempt to restore happiness by eating half the remaining slices (rounded up) of whoever has more of them.

  #include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B); 
        int total_eaten = 0;

        while (A != B) {
            if (A > B) {
                int eat = (A + 1) / 2; 
                A -= eat; 
                total_eaten += eat;
            } else {
                int eat = (B + 1) / 2;  
                B -= eat; 
                total_eaten += eat;
            }
        }

        printf("%d\n", total_eaten);  
    }

    return 0;
}
