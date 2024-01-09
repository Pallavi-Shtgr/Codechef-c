// Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). 
//  For each successful withdrawal the bank charges 0.50 $US.
// Calculate Pooja's account balance after an attempted transaction.



#include<stdio.h>
int main(){
    int a;
    float b;
    scanf("%d",&a);
    scanf("%f",&b);
    if(a%5==0){
    float c;
    c=b-(float)a-0.5;
    if(c<0) printf("%.2f",b);
    else
    printf("%.2f",c); 
    }
    else{
        printf("%.2f",b);
    }
}
