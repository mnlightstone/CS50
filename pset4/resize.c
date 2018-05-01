// Copies a BMP file

#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        fprintf(stderr, "Usage: resizeRatio infile outfile\n");
        return 1;
    }

    // remember filenames
    char *infile = argv[2];
    char *outfile = argv[3];

    // user's resize request
    int resizeRatio = atoi(argv[1]);
    //need to add limits (between 0 and 100)

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);
    //bf.bfSize *= resizeRatio * 2;

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);


    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }




    //-----DECLARE VARIABLES FOR OLD & NEW DIMENSIONS
    int oldHeight = bi.biHeight;
    int oldWidth = bi.biWidth;
   // int oldSize = ((sizeof(RGBTRIPLE) * oldWidth) + oldPadding) * abs(oldHeight);


    //-----MAKE CHANGES FOR NEW DIMENSIONS
    bi.biHeight *= resizeRatio;
    bi.biWidth *= resizeRatio;

    //---NEW AND OLD PADDING
    int oldPadding = (4 - (oldWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    int newPadding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    //-----MAKE BUFFER
    RGBTRIPLE *bufferRow = malloc(sizeof(RGBTRIPLE) * (bi.biWidth));

    //-----MAKE NEW FILE SIZES & PADDING
    bi.biSizeImage = abs(bi.biHeight) * ((bi.biWidth * sizeof (RGBTRIPLE)) + newPadding);
    bf.bfSize = bi.biSizeImage + sizeof (BITMAPFILEHEADER) + sizeof (BITMAPINFOHEADER);

    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);


    // iterate over infile's scanlines
    for (int i = 0, count = abs(oldHeight); i < count; i++)
    {
        int number = 0;
        // iterate over pixels in original scanline
        for (int j = 0; j < oldWidth; j++)
        {
            // temporary storage
            RGBTRIPLE triple;

            // read RGB triple from infile
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);


            //----put current pixel into buffer
            for (int l = 0; l < resizeRatio; l++)
            {
                *(bufferRow + number) = triple;
                number++;
                //this puts the current triple (AKA pixel) in the proper memory location
            }
                // // write RGB triple to outfile
                // fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
        }

        // skip over padding, if any
        fseek(inptr, oldPadding, SEEK_CUR);

        for (int m = 0; m < resizeRatio; m++)
        {

                fwrite((bufferRow), sizeof(RGBTRIPLE), bi.biWidth, outptr);

            for (int n = 0; n < newPadding; n++)
        {
            // Add padding back
            fputc(0x00, outptr);
        }
        }


    }
    free(bufferRow);

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}
