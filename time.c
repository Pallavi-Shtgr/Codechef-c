// A sorting algorithm A is said to have more time complexity than a sorting algorithm 
// B if it uses more number of comparisons for sorting the same array than algorithm B.
// Given that algorithm A uses X comparisons to sort an array and algorithm B uses Y comparisons to sort the same array, find whether algorithm 
// A has more time complexity.

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	int x,y;
	scanf("%d%d",&x,&y);
	if(x>y){
	    printf("YES\n");
	}
	else printf("NO\n");
}
}