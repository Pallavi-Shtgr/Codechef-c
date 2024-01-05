Chef's son wants to go on a roller coaster ride. The height of Chef's son is 
X inches while the minimum height required to go on the ride is  H inches. Determine whether he can go on the ride or not.

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	int x,h;
	scanf("%d%d",&x,&h);
	if(x>=h){
	printf("YES\n");
}
else printf("no\n");
}
}
