#include<stdio.h>
int fact(int n){
int fact =1;
for(int i=1;i<=n;i++)
fact = fact*i;
return fact;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int npr(int n,int r){
    return fact(n)/fact(n-r);
}
int main(){
    int n,r,NCR,NPR;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter r :");
    scanf("%d",&r);
    NCR=ncr(n,r);
    NPR=npr(n,r);
    printf("combination value(ncr) = %d\npermutation value(npr) = %d",NCR,NPR);
    return 0;
}