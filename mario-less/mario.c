#include <stdio.h>

int main(void)
{
    int userInput;
    
    do 
    {
        // Prompt the user to enter a number
        printf("Height: ");
        
        // Read the input from the user
        scanf("%d", &userInput);
    }
    while (userInput <= 0);

    for (int i = 1; i <= userInput; i++)
    {
        for (int j = 0; j < userInput; j++)
        {
            if (userInput - j <= i) 
            {
                printf("#");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}