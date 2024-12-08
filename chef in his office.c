// Recently Chef joined a new company. In this company, the employees have to work for X hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for Y hours 
// (Y<X) on Friday. Saturdays and Sundays are holidays.
// Determine the total number of working hours in one week.
// Input Format
// The first line contains a single integer 
// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two space-separated integers 
// X and Y — the number of working hours on each day from Monday to Thursday and the number of working hours on Friday respectively.
// Output Format
// For each test case, output the total number of working hours in one week.

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d \n",((4*x)+y));
        t--;
    }
	// your code goes here
	return 0;
}
