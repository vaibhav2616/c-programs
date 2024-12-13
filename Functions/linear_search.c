#include<stdio.h>
void L_S(int a[],int n, int k){
    int i,flag=0;
    for(i=0;i<n;i++){
        if(k==a[i]){
            flag=1;
            break;
        }
    }
        if(flag==0)
            printf("Element not found");
        else
            printf("%d found at index %d",k,i);
}
int main(){
    int n,i,a[100],k;
    printf("enter size of the array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&k);
    L_S(a,n,k);
}