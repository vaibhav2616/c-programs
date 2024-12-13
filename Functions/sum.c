#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
   printf("sum is %d",sum(a,b));
}