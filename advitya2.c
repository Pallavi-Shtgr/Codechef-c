// The tech fest of IIT Ropar, Advitiya, has a talent show as part of the festivities.The preliminary round of the talent show has participants being evaluated by 
// 5 judges, and only those participants whose performance was liked by at least 4 judges will qualify for the next round.
// Anuj participated in the talent show, and now wants to know if he'll qualify or not.You are given the responses of all 5 judges — help Anuj decide whether he qualified!
// Each judge's response is given to you as a binary integer, where:
// 0 means the judge didn't like Anuj's performance.1 means the judge liked Anuj's performance.

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	 
	    int likes = 0;
        for (int i = 0; i < 5; i++) {
            int r;
            scanf("%d", &r);
            likes += r;
        }

        if (likes >= 4)
        {
            printf("YES\n");
        } 
        else {
            printf("NO\n");
        }
    }

    return 0;
}

