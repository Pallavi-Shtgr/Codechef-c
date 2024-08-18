// Apples and oranges
// Rushitote went to a programming contest to distribute apples and oranges to the contestants.
// He has N apples and M oranges, which need to be divided equally amongst the contestants. Find the maximum possible number of contestants such that:
// Every contestant gets an equal number of apples; and
// Every contestant gets an equal number of oranges.

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
{  int a,b;
scanf("%d%d",&a,&b);
while(a!=b)
{
	if(a>b)
		a=a-b;
	if(a<b)
		b=b-a;
}
printf("%d\n",a);
	

}
	
	return 0;
}