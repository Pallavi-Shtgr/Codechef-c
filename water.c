// The output YES if Chef followed the doctor's advice of drinking at least  2000 ml of water.
//  Otherwise, output NO.

#include <stdio.h>

int main(void) {

  int u;
  scanf("%d", &u);
  while(u--)
  {
      int r;
      scanf("%d", &r);
      if(r>=2000)
      printf("YES\n");
      else
      printf("NO\n");
  }
  return 0;
}