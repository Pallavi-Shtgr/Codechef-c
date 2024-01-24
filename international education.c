// On the occasion of International Education Day, a fair is held in Chefland.Both Chef and Chefina have set up their stalls.
// Chef sells each item at his stall for A rupees and Chefina sells each item at her store for 
// B rupees.If both of them sell exactly 
// C items, find the maximum amount in sales amongst Chef and Chefina

#include <stdio.h>

int main(void) {
	int A,B,C;

    scanf("%d %d %d %d %d", &A, &B, &C);
    if( A*C > B*C)
    {
        printf(" %d", (A*C));
    }
    else printf("%d",(B*C));
}