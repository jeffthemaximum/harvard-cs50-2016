#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

string rot_string(string input, int k);
char rot_char(char c, int k);

int main(int argc, string argv[])
{
    
    // return error if user enters wrong # of args
    if (argc != 2) {
        printf("Error. Use 1 command line argument.\n");
        return 1;
    }
    
    // convert command arg to int
    int k = atoi(argv[1]);
    
    // get string
    string input = GetString();
    
    input = rot_string(input, k);
    
    printf("%s\n", input);
}

string rot_string(string input, int k)
{
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        input[i] = rot_char(input[i], k);
    }
    return input;
}

char rot_char(char c, int k) 
{
    if (isupper(c))
    {
        c = (((c - 65) + k) % 26) + 65;
    }
    else if (islower(c))
    {
        c = (((c - 97) + k) % 26) + 97;
    }
    return c;
}