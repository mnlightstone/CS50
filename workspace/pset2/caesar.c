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
    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    int cipher = atoi(argv[1]); //int k is the number that the plain text will be shifted by

    for (int i = 0, i < strlen(plain); i++)
    {
        if (plain[i] >= 65 && plain[i] <= 90)
        {
            plain[i] = (((plain[i] - 65 + cipher) % 26) + 65);
            printf("%c", plain[i]);
        }
        else if (plain[i] >= 97 && plain[i] <= 122)
        {
            plain[i] = ((((plain[i] - 97 + cipher)) % 26) + 97);
            printf("%c", plain[i]);
        }
        else
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}

//if item is space or punctuation, print the item
// if item is uppercase (between 65 - 90), shift it