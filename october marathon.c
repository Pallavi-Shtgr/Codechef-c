// Chef organised a 30 kilometres marathon in Chefland.
// The participants receive medals on completing the marathon as following:
// If the total time taken is less than 
// 3 hours, they receive a GOLD medal.
// If the total time taken is greater than equal to 
// 3 hours but less than 
// 6 hours, they receive a SILVER medal.
// If the total time taken is greater than equal to 
// 6 hours, they receive a BRONZE medal.
// Chefina participated in the marathon and completed it in 
// X hours. Which medal would she receive?


#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x<3)
	{
	    printf("GOLD\n");
	}
	else if(x>=3 && x<6)
	{
	    printf("SILVER\n");
	}
	else
	{
	    printf("BRONZE\n");
	}
}

