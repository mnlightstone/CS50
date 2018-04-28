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



    string encryptionPhrase = argv[1];
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i =0, j = 0; i < strlen(plaintext); i++)
    {
        char currentLetter = plaintext[i];
        //char keyChange = encryptionPhrase[j] % strlen(encryptionPhrase);

        if (isalpha(plaintext[i]))
        {
            if (plaintext[i] >= 65 && plaintext[i] <= 90)
            {
                currentLetter = (((plaintext[i] - 'A' + encryptionPhrase[j])) % 26 ) + 'A';
                printf("this is my top one %c\n",currentLetter);
                j++;
            }
            if  (plaintext[i] >= 97 && plaintext[i] <= 122)
        {
            currentLetter = (((plaintext[i] - 'a' + encryptionPhrase[j])) % 26) + 'a';
            printf("%c\n",currentLetter);
            printf("my encryption is %c",encryptionPhrase[j]);
            j++;
        }
        else printf("this is my else %c\n",currentLetter);
        }
        printf("\n");
    }
}