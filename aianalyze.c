// Input Format
// The only line of input will contain a single integer C, denoting the number of characters in the code.

// Output Format
// Output a single line which contains either "Yes", if the feature is available on this code, or "No", if not.

#include <stdio.h>

int main(void) {
	int c;
	scanf("%d",&c);
	if(c<=1000){
	    
	    printf("YES\n");
	}
	else{
	    printf("NO\n");
	}
	return 0;
}

