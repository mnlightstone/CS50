#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    float money = get_float("How much money do you have?");

    while (money <= 0)
    {
        money = get_float("Please enter a non-negative number");
    }

    int totalCents = round(money * 100);
    int coins = 0;
    //printf("You have %i total cents to start with \n\n",totalCents);


    while (totalCents >= 25)
    {
        coins ++;
        totalCents = totalCents - 25;
    }
// printf("You have %i quarters \n",coins);
// printf("You have %i cents remaining\n\n",totalCents);

    while (totalCents >= 10)
    {
        coins ++;
        totalCents = totalCents - 10;
    }

// printf("You have %i quarters and dimes \n",coins);
// printf("You have %i cents remaining\n\n",totalCents);

    while (totalCents >= 5)
    {
        coins ++;
        totalCents = totalCents -  5;
    }

    while (totalCents > 0)
    {
        coins ++;
        totalCents = totalCents - 1;
    }


    printf("%i\n", coins);
}



// floats are pointed imprecisely so we miust round the float in order for it to be X.X and not X.X-1.
// see this link for more info
//https://www.reddit.com/r/cs50/comments/23odx2/pset1_greedy_why_does_42100419/


// printf("We have counted %i coins", coins);
// printf("There is %i left in your number", totalCents);
// }



// for (int i=1;totalCents>0;i++){

//     printf("This is %i quarter\n", i);
//     totalCents = totalCents - 25;
// }


//ask for an amount
//convert amount to cents
//for each 25 incriment, add 1 to quarter
//for each 10 incriment, add 1 to dimes
//for each 5 incriment, add 1 to nickels
//for each 1 incriment, add 1 to pennies
