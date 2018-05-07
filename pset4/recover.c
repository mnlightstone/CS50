#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover card.raw\n");
        return 1;
    }

    FILE *camera = fopen(argv[1], "r");
    if (camera == NULL)
    {
        printf("Cannot open file.\n");
        return 2;
    }

    unsigned char
    buffer[SIZE]; //create a buffer which is 512 bytes, which will store our data as we are reading it. char must be unsigned so that comparison is possible
    FILE *currentPic = NULL; //creates pointer to an (empty at first) file which we will write the picture into
    int ready = 0; //0 if not ready to write, 1 if ready to write
    int filesFound = 1; //counter for how many files we've found so far. this is how the files will be named, which is why we start at 1 instead of 0.

    while (fread(buffer, SIZE, 1, camera) == 1) //while we have 512 bytes to read
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xe0) == 0xe0) //the markings of the beginning of a JPG
        {
            if (ready == 0) //if we've not yet found a JPG
            {
                ready = 1; //set ready to 1, indicating it's time to start writing JPEGs!
            }
            else //if ready is not 0 (AKA if we have previously found our first JPEG)
            {
                fclose(currentPic); //close current picture
            }
            char filename[8]; //create an array which will hold our file name (8 characters)
            sprintf(filename, "%03d.jpg", filesFound);
            currentPic = fopen(filename, "a"); //open currentPic and append it at the end with our file name
            filesFound++;
        }
        if (ready == 1) //if we're writing in JPEGs
        {
            fwrite(&buffer, SIZE, 1, currentPic); //write everything we've found to the file!
        }

    }

    fclose(camera);
    fclose(currentPic);
    return 0;
}
