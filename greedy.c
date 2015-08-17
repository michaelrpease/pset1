/*This program calculates the least number of coins necessary
to make exact change*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int coins = 0;
    
    //Prompts for how much change.  Repromts when a non-float or float is negative
    do
    {
        printf("How much change is owed? ");
        change = GetFloat();
    }
    
    while (change < 0);
    
    //multiplies by 100; easier to work with
    change = round(change * 100);
    coins = 0;
    
    while (change >= 25)
    {
        change -= 25;
        coins += 1;
    }      
    
    while (change >= 10)
    {
        change -= 10;
        coins += 1;
    }
    
    while (change >= 5)
    {
        change -= 5;
        coins += 1;
    }
    
    while (change > 0)
    {
        change -= 1;
        coins += 1;
    }
    
    printf("%i\n", coins);
    
    return 0;
}
