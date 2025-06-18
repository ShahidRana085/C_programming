//Code-1: While Loop

#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 3) {
        printf("Count: %d\n", i);
        i++;
    }

    return 0;
}

//Code-2: Do/While Loop

#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("Number: %d\n", i);
        i++;
    } while (i <= 3);

    return 0;
}

//Code-3: Real-Life Example

#include <stdio.h>

int main() {
    int password;

    while (password != 1234) {
        printf("Enter password: ");
        scanf("%d", &password);
    }

    printf("Access granted.");
    return 0;
}
