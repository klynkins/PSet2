#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get name
    string s = get_string("Name: \n");
    //capitalize for letter
    char firstInitial = toupper(s[0]);
   // assign length to name string length
    int length = strlen(s);
    // print first initial
    printf("%c", firstInitial);

    // loop throught name
    for (int i = 0; i < length; i++)
    {
        // if the name has a space
        if (s[i] == ' ')
        {
            // print the next letter in uppercase
            printf("%c", toupper(s[i + 1]));
        }
    }

    printf("\n");
}
