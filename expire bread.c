// Eikooc loves bread. She has N loaves of bread, all of which expire after exactly 
// M days. She can eat upto 
// K loaves of bread in a day. Can she eat all the loaves of bread before they expire?

// Input Format
// The first line contains a single integer �T - the number of test cases. Then the test cases follow.
// Each test case consists of a single line containing three integers N, M and K - the number of loaves of bread Eikooc has, the number of days after which all the breads will expire and the number of loaves of bread Eikooc can eat in a day.


#include <stdio.h>

int main() {

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m,k;
	    scanf("%d%d%d",&n,&m,&k);
	    
	    if(n<=(m*k)){
	    printf("yes");
	    }
	    else
	    printf("no");
	    
	    printf("\n");
	}

}