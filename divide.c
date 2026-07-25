#include <stdio.h>
#include "calculator.h"

double divide(int a, int b) {
    if (b == 0) {
        printf("에러: 0으로 나눌 수 없습니다!\n");
        return 0.0;
    }
    return (double)a / b;
}