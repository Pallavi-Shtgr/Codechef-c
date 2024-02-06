// In Chefland, a tax of rupees 10 is deducted if the total income is strictly greater than rupees 
// 100.
// Given that total income is X rupees, find out how much money you get.

#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a>100)
        {
            printf("%d\n",a-10);
        }
        else
        {
            printf("%d\n",a);
        }
    }
 
}

