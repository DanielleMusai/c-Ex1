#include <stdio.h>
#include <math.h>
#include "Numclass.h"

int main(){
    int min, max;
    scanf("%d %d", &min, &max);
    printf("The Armstrong numbers are:");
    for (int i = min; i <= max; i++)
    {
        if (isArmstrong(i) == 1)  {
            printf(" %d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for (int i = min; i <= max; i++)
    {
        if (isPalindrome(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n The Prime numbers are:");
    for (int i = min; i <= max; i++)
    {
        if (isPrime(i))
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Strong numbers are:");
    for (int i = min; i <= max; i++)
    {
        if (isStrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
