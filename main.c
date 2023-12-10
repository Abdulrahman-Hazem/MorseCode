#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pair
{
    char letter;
    const char *code;
} Pair;

int main()
{

    Pair pairs[37] = {{'A',".-"},{'B',"-..."},{'C',"-.-."},{'D',"-.."},{'E',"."},{'F',"..-."},{'G',"--."},{'H',"...."},{'I',".."},{'J',".---"},{'K',"-.-"},{'L',".-.."},{'M',"--"},{'N',"-."},{'O',"---"},{'P',".--."},{'Q',"--.-"},{'R',".-."},{'S',"..."},{'T',"-"},{'U',"..-"},{'V',"...-"},{'W',".--"},{'X',"-..-"},{'Y',"-.--"},{'Z',"--.."},{'1',".----"},{'2',"..---"},{'3',"...--"},{'4',"....-"},{'5',"....."},{'6',"-...."},{'7',"--..."},{'8',"---.."},{'9',"----."},{'0',"-----"}};
    int i = 1;
    char a = pairs[i].letter;
    char *m = pairs[i].code;
    char choice[8];
    char morse[5];
    printf("Would you like to enter in alphabet or morse?: ");
    scanf("%s", &choice);
    if (strcmp(choice,"alphabet")==0)
    {
        printf("Enter a upper case letter or a number: ");
        scanf(" %c", &a);
        for(i = 0; i <= 37; i++)
        {
            if(pairs[i].letter == a)
            {
                printf("The morse code is %s ", pairs[i].code);
            }
        }
    }
    else if (strcmp(choice,"morse")==0)
    {
        printf("Enter the morse code: ");
        scanf(" %s", &morse);
        for(i = 0; i <= 37; i++)
        {
             if(strlen(pairs[i].code)==strlen(morse))
            {
                printf("The letter or number is %c ", pairs[i].letter);
                return 0;
            }
        }
    }
    return 0;
}
