#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int limit,i,sum = 0;

    printf("enter a limit : \n");
    scanf("%d",&limit);

    for(i = 0; i <= limit; i++) {
        if((i % 2) == 0){
            continue;
        }else{
            sum = sum+i;
        }
    }

    printf("sum of all odd number until the limit is : %d",sum);
}