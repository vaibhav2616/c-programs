#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
         for(j=1;j<=n-i;j++) {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){    //2*i-1
printf("*");
}
printf("\n");
}
return 0;
}