#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));

    char password[7];
    int i;

    for (i = 0; i < 7; i++)
    {
        password[i] = rand() % 94 + 33; // Generate a random ASCII character between 33 and 126
    }

    password[i] = '\0'; // Null-terminate the password string

    printf("%s", password);

    return 0;
}

