// Extreme Basketball
// Alice and Bob are playing a game of basketball against each other, one-versus-one.
// Currently, Alice has A points, and Bob has B points.
// Each shot of a player can score either 2 or 3 points.
// Alice isn't just out to win - she wants to win in dominant fashion.
// Alice believes that her win is dominant if she ends the game with at least 10 points more than Bob.
// If Alice is able to prevent Bob from scoring any more points, what's the minimum number of shots she further needs to get a dominant victory?

#include <stdio.h>

int minShotsForDominant(int a, int b) {
    int diff = a - b; 
    if (diff >= 10) {
        return 0;
    } else {
        int shots = 0;
        if (diff >= 8) {
            shots = 1; 
        } else {
            int remaining = 10 - diff; 
            if (remaining % 3 == 0) {
                shots = remaining / 3;
            } else {
                shots = remaining / 3 + 1; 
            }
        }
        return shots;
    }
}

int main() {
    int t; 
    scanf("%d", &t); 

    while (t--) {
        int a, b; 
        scanf("%d %d", &a, &b);
        int shots = minShotsForDominant(a, b);
        printf("%d\n", shots);
    }

    return 0;
}
