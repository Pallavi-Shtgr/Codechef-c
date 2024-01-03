// START115D Problem
// Codechef rounds are held on every Wednesday now, and not on any other days.

// You are wondering whether there is a Codechef round today. You know it is the 
// N thday of the week (Sunday is  1 1st, Monday is 2 2nd, Tuesday is 3 3rd, Wednesday is 4 4th and so on).
// Can you tell whether there is a Codechef round today?

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    if(n==4){
        printf("yes");
    }
    else printf("no");

}

