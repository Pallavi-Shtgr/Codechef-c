
// Podium Finish
// Chef got his dream seat in F1 and secured a 3rdplace in his debut race. He now wants to know the time gap between him and the winner of the race.
// You are his chief engineer and you only know the time gap between Chef and the runner up of the race, given as 
// A seconds, and the time gap between the runner up and the winner of the race, given as B seconds.
// Please calculate and inform Chef about the time gap between him and the winner of the race.

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int A,B;
	    	scanf("%d%d",&A,&B);
	    	printf("%d\n",A+B); 
	}
	return 0;
}

