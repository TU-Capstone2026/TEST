# include <stdio.h>

int plus() {
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}