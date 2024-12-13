#include<stdio.h>
int main(){
    int n,i,j,k;
    char ch='A';
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ch='A';
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
    for(j=1;j<=2*i-1;j++){
printf("%c",ch);
ch++;
}
printf("\n");
}
return 0;
}