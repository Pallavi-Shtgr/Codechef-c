// There are three friends and a total of  N candies. There will be a fight amongst the friends if all of them do not get the same number of candies. Chef wants to divide all the candies such that there is no fight. Find whether such distribution is possible.


#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    if(n%3==0)
	    { printf("yes\n");
	    
	}
	else printf("no\n");
}
}

