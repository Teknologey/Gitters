#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{  
    // seed PRNG
    srand(time(NULL));
    
    // pick pseudorandom number in [0, 1023]
    int skittles = rand() % 1024;
    int user_guess = GetInt();
    
    while (user_guess != skittles) 
    {
    
        if (user_guess != skittles) {
            printf ("Not right, but Keep trying!\n");
        }
        
        if (user_guess > skittles) {
            printf ("Too high! Try again you cow\n");
        }
        
        if (user_guess < skittles) {
            printf ("Too Low! Try again you cow\n");
        
        }
        
        user_guess = GetInt();   
    } 
    
    if (user_guess == skittles) {
        printf("Correct, i told you, you can do it!");
    }
}