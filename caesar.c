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
            // lines 28 - 32 & 36-41 are similar. Have you thought about storing your
            // letter base value (like 97 or 65) into a variable and condensing those lines into one chunk of code
            // let me know if you have questions about this

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
                // moving your {} to align with "else" would make it easier to read

                printf("%c", plain[i]); // print only the symbols
            }
    }
            printf("\n");
            return 0;
    }

// good
// logic, what you are doing is pretty clear
// comments - you break it down step by step. since the code in your second
// part is similar (the is upper loop) maybe nexttime you can leave out those comments

// comments for your other file, since my branch is off of main and you have saved your
// files in other branches off of main

//initials
//comments - pretty clear. you use the right amount here
// code logic - I think it's pretty solid. no additional comments for that

//vigenere
// good way to check input.
// argv[1][c] - this is your cipher phrase. consider storing this value in a variable, like
// string cipher_text = argv[1]
// storing values in variables helps make code more reable to a person who is reading your
// code for the first time

// code logic
// your code has 4 branches of logic
// have you thought about how to do the same thing, in less steps? Like 2 if statements
