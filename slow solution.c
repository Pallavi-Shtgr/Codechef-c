// Slow Solution
// Chef is trying to solve a problem having T test cases, where, for each test case he is given a single integer N.
// Chef has an algorithm which takes exactly N 2 iterations for a test case with value N.

#include <stdio.h>

int main(void) {
	// your code goes here
	int T,t,te,maxT,maxN,sumN;
	scanf("%d",&T);
	while(T--) 
	{
	    scanf("%d %d %d",&maxT,&maxN,&sumN);
	    t=0;te=1;
	    while(te<=maxT&&sumN!=0)
	    {
	        if(sumN>=maxN)
	        {
	            t=t+maxN*maxN;
	            sumN=sumN-maxN;
	        }
	        else
	        {
	            t=t+sumN*sumN;
	            sumN=sumN-sumN;
	        }
	        te++;
	    }
	    printf("\n%d",t);
	}
	return 0;
}
