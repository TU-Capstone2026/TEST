#include<stdio.h>

double divide(int a, int b) {
    if (b == 0) {
        printf("에러: 0으로 나눌 수 없습니다!\n");
        return 0.0;
    }
    return (double)a / b;
}

int main() {
    int num1 = 10;
    int num2 = 5;
    
    printf("=== 나눗셈 기능 단독 테스트 ===\n");
    printf("[정상 나눗셈 결과] %d / %d = %.2f\n", num1, num2, divide(num1, num2));
    
    int num3 = 0;
    printf("\n=== 0으로 나누기 에러 테스트 ===\n");
    printf("[에러 발생 결과] %d / %d = %.2f\n", num1, num3, divide(num1, num3));
    
    return 0;
}