#include <stdio.h>
#include <stdlib.h>

void main() {
    float score;

    printf("enter your score \n");
    scanf("%f",&score);

    if(score < 36) {
        printf("you failed");
    }else{
        printf("you won");
    }
}