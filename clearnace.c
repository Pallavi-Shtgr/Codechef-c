// Chef's favorite clothing store is holding a clearance sale: for every 2
// 2 t-shirts bought, you receive a third one for free! Chef bought and paid for  X t-shirts from the shop. It is guaranteed that  X is even.
// How many t-shirts did Chef get from the shop in total?

#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	scanf("%d",&x);
	int m= x/2;
	printf("%d",x+m);
}