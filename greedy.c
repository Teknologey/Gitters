#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void) 
{
  int COINS;
  COINS = 0;
  
  printf("How much is owed?\n");
  float money;
  money = GetFloat();
  printf("money %f\n", money);
  // check to see how many quarters
    while(money >= .25)
    {
        money = money-.25;
        COINS = COINS+1;
    }
    
    while(money >= .10)
    {
      money = money-.10;
      COINS = COINS+1;
    }
    while(money >= .5)
    {
      money = money-.5;
      COINS = COINS+1;
    }
    while(money >= .1)
    {
      money = money-.1;
      COINS = COINS+1;
    }
    printf("Coins: %d\n", COINS);
    
 
// check to see how many dimes

// check to see how many nickels

// check to see how many pennies

}