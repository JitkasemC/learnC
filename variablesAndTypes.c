#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 2;
    int sum = num1 + num2,
    multiply = num1 * num2,
    minus = num1 - num2,
    divide = num1 / num2;
    
    double x = 8, y = 3;
    double decimal = x / y;
    
    printf("%d", sum);
    printf(", ");
    printf("%d", multiply);
    printf(", ");
    printf("%d", minus);
    printf(", ");
    printf("%d", divide);
    printf(", ");
    printf("%f", decimal);

    return 0;
}

// after print the result should be 12, 20, 8, 5, 2.666667