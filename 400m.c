// Alice, Bob, and Charlie participated in a 
// 400
// 400-metre race.
// The time taken by Alice, Bob, and Charlie to complete the race was X,Y, and Z seconds respectively. Note that X,Y, and Z are distinct.
// Determine the person having the highest average speed in the race.
#include <stdio.h>

int main(void) 
{
	int T,A,B,C;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d %d",&A,&B,&C);
	    if(A!=B && B!=C && C!=A)
	    {
	        if(A<B && A<C)
	        {
	            printf("\nALICE");
	        }
	        else if(B<C)
	        {
	            printf("\nBOB");
	        }
	        else
	        {
	            printf("\nCHARLIE");
	        }
	    }
	}
	return 0;
}

