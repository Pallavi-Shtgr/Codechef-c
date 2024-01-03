// Chef has started studying for the upcoming test. The textbook has 
// N pages in total. Chef wants to read at most  X pages a day for  Y days.
// Find out whether it is possible for Chef to complete the whole book.


#include <stdio.h>

int main(){
		int t,x,i,y,n,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d", &n, &x, &y);
	    if(t>=1 && t<=1000 && n>=1 && n<=100 && x>=1 && x<=10 && y>=1 && y<=10)
	    {
	        k=x*y;
	       if(n<=k)
	       {
	           printf("YES\n");
	       }
	       else{
	           printf("NO\n");
	       }
	       
	    }
	}
	
}


