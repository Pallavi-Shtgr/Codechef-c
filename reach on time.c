// Reach on Time
// Chef has recently moved into an apartment. It takes 30 minutes for Chef to reach office from the apartment.
// Chef left for the office X minutes before Chef was supposed to reach. Determine whether or not Chef will be able to reach on time.

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if(x>=30){
	        printf("YES\n");
	    }
	    else
	    printf("NO\n");
	}

}

