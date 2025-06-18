//Code-1: Create Variables

#include <stdio.h>

int main() {
    int age = 20;
    printf("Age: %d\n", age);

    return 0;
}

//Code-2: Format Specifiers

#include <stdio.h>

int main() {
    int i = 100;
    float f = 12.34;
    char ch = 'Z';

    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Character: %c\n", ch);

    return 0;
}

//Code-3: Change Values

#include <stdio.h>

int main() {
    int score = 75;
    printf("Original score: %d\n", score);

    score = 90; // Changed value
    printf("Updated score: %d\n", score);

    return 0;
}

//Code-4: Multiple Variables

#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}

//Code-5: Variable Names

#include <stdio.h>

int main() {
    int studentAge = 18;
    float studentMarks = 89.5;
    char studentGrade = 'A';

    printf("Age: %d\n", studentAge);
    printf("Marks: %.1f\n", studentMarks);
    printf("Grade: %c\n", studentGrade);

    return 0;
}

//Code-6: Real-Life Examples

#include <stdio.h>

int main() {
    int numberOfBooks = 5;
    float pricePerBook = 199.99;
    float totalPrice = numberOfBooks * pricePerBook;

    printf("Books: %d\n", numberOfBooks);
    printf("Price per book: %.2f\n", pricePerBook);
    printf("Total price: %.2f\n", totalPrice);

    return 0;
}

