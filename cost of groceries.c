// Chef visited a grocery store for fresh supplies. There are N items in the store where the ℎ
// i thitem has a freshness value 
// A i and cost B 
// i Chef has decided to purchase all the items having a freshness value greater than equal to X. Find the total cost of the groceries Chef buys.

#include <stdio.h>

int main() 
{
	int i,t,n,x,cost,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	
	{
	    cost=0;
	    scanf("%d %d",&n,&x);
	    int A[n],B[n];
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&A[j]);
	        if(A[j]>=x)
	        A[j]=1;
	        else
	        A[j]=0;
	    }
	    
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&B[j]);
	        if(A[j]==1)
	        cost=cost+B[j];
	    }
	    
	    printf("%d\n",cost);
	    
	}

}
