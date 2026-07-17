#include <stdio.h>

int main(int argc, char *argv[])
{
    int first_num, second_num, result;
    printf("input two numbers : ");
    scanf("%d %d", &first_num, &second_num);

    result = first_num * second_num;
    printf("result : %d\n", result);

    return 0;
}