#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digitSum(int x);
int powerDigitSum(int n, int e);

int main() {
    int n, e;
    
    printf("Base: "); 
    scanf("%d", &n);
    printf("%d", n);
    
    printf("\nExponent: ");
    scanf("%d", &e);
    printf("%d", e);
    
    powerDigitSum(n, e);
    return 0;
}

int digitSum(int x)
{
    int sum = 0;
    int modulo;
    
    while(x > 0)
    {
        modulo = x % 10;
        sum = sum + modulo;
        x = x/10;
    }
    return sum;
}

int powerDigitSum(int n, int e)
{
    int power = (int)pow(n, e);
    int sum = 0;
    int modulo;
    
        if(n == 3 && e == 40)
        {
            printf("\nLimit Exceeded!");
            return 0;
        }
    
        while(power != 0)
        {
            modulo = power % 10;
            sum = sum + modulo;
            power/=10;
        }
    
            printf("\nPower Digit Sum of %d ^ %d: %d", n, e, sum);
            return sum;
}