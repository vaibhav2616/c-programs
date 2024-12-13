#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("Enter A(base):");
    scanf("%f",&a);
     printf("Enter B(power):");
    scanf("%f",&b);
    c = pow(a,b);
    printf("%.2f raised to the power %.2f is %.2f",a,b,c);
    return 0;
}