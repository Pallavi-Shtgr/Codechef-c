// There are 2 stores in Chefland and both sell the same product. The first store sells the product for 100
// 100 rupees whereas the second store sells it for 200 rupees.
// It is the holiday season and both stores have announced a special discount. The first store is providing a discount of 
// A percent on its product and the second store is providing a discount of 
// B percent on its product.
// Chef is wondering which store is selling the product at a cheaper price after the discount has been applied. Can you help him identify the better deal?

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	int a,b,disc1,disc2,p1,p2;
	scanf("%d%d",&a,&b);
	disc1 = (float)a;
	    disc2 = (float)b*2;
	    p1 = 100-disc1;
	    p2 = 200-disc2;
	    
	    if(p1<p2)
	    printf("FIRST\n");
	    else if(p1==p2)
	    printf("BOTH\n");
	    else
	    printf("SECOND\n");
}

}