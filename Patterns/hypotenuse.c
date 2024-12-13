#include<stdio.h>
#include<math.h>
int main(){
    double A;
    double B;
    double C;
    printf("Enter the value of A:");
    scanf("%lf",&A);
    printf("Enter the value of B:");
    scanf("%lf",&B);
    C = sqrt(pow(A,2) + pow(B,2));
    printf("Hypotenuse is: %.2lf",C);
return 0;
}