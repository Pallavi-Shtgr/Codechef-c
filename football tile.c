
// Football Ties
// According to the Premier League rules, the winner of a game gets 3 points while the loser of a game gets 0 points. On the other hand, if there is a draw, both sides get 1 point each.

// Two teams A and B played several games against each other and finally ended up with the score of X and Y points respectively.
// We do not know how many games were played. Find the minimum possible number of draws that may have happened.
// It is guaranteed that there is at least one way to end up with the final score being 
// X and Y points respectively.
// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case contains X and Y - the final scores of teams 
// A and B respectively.
// Output Format
// For each test case, output on a new line, the minimum number of draws that could have happened.
// Constraints
// 1≤T≤75 0≤𝑋,
// 0≤X,Y≤14
// There is at least 1 way to obtain the final score X and 𝑌.

#include <stdio.h>

int main() {
    int T, X, Y;
    
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d %d", &X, &Y);
 
        int minNum = 0;

        while (X > 0 && Y > 0)
        
        {
            if (X % 3 == 0 && Y % 3 == 0)
            break;
            
            if (X % 3 != 0 && Y % 3 != 0) {
                minNum++;
                X--;
                Y--;
            } 
            
            else if (X % 3 != 0) {
                X--;
            } else if (Y % 3 != 0) {
                Y--;
            }
        }
        
        printf("%d\n", minNum);
    }
    
    return 0;
}
