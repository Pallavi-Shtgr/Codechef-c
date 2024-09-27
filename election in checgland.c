// Elections in Chefland There are 101 citizens in Chefland. It is election time in Chefland and 3 parties, 
// A,B and C are contesting the elections. Party 
// A receives X votes, party X B votes, and party C receives votes.
// The constitution of Chefland requires a particular party to receive a clear majority to form the government. A party is said to have a clear majority if it receives strictly greater than 
// 50 votes.
// If any party has a clear majority, print the winning party (A, B or C). Otherwise, print NOTA.

#include<stdio.h>
int main()

{
    int a,b,c,t;

    scanf("%d",&t);

    while(t)

    {
        scanf("%d %d %d",&a,&b,&c);

        if ( a>50 )

        {
            printf("A\n");
        }

        else if ( b>50 )

        {
            printf("B\n");
        }

        else if ( c>50 )

        {
            printf("C\n");
        }

        
        else printf("NOTA\n");


        t--;
    }

    return 0;
}
