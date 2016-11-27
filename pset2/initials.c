#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // get user name
    string name = GetString();
    
    if (name != NULL)
    {
        // calc length of name
        int name_length = strlen(name);
        
        printf("%c", toupper(name[0]));
        
        for (int i = 1; i < name_length; i++)
        {
            char c = name[i - 1];
            if (c == ' ')
            {
                printf("%c", toupper(name[i]));
            }
        }
        
        printf("\n");
    }
}

