// Chef has finally decided to complete all of his pending assignments.
// There are X assignments where each assignment takes Y minutes to complete.
// Find whether Chef would be able to complete all the assignments in Z days.

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
      z=z*60*24;
        if(x*y<=z){
            printf("YES\n");
        }
        else printf("NO\n");
        
    }
    }

