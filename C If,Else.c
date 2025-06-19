//Code-1: if

#include <stdio.h>

int main()
    {
        int age = 20;

        if (age > 18)
            {
                printf("You are an adult.");
            }
            return 0;
    }

//Code-2: else

#include <stdio.h>

int main()
    {
        int age = 16;

        if (age >= 18)
        {
            printf("Adult");
        } else
            {
                printf("Minor");
            }
            return 0;
    }

//Code-3: else if

#include <stdio.h>

int main()
    {
        int marks = 75;

        if (marks >= 90)
            {
                printf("Grade A");
            } else if (marks >= 60)
                {
                    printf("Grade B");
                } else
                    {
                        printf("Grade C");
                    }
                    return 0;
    }

//Code-4: Short Hand If

#include <stdio.h>

int main()
    {
        int age = 21;

    // condition ? true_part : false_part
        (age >= 18) ? printf("Adult") : printf("Minor");
        return 0;
    }

//Code-5: Real-Life Example

#include <stdio.h>

int main()
    {
        int temperature = 30;

        if (temperature > 25)
            {
                printf("Turn on the fan.");
            } else
                {
                    printf("Fan is not needed.");
                }
                return 0;
    }
