//Code-1: Booleans (Simple Version)

#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRaining = true;

    if (isRaining) {
        printf("Take an umbrella.");
    }

    return 0;
}

//Code-2: Real-Life Example

#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 20;
    bool isAdult = (age >= 18);

    printf("Is adult: %d", isAdult);
    return 0;
}
