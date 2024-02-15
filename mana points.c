// Mana Points
// Chef is playing a mobile game. In the game, Chef's character Chefario can perform special attacks. However, one special attack costsX mana points to Chefario.
// If Chefario currently has Y mana points, determine the maximum number of special attacks he can perform.

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0)
    {
        int x,y,a;
        scanf("%d%d",&x,&y);
        a=y/x;
        printf("%d\n",a);
    }
}
