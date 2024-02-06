// A blood drive aims to collect N number of blood donations.
// The drive has collected X donations so far. Find the remaining number of donations needed to reach the target.

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
    int n,x,a;
    scanf("%d%d",&n,&x);
    a=n-x;
    printf("%d\n",a);


}

}