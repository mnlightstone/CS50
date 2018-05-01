// Helper functions for music

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    //divide fraction[0] by fracton[2]
    //divide total above by 1/8
    //return total

    float a = fraction[0] - '0';
    //printf("the numerator is %f\n",a);

    float b = fraction[2] - '0';
    //printf("the denominator is %f\n",b);

    float result = (a / b)/(1.0/8.0);
    int newresult =  round(result);
    //printf("%i",newresult);
    return newresult;

}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    double hertz = 440;
    //hertz must be a double so that the math does not round incrrectly
    int octave = note[strlen(note)-1] - '0';
    //octave prints as the ascii of the number, so the 48 gets it to the true octave value
   // printf("\n");
    //printf("The note is %s\n",note);
    //printf("The octave is %i \n",octave);

    //adjust based on octave of notes

    switch(octave)
    {
        case 1:
            hertz = hertz / 6;
            break;
        case 2:
            hertz = hertz / 4;
            break;
        case 3:
            hertz = hertz / 2;
            break;
        case 4:
            break;
        case 5:
            hertz = hertz * 2;
            break;
        case 6:
            hertz = hertz * 4;
            break;
        case 7:
            hertz = hertz * 6;
            break;
        case 8:
            hertz = hertz * 8;
    }

    //adjust based on note
    char currentNote = note[0];
    //printf("%c\n",currentNote);

    switch(currentNote)
    {
        case 'A':
            break;
        case 'B':
            hertz += (hertz * pow(2.0,(2.0/12.0)) - hertz);

            break;
        case 'C':
            hertz += (hertz * pow(2.0,(-9.0/12.0)) - hertz);
            break;
        case 'D':
            hertz += (hertz * pow(2.0,(-7.0/12.0)) - hertz);
            break;
        case 'E':
            hertz += (hertz * pow(2.0,(-5.0/12.0)) - hertz);
            break;
        case 'F':
            hertz += (hertz * pow(2.0,(-4.0/12.0)) - hertz);
            break;
        case 'G':
            hertz += (hertz * pow(2.0,(-2.0/12.0)) - hertz);
            break;
    }
    //hertz = round(hertz);

    if (strlen(note) == 3)
    {
        double newHertz = 0;
        //must be a doube so math is done correctly, to avoid rounding issuess
        if (note[1] == 'b')
        {
            newHertz = (hertz * pow(2.0,(-1.0/12.0)) - hertz);
            hertz += newHertz;
        }
        else
        {
            newHertz = (hertz * pow(2.0,(1.0/12.0)) - hertz);
            hertz += newHertz;
        }
    }

    return round(hertz) ;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    string blank = "";
    if (strcmp(s,blank) == 0)
    //strcmp compares two strings. if they are the same, it gives 0. See http://www.cplusplus.com/reference/cstring/strcmp/ for more
    //confirmed behavior in separate test file
    {
        return true;
    }
    else
    {
        return false;
    }

}
