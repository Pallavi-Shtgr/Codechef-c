// Harsh was recently gifted a book consisting of  N pages. Each page contains exactly 
// M words printed on it. As he was bored, he decided to count the number of words in the book.
// Help Harsh find the total number of words in the book.

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m;
	    scanf("%d%d",&n,&m);
	    printf("%d\n",n*m);
	}
}

