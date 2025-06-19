#include <stdio.h>

int main()
    {
        int a = 15, b = 4;

        // Arithmetic Operators
        printf("Addition: %d\n", a + b);
        printf("Subtraction: %d\n", a - b);
        printf("Multiplication: %d\n", a * b);
        printf("Division: %d\n", a / b);
        printf("Modulus: %d\n", a % b);

        // Relational Operator
        printf("Is a greater than b? %d\n", a > b); // returns 1 (true)

        // Assignment Operator
        int c = a;
        printf("Value of c: %d\n", c);

        // Logical Operator
        printf("Logical AND (a > 10 && b < 10): %d\n", (a > 10 && b < 10));

    return 0;
    }
