// Chef is watching TV. The current volume of the TV is X. Pressing the volume up button of the TV remote increases the volume by 1 while pressing the volume down button decreases the volume by 
// 1. Chef wants to change the volume from 
// X to Y. Find the minimum number of button presses required to do so.

#include <stdio.h>

int main() {
	
	
	int a,b,n,t;
	
	scanf("%d",&t);
	
	for(n=0;n<t;n++){
	    scanf("%d %d",&a,&b);
	    printf("%d\n", abs(b-a));
	}
	
	
}


