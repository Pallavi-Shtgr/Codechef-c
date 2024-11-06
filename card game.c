// Card Game
// There is a set of N cards where each card is numbered 
// 1 to N.

// Chef throws a card numbered X.
// Find the number of ways, Chefina can chose a card from the remaining deck such that, the sum of chosen card and X is even.
  
// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case consists of two space-separated integers N and X — the number of cards and the card thrown by Chef.
  
// Output Format
// For each test case, output on a new line, the number of ways, Chefina can chose a card from the remaining deck such that, the sum of chosen card and 
// X
// X is even.

  #include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);

        int even = N / 2;
        int odd = N - even;
        int result;

        if (X % 2 == 0) { 
            result =even - 1;
        }
        else
        {  
            result =odd - 1;
        }

        printf("%d\n", result);
    }

    return 0;
}
