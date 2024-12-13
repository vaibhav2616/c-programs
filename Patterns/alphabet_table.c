#include<stdio.h>
int main(){
    int n,i,j,k;
    char a='A';
    printf("Enter a number:");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(i=1;i<=2*n+1;i++){
    printf("%c",a);
    a++;
    }
    printf("\n");
    for(i=1;i<=n;i++){ 
        a='A';
        for(j=1;j<=nst;j++){
        printf("%c",a);
        a++;
        }
        for(k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(j=1;j<=nst;j++){
        printf("%c",a);
        a++;
        }
        nst--;
        nsp+=2;
        printf("\n");   
    }
    return 0;
}