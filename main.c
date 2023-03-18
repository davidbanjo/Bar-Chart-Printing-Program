#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter a number between 1 and 30: ");
        scanf("%d", &num[i]);
        if (num[i] < 1 || num[i] > 30) {
            printf("Invalid number!\n");
            i--;
            continue;
        }
        //printf("\n");
    }
    for (int j = 0; j < 5; j++) {
        for (int k = 0; k < num[j]; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
