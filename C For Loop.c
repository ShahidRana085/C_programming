//Code-1: For Loop

#include <stdio.h>

int main()
    {
        for (int i = 1; i <= 3; i++)
            {
                printf("Hello %d\n", i);
            }
            return 0;
    }

//Code-2: Nested Loops

#include <stdio.h>

int main()
    {
        for (int i = 1; i <= 2; i++)
            {
                for (int j = 1; j <= 3; j++)
                    {
                        printf("i = %d, j = %d\n", i, j);
                    }
            }
            return 0;
    }

//Code-3: Real-Life Example

#include <stdio.h>

int main()
    {
        for (int i = 1; i <= 5; i++)
            {
                printf("Sending message %d\n", i);
            }
            return 0;
    }



