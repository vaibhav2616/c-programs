#include<stdio.h>
int fibo(int n){
    if (n==1) return 0;
    if (n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int i,n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    sum+=fibo(i);
    }
    printf("sum upto %d terms=%d\n",n,sum);
    return 0;
}