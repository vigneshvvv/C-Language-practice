#include<stdio.h>
#include<stdlib.h>

void main(){

    int count;

    printf("How many employees want to enter? ");
    scanf("%d", &count);

    int *emploeeIds;

    emploeeIds = malloc(count * sizeof(int));

    for(int i = 0; i <count; i++){
        printf("Enter Employee ID: ");
        scanf("%d", &emploeeIds[i]);
    }

    printf("\nEmployee IDs are; \n");

    for(int i =0; i <count; i++){
        printf("%d\n", emploeeIds[i]);
    }

    free(emploeeIds);
    emploeeIds = NULL;
}


