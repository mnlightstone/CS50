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

    //variable to check if any character in userinput is non-alphanumberic. if this is greater than 0 after looping through all the
    //characters, the program will not run
    int nonStringTest = 0;
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
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

    for (int i = 0, j = 0; i < strlen(plain); i++)
    {
        if (j == strlen(cipher)) //allows  for the key to loop. look into ways to do this with modulo
        {
            j = 0;
        }
        int key = cipher[j];



        //get the key back to a base 0 depending on if the current letter is upper or lower
        if isupper(key)
        {
            key -= 65;
        }

        else
        {
            key -= 97;
        }


        //checks if the current plain character is alpha, upper, and/or lower and applies the necessary math for each condition.
        if (isalpha(plain[i]) && isupper(plain[i]))
        {
            plain[i] = (((plain[i] + key - 65) % 26) + 65);
            printf("%c", plain[i]);
            j++;
        }
        else if (isalpha(plain[i]) && islower(plain[i]))
        {
            plain[i] = (((plain[i] + key - 97) % 26) + 97);
            printf("%c", plain[i]);
            j++;
        }
        else
        {
            printf("%c", plain[i]);
        }
        //passes the character without edits if it is not alphanumeric
    }
    printf("\n");
}