// Calorie Intake
// Chef has decided that he will cut down on his calorie intake. He will eat atmost  calories in a day
// Today, he already ate Y sweets, each having Z calories. Find out how many more calories he can eat. If he has already exceeded his limit, output −1.
// Input Format
// The first and only line of input contains 
// 3
// 3 integers - X,Y and Z.
// Output Format
// For each test case, output on a new line
//   −1 if Chef has exceeded his calorie limit
// The amount of calories Chef can still eat if he has not exceeded it

#include <stdio.h>

int main() {
	// your code goes here
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(b*c<a)
	printf("%d",a-b*c);
	else if(b*c>a)
	printf("-1\n");
	else
	printf("0\n");

}

