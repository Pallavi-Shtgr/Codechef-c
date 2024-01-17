#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x >= 1973 && x <= 2024) 
    {
       
        printf("K%02d\n", x % 100);
    }

 
}
