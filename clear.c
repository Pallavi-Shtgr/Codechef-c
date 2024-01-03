// Chef classifies a day to be either rainy, cloudy, or clear.
// In a particular week, Chef finds  X days to be rainy and Y days to be cloudy.
// Find the number of clear days in the week.

#include <stdio.h>

int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d", (7-x-y));
	
}
