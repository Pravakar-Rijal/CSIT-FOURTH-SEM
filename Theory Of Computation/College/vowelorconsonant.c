// program to show whether a string starts with vowel or consonant
// output shows invalid if there are numbers or symbols
#include <stdio.h>
#include <string.h>

int main()
{
    char string[20];
    int correct, i;
    int t = 3;
    while (t--)
    {
        printf("Enter string ");
        scanf("%s", string);
        for (i = 0; i < strlen(string); i++)
        {
            if ((string[i] < 91 && string[i] > 64) || (string[i] < 123 && string[i] > 96))
                correct = 1;
            else
            {
                correct = 0;
                break;
            }
        }
        if (correct == 1)
        {
            if (string[0] == 'a' || string[0] == 'e' || string[0] == 'i' || string[0] == 'o' || string[0] == 'u' || string[0] == 'A' || string[0] == 'E' || string[0] == 'I' || string[0] == 'O' || string[0] == 'U')
                printf("vowel\n");
            else
                printf("consonant\n");
        }
        else
            printf("Invalid\n");
    }
}