// GUESS THE NUMBER
// a random number is generated and the user is trying to guess it

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    //generate a random number
    int number = rand() % 10 + 1;
    int guess;
    bool notGuessed = true;
    std::cout << "THE GAME IS GOING TO BEGIN!\n";

    do
    {
        printf("-> Guess the number\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("The number is lower\n");
        }
        else if (guess < number)
        {
            printf("The number is higher\n");
        }
        else
        {
            printf("\n->YOU ARE CORRECT. THE NUMBER WAS %d.\n", number);
            notGuessed = false;
        }
    } while (notGuessed);
    return 0;
}