#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i, arr1[5], arr2[5], temp;

    printf("enter the first array \n");
    for( i = 0; i < 5; i++ ){
        scanf("%d",&arr1[i]);
    }

    printf("enter the seccond array \n");
    for( i = 0; i < 5; i++ ){
        scanf("%d",&arr2[i]);
    }

    for( i = 0; i < 5; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    printf("first array \n");
    for( i = 0; i < 5; i++ ){
        printf("%d",arr1[i]);
    }

    printf("\nseccond array \n");
    for( i = 0; i < 5; i++ ){
        printf("%d",arr2[i]);
    }

}