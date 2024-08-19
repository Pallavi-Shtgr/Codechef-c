// Chef is playing a certain video game that requires him to collect Monsters, and use them to fight against other Monsters.
// Chef's favorite Monster has an attack stat of X, and is fighting against another monster whose health stat is H. The fight proceeds in turns: each turn, Chef's Monster does X damage to its opponent.However, Chef's Monster has the ability Slow Start, which halves its attack for the first five turns.
// That is, for the first five turns, the damage done to the opponent is 
// X2 X and not X.

#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, H; 
        scanf("%d %d", &X, &H);

      
        int turns = 0;
        while (H > 0) {
            if (turns < 5) {
                H -= X / 2;
            } else {
                H -= X;
            }
            turns++;
        }

        printf("%d\n", turns);
    }

    return 0;
}
