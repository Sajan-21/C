#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int size, i, arr1[100][100], arr2[100][100], j, sum[100][100];

    printf("enter the size of 2d array : ");
    scanf("%d",&size);

    printf("\nenter the first array");
    for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("\nenter the second array");
    for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            scanf("%d",&arr2[i][j]);
        }
    }

    // for(i=0; i<size; i++) {
    //     for(j=0; j<size; j++) {
    //         printf("%d\t",arr1[i][j]);
    //     }
    //     printf("\n");
    // }

    // for(i=0; i<size; i++) {
    //     for(j=0; j<size; j++) {
    //         printf("%d\t",arr2[i][j]);
    //     }
    //     printf("\n");
    // }

    for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            sum[i][j] = sum[i][j] + arr1[i][j] + arr2[i][j];
        }
    }

    for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}