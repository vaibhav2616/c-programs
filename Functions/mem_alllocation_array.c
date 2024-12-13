#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum=0,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int *arr =(int*)malloc(n * sizeof(int));
    if (arr==NULL){
    printf("Memory allocation failed\n");
    return 1;
    }
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Sum 0f elements:%d",sum);
    free(arr);
    return 0;
}