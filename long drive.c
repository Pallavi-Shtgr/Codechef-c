// Long Drive
// Chef and Chefina are out on a long road trip.The average speed of the car after 10 hours of driving is X kilometres per hour.
// Chef wants to achieve an average speed of Y kilometres per hour. Given that he can travel a maximum of 100 kilometres in one hour, find the minimum number of additional integer hours required for him to reach the target average speed.


#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int distance = X * 10;
        int addition= 0;
        while (1) {
            addition++;
            int total_hours = 10 + addition;
            int total_distance =distance + addition* 100;
            if (total_distance / total_hours >= Y) {
                printf("%d\n", addition);
                break;
            }
        }
    }

    return 0;

}
