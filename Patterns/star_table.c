#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter a number:");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(i=1;i<=2*n+1;i++){
    printf("* ");
    }
    printf("\n");
    for(i=1;i<=n;i++){ 
        for(j=1;j<=nst;j++){
        printf("* ");
        }
        for(k=1;k<=nsp;k++){
            printf("  ");
        }
        for(j=1;j<=nst;j++){
        printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");   
    }
    return 0;
}