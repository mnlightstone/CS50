/* user inputs 1 argument. if user inputs more than 1 argument,
return main with a value of 1. */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) // need to add arguments here which accept an int, k)
{
    if (argc != 2)
    {
        printf("Uh oh. Please try again...\n");
        return 1;
    }

    int nonStringTest = 0;
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (! isalpha(argv[1][i])){
            nonStringTest ++;
        }
    }

    if (nonStringTest > 0)
    {
        printf("Please try again and print a string\n");
        return 1;
    }


    string uncoded = get_string("plaintext: ");
    printf("ciphertext: ");
    string cipher = argv[1];



//here is where I am having troubles
    for (int i=0, j=0; i < strlen(uncoded); i++)
    {
        wrappedKey = cipher[j] % strlen(cipher);
        if (isalpha(uncoded[i]) && isupper(uncoded[i]));
        {
            uncoded[i] += cipher[j] - 65;
            printf("%c",uncoded[i]);
        }
    }
        else printf("%c",letter);
    } printf("\n");
}

//if item is space or punctuation, print the item
// if item is uppercase (between 65 - 90), shift it
