// Bull or Bear
// Chef is on his way to become the new big bull of the stock market but is a bit weak at calculating whether he made a profit or a loss on his deal.
// Given that Chef bought the stock at value X and sold it at value 
// Y. Help him calculate whether he made a profit, loss, or was it a neutral deal.


#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d%d%d",&a,&b,&c);
	    d=a+b+c;
	    if(d>=100&&a>=10&&b>=10&&c>=10)
	    printf("pass\n");
	    else
	    printf("fail\n");
	}
	return 0;
}