// Chef knows that a starters will be organised on next Wednesday, i.e., Valentine's day.Since it is Starters 120 today, starters 
// 121 is likely to be organised on Valentine's day.Given an integer 
// N, find whether starters N is likely to be organised on Valentine's day.

#include <stdio.h>

int main() {
    int N;
 
    scanf("%d", &N);
  
    if (N == 121)
        printf("Likely\n");
    else
        printf("Unlikely\n");

    return 0;
}
