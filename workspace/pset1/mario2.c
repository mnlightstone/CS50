#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int height = get_int("How high should Mario's pyramid be?");
    int i;
    int blocks;
    while (height < 0 || height > 23)
    {
        height = get_int("Please pick a new number.");
    }
    for (i = height; i > 0; i--)
    {
    for (blocks=0;blocks<i-1;blocks++)
    {
        printf(" ");
    }
    for (blocks = i;blocks <= height+1; blocks++)
    {
        printf("#");
    }
    printf("\n");
    }
}



//   #
//  ##
// ###

// for each row,
//      for each number of blocks, print n-1 spaces

//      print the number of blocks in each row
//      new line

