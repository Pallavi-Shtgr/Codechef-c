#include <stdio.h>

int main(void) {

	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int arr[n];
	    int count = 0;
	    for(int i = 0; i < n; i++){
	        scanf("%d", &arr[i]);
	        
	        if(arr[i] >= arr[i-1]){
	            count++;
	        }
	    }
	    if(count >= n-1){
	        printf("Yes\n");
	    }
	    else {
	        printf("No\n");
	    }
	}
	return 0;
}

