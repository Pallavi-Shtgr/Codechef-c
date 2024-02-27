
// Tyre problem
// There are N bikes and M cars on the road.Each bike has 2 tyres.Each car has 4 tyres.
// Find the total number of tyres on the road.

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d%d",&n,&m);
	    printf("%d\n",((n*2)+(m*4)));
	}
	}


