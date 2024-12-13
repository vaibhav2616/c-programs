#include<stdio.h>
void bubble_sort(int a[],int n){
     int temp;
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     }
}
int main(){
    int a[]={5,7,2,1,3,6};
    int n= sizeof(a)/sizeof(a[0]);
    printf("Before sorting:");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\nAfter sorting:");
    bubble_sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}