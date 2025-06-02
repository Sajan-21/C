#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float score;

    printf("enter your score \n");
    scanf("%f",&score);

    if (score < 28)
    {
        printf("you failed");
    }
    else if (score < 48)
    {
        printf("you are awarded D grade");
    }
    else if (score < 68)
    {
        printf("you are awarded C grade");
    }
    else if (score < 88)
    {
        printf("you are awarded B grade");
    }
    else
    {
        printf("you are awarded A grade");
    }
    
    
}