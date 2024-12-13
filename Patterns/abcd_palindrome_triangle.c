#include<stdio.h>
int main(){
    int m,n,i,j,k;
    char ch ='A';
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){ 
        ch ='A';
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            char ch =(char)(j+64);
            printf("%c",ch);
            ch++;
        }
        int a=i-1;
        for(m=1;m<=i-1;m++){
             char ch =(char)(a+64);
            printf("%c",ch);
            a--;
        }
        printf("\n");
}
return 0;
}