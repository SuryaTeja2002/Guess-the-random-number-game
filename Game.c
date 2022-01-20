
/* First game project in C language */
/* A small game to guess a number which is being randomly generated. */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a rondom number between 1 to 100 ;
    // printf("The number is %d \n", number);

    printf("Guess the number between 1 to 100 :\n"); // Asks user to enter a number between 1 to 100;
    // Keeps running the loop untill the number is guessed.
    do
    {
        scanf("%d", &guess); 
        if (guess > number)
        {
            printf("Lower number please..\n");
        }
        else if (guess < number)
        {
            printf("Higher number please...\n");
        }
        else
        {
            printf("You guessed it in %d attempts.\n", nguesses); // Prints number of attempts does the user took to guess the number.
        }
        nguesses++;
    } while (guess != number);

    return 0;
}