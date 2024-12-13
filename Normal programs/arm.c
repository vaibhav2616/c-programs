#include <stdio.h>
#include <math.h>
int main() {
    int n, x = 0, digit = 0, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }
    temp = n;
    while (n > 0) {
        n = n / 10;
        x++;
    }
    n = temp;
    while (n > 0) {
        digit = n % 10;
        sum += pow(digit, x);
        n /= 10;
    }
    if (sum == temp) {
        printf("%d is an Armstrong number\n", temp);
    } else {
        printf("%d is not an Armstrong number\n", temp);
    }
    return 0;
}