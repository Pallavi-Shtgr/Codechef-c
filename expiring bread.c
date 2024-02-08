// Expiring Bread
// Eikooc loves bread. She has N loaves of bread, all of which expire after exactly 
// M days. She can eat upto K loaves of bread in a day. Can she eat all the loaves of bread before they expire?

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