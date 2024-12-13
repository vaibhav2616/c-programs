#include<stdio.h>
int main(){
    int n,i,flag=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==1)
        printf("Given number is neither prime nor composite");
    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
    if(flag==0)
       printf("Given number is not a prime");
       else
       printf("Given number is a prime");
    }
return 0;
}