#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("before swapping,a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\nafter swapping,a=%d and b=%d",a,b);
return 0;
}