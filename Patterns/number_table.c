#include<stdio.h>
int main(){
    int a,n,i,j,k;
    printf("Enter a number:");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(i=1;i<=2*n+1;i++){
    printf("%d",i);
    }
    printf("\n");
    for(i=1;i<=n;i++){ 
        a=1;
        for(j=1;j<=nst;j++){
        printf("%d",a);
        a++;
        }
        for(k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(j=1;j<=nst;j++){
        printf("%d",a);
        a++;
        }
        nst--;
        nsp+=2;
        printf("\n");   
    }
    return 0;
}