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
int main(){
    int n,r,x;
    printf("enter n :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            x=ncr(i,j);
            printf("%3d",x);
        }
        printf("\n");
    }
    return 0;
}