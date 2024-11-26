// Write a program which does the following
// Find the area of a square of side 14cm.
// Also, find the cost of painting the square if the paint costs is $7/cm2
// Initialize the following variables in your program and use them in the computation
// s to store the length of side the square
// area to store the area of the square
// cost to store the cost of painting


#include <stdio.h>

int main() {
  int s = 14;
  int area = s * s;
  int cost = area * 7;
  printf("%d\n", area);     //area and cost have to be output on separate lines
  printf("%d$",cost);             //output the $ character after cost without any space
  
  
}
