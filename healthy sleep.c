// At IIITA, students have diverse sleep patterns, and there isn't a fixed duration for their daily sleep.
// Typical scientific recommendations suggest that the duration of a healthy sleep is 8 hours per day.
// As you begin your journey as a programmer, you've been tasked by the renowned programmer of IIITA, Pavitra Pandey, with your first project.
// Your assignment is to write a program that takes as input the number of hours a student sleeps per day, and judges how good their sleep schedule is. Specifically,
// If the student sleeps for strictly less than 8 hours, the program should output LESS.If the student sleeps for exactly 8 hours, the program should output PERFECT.
// If the student sleeps for strictly more than 8 hours, the program should output MORE.

#include <stdio.h>

int main(void) {
int h;
scanf("%d",&h);
if(h<8)
{
    printf("LESS");;
}
else if(h>8){
    
 printf("MORE");
}
else printf("PERFECT");

}

