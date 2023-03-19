#include <stdio.h>

int main()
{
    int lower = 0, upper = 1024, guess;
    int num_guesses = 0;
    char response;

    printf("Think of a number between %d and %d\n", lower, upper);

    while (lower <= upper)
    {
        guess = (lower + upper) / 2;
        num_guesses++;
        printf("Is your number %d? (y/n)\n", guess);
        scanf(" %c", &response);

        if (response == 'y')
        {
            printf("Great! I guessed your number in %d guesses.\n", num_guesses);
            break;
        }
        else if (response == 'n')
        {
            printf("Is your number less than %d? (y/n)\n", guess);
            scanf(" %c", &response);

            if (response == 'y')
            {
                upper = guess - 1;
            }
            else if (response == 'n')
            {
                lower = guess + 1;
            }
        }
    }

    return 0;
}
