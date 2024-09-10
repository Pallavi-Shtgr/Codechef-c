// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// The first and only line of each test case will contain three space-separated integers A, B, and X — the length of the red rectangle, the width of the red rectangle, and the length of the edge of the blue square.
// Output Format
// For each test case, output on a new line the minimum cost required to make the area of the blue square greater than or equal to the area of the red rectangle

#include<stdio.h>
int main(){
    int T,A,B,X;
     scanf("%d",&T);
     while(T-->0){
         scanf("%d %d %d",&A,&B,&X);
         if(A*B <= X*X)
         printf("0\n");
         else if((1 * B <= X*X) || (A * 1 <= X * X))
         printf("1\n");
         else if(1 * 1 <= X * X)
         printf("2\n");
     }
    
    return 0;
}