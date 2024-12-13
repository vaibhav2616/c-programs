#include<stdio.h>
int main(){
    int n,i,a[10],min,max;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    if(n==1){
        min=max=a[0];
    }
    else if(n==2){
        if(a[0]>a[1]){
            max=a[0];
            min=a[1];
        }
        else{
            min=a[1];
            max=a[0];
        }
    }
    else{
        min=max=a[0];
        for(i=0;i<n;i++){
           if(a[i]>max){
            max=a[i];
           }
           if(a[i]<min){
            min=a[i];
           }
        }
    }
    printf("Min value of the given array is %d\n",min);
    printf("Max value of the given array is %d\n",max);
    return 0; 
}
