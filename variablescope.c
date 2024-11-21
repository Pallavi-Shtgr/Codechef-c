#include <stdio.h>

int main() {
    int num = 5;
    {
        int num = 10;
        printf("%d ", num);
    }
    printf("%d", num);
    return 0;
}
