#include<stdio.h>
int GCD(int n1,int n2){
    if (n2!=0)
    return GCD(n2,n1%n2);
    else
    return n1;
}
int main(){
    int num1,num2;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    printf("GCD/HCF of %d and %d is: %d",num1,num2,GCD(num1,num2));
    return 0;
    }