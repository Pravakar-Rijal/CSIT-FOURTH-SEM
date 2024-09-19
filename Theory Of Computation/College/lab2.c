#include <stdio.h>
#include <string.h>
#include <ctype.h>
char vowel[500], cons[500], invalid[500];
void checkWord(char string[])
{
    int i, j;
// check if it has any non alphabets
recheck:
    for (i = 0; i < strlen(string); i++)
    {
        if (!isalpha(string[i]))
        {
            // check if it is a fullstop,question mark, exclamation mark or comma
            if (string[i] == '.' || string[i] == '?' || string[i] == '!' || string[i] == ',')
            {
                // at the end
                if (string[i + 1] == '\0')
                {
                    string[i] = '\0';
                    goto recheck;
                }
            }
            else if (string[i] == '"')
            {
                // quotation mark at end
                if (string[i + 1] == '\0')
                {
                    string[i] = '\0';
                    goto recheck;
                }
                // quotation mark at the beginning
                else if (i == 0)
                {
                    for (j = 0; j <= strlen(string); j++)
                        string[j] = string[j + 1];
                    goto recheck;
                }
            }
            // invalid string
            printf("%s is invalid\n", string);
            return;
        }
    }

    // for valid strings check if it starts with vowel or consonant
    if (string[0] == 'a' || string[0] == 'e' || string[0] == 'i' || string[0] == 'o' || string[0] == 'u' ||
        string[0] == 'A' || string[0] == 'E' || string[0] == 'I' || string[0] == 'O' || string[0] == 'U')
    {
        // starts with vowel
        printf("%s starts with vowel\n", string);
    }
    else
    {
        // starts with consonant
        printf("%s starts with consonant\n", string);
    }
}
int main()
{
    char para[500], string[20];
    int i, wordstart = 0, j = 0;
    printf("enter a paragraph : ");
    gets(para);
    for (i = 0; i <= strlen(para); i++)
    {
        if (para[i] == ' ' || para[i] == '\0')
        {
            string[j] = '\0';
            checkWord(string);
            j = 0;
        }
        else
        {
            string[j++] = para[i];
        }
    }
}