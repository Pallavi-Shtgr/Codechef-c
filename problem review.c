// Om Khangat has come up with a problem that he thinks can be used in a CodeChef contest, and has submitted his proposal for review.
// CodeChef's review panel has N judges, each of whom will give Om's problem a point value between 
// 1 and 10, denoting how good they think it is (1 being the lowest, and 1010 the highest).A problem is considered good if and only if every judge gives it a score that's strictly greater than 4
// 4.
// You know the point values given by each judge to Om's problem. Can you tell whether his problem is good?

#include <stdio.h>

char* is_good_problem(int scores[], int n) {
    
    for (int i = 0; i < n; i++) {
        if (scores[i] <= 4) {
            return "NO";
        }
    }
    return "YES";
}
