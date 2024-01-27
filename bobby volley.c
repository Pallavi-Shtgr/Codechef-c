// Alice and Bob are playing a game of Blobby Volley. In this game, in each turn, one player is the server and the other player is the receiver. Initially, Alice is the server, and Bob is the receiver.
// If the server wins the point in this turn, their score increases by 1, and they remain as the server for the next turn.
// But if the receiver wins the point in this turn, their score does not increase. But they become the server in the next turn.
// In other words, your score increases only when you win a point when you are the server.
// Please see the Sample Inputs and Explanation for more detailed explanation.They start with a score of 
// 0 each, and play N turns. The winner of each of those hands is given to you as a string consisting of 'A's and 'B's. 'A' denoting that Alice won that point, and 'B' denoting that Bob won that point. Your job is the find the score of both of them after the 
// N turns.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a=0, b=0;
        scanf("%d",&n);
        char server='A',x[n];
        scanf("%s",x);
        
        for(int i=0;i<n;i++)
        {
            if(x[i]=='A')
            {
                if(server=='A')
                {
                    a++;
                }
                else
                {
                    server='A';
                }
                }
                else if(x[i]=='B')
                {
                    if(server=='B')
                    {
                        b++;
                    }
                    else
                    {
                        server='B';
                    }
                }
            }
        
        printf("%d %d\n",a,b);
        
    }
        

    return 0;
}
    
        
