// Chef's dog binary hears frequencies starting from 67 Hertz to 45000 Hertz (both inclusive).
// If Chef's commands have a frequency of X Hertz, find whether binary can hear them or not.

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        if(x<67 || x>45000)
        {
            printf("NO\n");
        }
        else printf("yes\n");
    }
	
}

