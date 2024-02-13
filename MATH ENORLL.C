MATH1 Enrolment
For the upcoming semester, the admins of your university decided to keep a total of 
X seats for the MATH-1 course. A student interest survey was conducted by the admins and it was found that 
Y students were interested in taking up the MATH-1 course

#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b;
	scanf("%d",&n);
	while(n--){
	    scanf("%d%d",&a,&b);
	    if(a<=b){
	        printf("%d\n",b-a);
	    }
	    else
	    printf("0\n");
	}
	return 0;
}
