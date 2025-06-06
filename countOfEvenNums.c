#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int size, i, arr[100], even[100], count = 0, j;

    printf("enter the size of array");
    scanf("%d",&size);

    printf("\nenter the values : ");
    for(i=0; i<size; i++) {
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0) {
            count++;
        }
    }

    printf("number of even numbers are %d",count);

}