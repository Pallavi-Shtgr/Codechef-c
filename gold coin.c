// Chef and Chefina are competing against each other in a football game where the player scoring the maximum goals, wins.
// It is known that the winner of the game receives A gold coins while the loser receives B gold coins.
// Given that Chef scored X goals and Chefina scored Y goals (X≠Y)
// (X=Y), find the number of coins Chef would receive.

#include <stdio.h>

int main(void) {
     int a,b,x,y;
     scanf("%d%d%d%d",&a,&b,&x,&y);
     if (x>y)
     printf("%d",a);
     else 
     printf("%d",b);
     

}

