#include<stdio.h>
void sum1toN(int n,int sum){
    if (n==0){
       printf("%d",sum);
    return;
    }
    sum1toN(n-1,sum+n);
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    sum1toN(n,0);
    return 0;
}