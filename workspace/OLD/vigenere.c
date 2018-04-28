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

    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    string cipher = argv[1];

    for (int i=0, j=0; i < strlen(plain); i++)
    {
        char letter = plain[i];
        int key = j % strlen(cipher);

        if (isupper(key))
        {
            key -= 65;
        }

        if (islower(key))
        {
            key -= 97;
        }

        if (isalpha(letter) && isupper(letter))
        {
            letter = (((letter + cipher[key] - 65) % 26) + 65);
            printf("%c",letter);
            j++;
        }
        else if (isalpha(letter) && islower(letter))
        {
            letter = letter + cipher[key];
            printf("%c",letter);
            j++;
        }
        else printf("%c",letter);
    } printf("\n");
}

//if item is space or punctuation, print the item
// if item is uppercase (between 65 - 90), shift it
