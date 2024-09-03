// You are solving a problem whose correct answer is the integer Y.
// The answer you obtained, however, is the integer X.
// Your answer will be considered correct if the difference between X and Y is at most K.
// In other words, your answer is considered correct if and only if:

#include <stdio.h>

int main(void) {
	// your code goes here
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(abs(x-y)<=z){
        printf("Yes");
    }
    else{
        printf("No");
    }
}

