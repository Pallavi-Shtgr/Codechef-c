An important resolution is being discussed in the Parliament of Chefland. There are 
N members present in the Parliament out of which 
X members voted in favour of the resolution and the remaining voted against it.
According to the constitution of Chefland, a resolution is passed if and only if half or more than half the members present in the Parliament vote in favour of the resolution.
Determine if the resolution is passed or not.


#include <stdio.h>

int main() {
      int t;
      scanf("%d",&t);
      while(t--){
      int n,x,a;
      scanf("%d%d",&n,&x);
     a=n-x;
     if((n/2)>=a){
         printf("YES\n");
     }
     else printf("No\n");
}

}