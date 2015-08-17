//This program creates a Super Mario like half pyramid

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    //prompts user for a height until an int is given
    do
    {
        printf("Height: ");
        height = GetInt();
    }
    
    //checks to make sure height is between 0 and 23
    while (height < 0 || height > 23);
    
    int length = height + 1;
    int spaces = length - 2;
    int pounds = 2;
    
    while (spaces >= 0)
    {
    
        for (int i = 0; i < spaces; i++)
            printf(" ");
        for (int j = 0; j < pounds; j++)
            printf("#");
        printf("\n");
        spaces -= 1;
        pounds += 1;
    }
    
    return 0;
}
