// RestroPay

// Tanny and Purgi are two very good friends. They went to a nice restaurant for some good dinner after a long taxing week. 
// Input Format
// The first line will have 3 integers n,mc
// n,m,c separated by a space.
// The second and third line will contain the values of the banknotes Tanny and Purgi (separated by a space) respectively.

// Output Format
// YES if it is possible to pay the bill using just 2 banknotes ( one from Purgi and one from Tanny). Else output NO.

#include <stdio.h>

int main(void) {
    long long int sum;
    int i,j,size1,size2,flag=2;
    scanf("%d %d %lld",&size1,&size2,&sum);
    long long int a[size1],b[size2];
    for(i=0;i<size1;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<size2;i++)
    {
        scanf("%lld",&b[i]);
    }
    for(i=0;i<size1;i++)
    {
        if(a[i]<sum)
        {
            for(j=0;j<size2;j++)
            {
                if(sum-a[i]==b[j])
                {
                    flag=1;
                }
            }
        }
    }
    if(flag==1)
    printf("YES\n");
    else 
    printf("NO\n");
	// your code goes here
	return 0;
}


