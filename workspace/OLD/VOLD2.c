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
    string cipher = argv[1];
    for (int i=0, j = 0; i < strlen(plain); i++)
    {
        int currentShift = cipher[j] % strlen(cipher);
        if (isalpha(plain[i]))
        {
            // printf("This is loop number %i\n",i);
            if isupper(cipher[j])
            { //printf("Loop %i is an uppercase",i);
                plain[i] = ((((plain[i] - 97 + cipher[currentShift])) % 26) + 97);
                j++;
                printf("%c",plain[i]);
            }
            if islower(cipher[j])
            {
                plain[i] = ((((plain[i] - 65 + cipher[currentShift])) % 26) + 65);
                j++;
                printf("%c",plain[i]);
                //printf("Loop %i is a lowercase",i);
            }

    } else printf("%c",plain[i]);
}printf("\n");
}

//loop through characters in ciphertext
//if the character is lowercase, subtract 65
//if the character is uppercase, subtract 97