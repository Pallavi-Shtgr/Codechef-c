// On the occasion of Yoga Day, the only yoga instructor in Chefland, Chef, has received numerous queries.
// Chef has managed to free up 
// 𝑁
// N hours from his busy schedule to conduct yoga sessions. There are two types of sessions that Chef offers:
// Type 1 session, which lasts 1 hour, and earns Chef X rupees.
// Type 2 session, which lasts 2 hours, and earns Chef  (Y>X) rupees.

// Find the maximum amount of money Chef can earn in N hours.

#include <stdio.h>

int maxEarn(int N, int X, int Y) {

    int maxEarn = 0;
  
    int maxType2Sessions = N / 2;

    for (int numType2 = 0; numType2 <= maxType2Sessions; ++numType2) {
        int numType1 = N - 2 * numType2;
        int earn = numType1 * X + numType2 * Y;
        if (earn > maxEarn) {
            maxEarn = earn;
        }
    }
    
    return maxEarn;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        
        int result = maxEarn(N, X, Y);
        printf("%d\n", result);
    }
    
    return 0;
}
