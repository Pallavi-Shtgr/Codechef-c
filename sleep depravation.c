// Sleep deprivation
// A person is said to be sleep deprived if he slept strictly less than 7 hours in a day.
// Chef was only able to sleep X hours yesterday. Determine if he is sleep deprived or not.

#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if(x<7)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}

}