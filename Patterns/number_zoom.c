#include<stdio.h>
int main(){
    int i,j,k,min=0,n; 
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
            int a = i;
            if(i>n)
               a = 2*n-i;
            int b = j;
            if(b>n)
               b = 2*n-j;
            if(a<b)
               min=a;
            else
               min=b;
        printf("%d ",min);
        }
        printf("\n");
    }
} 