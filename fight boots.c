// FightBots
// Alice and Bob are competing in the finals of a FightBots tournament.The match takes place on the 2-D plane.
// Alice's robot starts at position (0,0)
// (0,0), while Bob's starts at position (X,Y). It is guaranteed that (X,Y)≠(0,0)
// (X,Y)=(0,0).

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,y,a=0,b=0,diff;
        scanf("%d%d%d",&n,&x,&y);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                a--;
            }
            else if(s[i]=='R')
            {
                a++;
            }
            else if(s[i]=='U')
            {
                b++;
            }
            else
            {
                b--;
            }
  
        }

        diff=abs(a-x)+abs(b-y);
        if(diff==n)
        {
            printf("Yes\n");
        }
        else if(diff<n)
        {
            if((n-diff)%2==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else
        {
            printf("No\n");
        }
    }

}

