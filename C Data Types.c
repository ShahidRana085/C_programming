//Code-1: Data Types

#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);

    return 0;
}

//Code-2: Characters

#include <stdio.h>

int main() {
    char grade = 'B';
    printf("Your grade is: %c\n", grade);

    return 0;
}

//Code-3: Numbers

#include <stdio.h>

int main() {
    int wholeNumber = 100;
    float decimalNumber = 25.75;

    printf("Integer: %d\n", wholeNumber);
    printf("Decimal: %.2f\n", decimalNumber);

    return 0;
}

//Code-4: Decimal Precision

#include <stdio.h>

int main() {
    float pi = 3.14159265;

    printf("Default: %f\n", pi);
    printf("2 decimal places: %.2f\n", pi);
    printf("4 decimal places: %.4f\n", pi);

    return 0;
}

//Code-5: Memory Size

#include <stdio.h>

int main() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of double: %lu bytes\n", sizeof(double));

    return 0;
}

//Code-6: Real-Life Example

#include <stdio.h>

int main() {
    int age = 30;
    float height = 5.9;
    char bloodGroup = 'O';

    printf("Age: %d years\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Blood Group: %c+\n", bloodGroup);

    return 0;
}

//Code-7: Type Conversion

#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;

    // Implicit conversion
    float result1 = a + b;
    printf("Implicit Conversion: %f\n", result1);

    // Explicit conversion
    int result2 = a + (int)b;
    printf("Explicit Conversion: %d\n", result2);

    return 0;
}


