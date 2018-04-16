#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)  //if argc is not equal to 2, no key num enter
    {
        printf("Invalid Input\n"); //print invalid input
        return 1 ;
    }
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Key must be alphabetic chars only.");
                return 1;
            }
        }
    }

    printf("plaintext: \n");
    string plain = get_string(); //get plaintext entered

    printf("ciphertext: \n");
    string k = (argv[1]); //
    int c = 0;
    for (int i = 0, n = strlen(plain); i < n; i++)
    {
            c = c % strlen(k);

            if (isalpha(plain[i]))
        {
            if (islower(plain[i]) && islower(argv[1][c]))
            {
                int base = ((plain[i] - 97) + (argv[1][c] - 97)); // subtract base, which brings base to 0
                int modulo = base % 26; // remainder of the base (0)
                int cipher = modulo + 97; // add back the base
                printf("%c", cipher); //print the ciphertext
            }
            else if (isupper(plain[i]) && islower(argv[1][c]))
            {
                int base = ((plain[i] - 65) + (argv[1][c] - 97)); // subtract base
                int modulo = base % 26; // remainder of the base
                int cipher = modulo + 65; // add back the base
                printf("%c", cipher); //print the ciphertext
            }
            else if (islower(plain[i]) && isupper(argv[1][c]))
            {
                int base = ((plain[i] - 97) + (argv[1][c] - 65)); // subtract base
                int modulo = base % 26; // remainder of the base
                int cipher = modulo + 97; // add back the base
                printf("%c", cipher); //print the ciphertext
            }
            else if (isupper(plain[i]) && isupper(argv[1][c]))
            {
                int base = ((plain[i] - 65) + (argv[1][c] - 65)); // subtract base, which brings base to 0
                int modulo = base % 26; // remainder of the base (0)
                int cipher = modulo + 65; // add back the base
                printf("%c", cipher); //print the ciphertext
            }
            c++;
        }

            else
        {
            printf("%c", plain[i]); // print only the symbols
        }
            }
            printf("\n");
            return 0;
   }





