#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)  //if argc is not equal to 2, no key num enter
    {
        printf("Invalid Input\n"); //print invalid input
        return 1 ;
    }

    int k = atoi(argv[1]); //convert key number entered into an int

    printf("plaintext: \n");
    string plain = get_string(); //get plaintext entered

    printf("ciphertext: \n");
    for (int i = 0, n = strlen(plain); i < n; i++)
    {
            if (islower(plain[i])) //converts letter to uppercase
            {
                int mess = plain[i] + k;  // add the key
                int base = mess - 97; // subtract base, which brings base to 0
                int modulo = base % 26; // remainder of the base (0)
                int cipher = modulo + 97; // add back the base
                printf("%c", cipher); //print the ciphertext
            }
            else if (isupper(plain[i]))
            {
                int mess = plain[i] + k;  // add the key
                int base = mess - 65; // subtract base, which brings base to 0
                int modulo = base % 26; // remainder of the base (0)
                int cipher = modulo + 65; // add back the base
                printf("%c", cipher); //print the ciphertext
            }
            else
        {
            printf("%c", plain[i]); // print only the symbols
        }
            }
            printf("\n");
            return 0;
    }
