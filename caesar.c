#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Usage: ./caesar k");
        return 1;
    }
    else if (argc == 2)
    {

        int k = atoi(argv[1]);

        string plainText = get_string("plaintext: ");

        int steps = k % 26;

        int l = strlen(plainText);

        char cipherText[l];

        for (int i=0; i < l; i++)
        {
            int index;
            int wrapDifference;
            index = plainText[i];

            // if lowercase
            if (index > 96 && index < 123)
            {
                if ((index + steps) > 122)
                {
                    wrapDifference = (index + steps)-122;
                    cipherText[i] = 96 + wrapDifference;
                }
                else if ((index + steps) <= 122)
                {
                    cipherText[i] = index + steps;
                }
            }
            else if (index > 64 && index < 91)
            {
                if ((index + steps) > 90)
                {
                    wrapDifference = (index + steps) - 90;
                    cipherText[i] = 64 + wrapDifference;
                }
                else if ((index + steps) <= 90)
                {
                    cipherText[i] = index + steps;
                }

            }
            else
            {
                cipherText[i] = index;
            }
        }

        //output
        printf("ciphertext: %s\n", cipherText);
    }
    else
    {
        printf("Usage: ./caesar k");=
    }
}