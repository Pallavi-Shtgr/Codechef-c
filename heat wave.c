// Heat Wave
// During a scorching heat wave, the temperature in a Chefland reached a record high of X degrees.
// The next day, the recorded temperature was Y degrees. Find whether this was a new record high or not.
// Input Format
// The first and only line of input will contain two space separated integers X and Y denoting the highest recorded temperature and the temperature on a given day respectively.

#include <stdio.h>
int main(void) {
    int x,y;
    scanf("%d%d",&x,&y);
     if (y > x) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;

}
