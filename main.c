#include <stdio.h>
#include "calculator.h"
int main() {
    int num1 = 10;
    int num2 = 5;

    printf("=== 계산기 ===\n");
    printf("%d + %d = %d\n", num1, num2, add(num1, num2));
    printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
    printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
    
    printf("%d / %d = %.2f\n", num1, num2, divide(num1, num2));

    return 0;
}