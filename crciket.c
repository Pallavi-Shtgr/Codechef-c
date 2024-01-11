// In a cricket match, the retiring of three batsmen with three consecutive balls is termed as a hattrick.

// Let 
// A,B,C,D,E, and F denote the batsman's score for each ball in order in an over.Each of these variables can be an integer less than equal to 6 denoting the runs scored by the batsman, or W denoting a wicket.
// Find whether there was a hattrick in this over.


#include <stdio.h>
int main() {
    
    int t;
    scanf("%d", &t);

    while (t--) {
     
        int s[6];
        for (int i = 0; i < 6; i++) {
            char result;
            scanf(" %c", &result); 

            if (result == 'W') {
                s[i] = 10; 
            } else {
                s[i] = result - '0'; 
            }
        }

        
        if ((s[0] == 10 && s[1] == 10 && s[2] == 10) ||
            (s[1] == 10 && s[2] == 10 && s[3] == 10) ||
            (s[2] == 10 && s[3] == 10 && s[4] == 10) ||
            (s[3] == 10 && s[4] == 10 && s[5] == 10)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}