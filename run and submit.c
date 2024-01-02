Outputs the integer which is greater than N by 1
Click on Run to check the result on custom inputs
Click on Submit to check the final verdict


#include <stdio.h>

int main() {
    int t;
    int n;
    int i = 1;
    scanf("%d\n", &t );
    while ( i <= t) {
        scanf("%d", &n);
        printf("%d\n", n+1 );
        i = i+1;
    }
    