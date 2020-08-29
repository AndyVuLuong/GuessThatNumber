#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//C uses printf and scanf, to get int input use scanf("%d",&*name*)
//to print user input use prinf("%d",*name*)
int main()
{
    int answer, guess, turns=1, lower, upper;

    printf("Guess the Number\n");
    printf("Enter lower limit : ");
    scanf("%d", &lower);
    printf("Enter upper limit : ");
    scanf("%d", &upper);
    srand(time(0));
    answer=(rand()%(upper-lower+1))+lower;

    while(1)
    {
        printf("\nGuess A Number : ");
        scanf("%d",&guess);

        if(guess == answer)
        {
            printf("\nYou guessed the right answer! It took %d turns", turns);
            break;
        }
        else if(guess > answer)
        {
            printf("\nYour guess is higher\n");
            turns++;
        }
        else
        {
            printf("\nYour guess is lower\n");
            turns++;
        }
    }
    return 0;
}
