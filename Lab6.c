#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int numbers[15];
    
    for(int i=0; i<15; i++)
    {
        scanf("%d", &numbers[i]);    
    }
    
    printf("Array content: ");
    for(int i=0; i<15; i++)
    {
         printf("%d,", numbers[i]);   
    }
    
    //determining a well ordered number inside the array
    for(int i=0; i<15; i++)
    {
        if(numbers[i] > 100)
        {
            int num = numbers[i];
        
            int lastDig = num % 10;
            num /= 10;
            int secDig = num % 10;
            num /= 10;
            int firstDig = num % 10;

            if((firstDig <= secDig && lastDig) && (secDig <= lastDig) && (lastDig >= secDig && firstDig))
            {
                continue;
            }
            else {
                numbers[i] = 0;
            }
        }
        
        else if(numbers[i] > 1000)
        {
            int num = numbers[i];
        
            int lastDig = num % 10;
            num /= 10;
            int thirdDig = num % 10;
            num /= 10;
            int secDig = num % 10;
            num /= 10;
            int firstDig = num % 10;
            
            if((firstDig <= secDig && thirdDig && lastDig) && (secDig <= thirdDig && lastDig) && (thirdDig <= lastDig))
            {
                continue;
            }
            else {
                numbers[i] = 0;
            }
        }
        
        else if(numbers[i] < 100)
        {
            int num = numbers[i];
        
            int lastDig = num % 10;
            num /= 10;
            int firstDig = num % 10;

            if((lastDig >= firstDig) && (firstDig <= lastDig))
            {
                continue;
            }
            else {
                numbers[i] = 0;
            }
        }
        
    }
    printf("\nWell-ordered number(s): ");
    for(int i=0; i<15; i++)
    {
        if(numbers[i] == 0)
            continue;
        else {
            printf("%d,", numbers[i]);
        }
        
    }

    printf("\nWell-ordered number(s) count: ");
    int ctr = 0;
    for(int i=0; i<15; i++)
    {
        if(numbers[i] == 0)
            continue;
        else
            ctr++;
    }
    printf("%d", ctr);
    
    
    return 0;
}
