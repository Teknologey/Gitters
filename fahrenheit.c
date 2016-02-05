#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // This takes a number from the user
    // and convert it to Celsius to Fahrenheit
    printf("C: ");
    float Cel = GetFloat();
    float Fah = ((Cel * 9) / 5) + 32;
    printf("F: %.1f\n", F);
}    