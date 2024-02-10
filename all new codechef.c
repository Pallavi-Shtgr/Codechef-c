// Chef would like to test the performance of the new judging system.
// Chef has some code for an older task, which he knows ran in 
// X milliseconds on the old judging server.On resubmitting the code to the new judging server, it ran in Y milliseconds.
// Which judging system is faster? Input Format
// The only line of input will contain two space-separated integers X and Y — the runtime on the old judging system, and the runtime on the new judging system.

#include <stdio.h>
#define input(A,N,a) for(j=a;j<=N-1+a;j++) scanf("%d",&A[j]);

int main(void)
{
    int T,i,X,Y,N,j;
    
    scanf("%d %d",&X,&Y);
    if(X<Y) printf("Old");
    else if(X>Y) printf("New");
    else printf("Same");
	return 0;
}


