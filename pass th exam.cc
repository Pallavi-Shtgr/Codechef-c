// Chef appeared for an exam consisting of 3 sections. Each section is worth 100 marks.
// Chef scored A marks in Section 1, B marks in section 2, and C marks in section 3.Chef passes the exam if both of the following conditions satisfy:
// Total score of Chef is≥100;Score of each section ≥10.Determine whether Chef passes the exam or not.

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