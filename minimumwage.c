// The minimum wage in Chefland is 11 dollars per hour.
// Given that Chef earns 
// X dollars per hour, find whether his income is strictly above the minimum wage.

#include <stdio.h>

int main(void) {
    int x;
    scanf("%d",&x);
    int min=11;
   
    if(x>min){
        printf("yes");
    }
    else printf("no");

}


