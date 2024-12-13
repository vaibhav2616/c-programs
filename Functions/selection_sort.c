#include<stdio.h>
void selection_sort(int a[],int n){
    int temp,min_index,i,j;
    for(i=0;i<n-1;i++){
        min_index=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
            if(min_index!=i){
                temp=a[min_index];
                a[min_index]=a[i];
                a[i]=temp;
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
    selection_sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}