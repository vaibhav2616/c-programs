#include<stdio.h>
int main(){
    int m,n,i,j,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){ 
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        int a=i-1;
        for(m=1;m<=i-1;m++) {
            printf("%d",a);
            a--;
        }
        printf("\n");
}
return 0;
}