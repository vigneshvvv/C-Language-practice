#include<stdio.h>
#include<stdlib.h>

void main(){
    int capacity = 2;
    int count = 0;

    int *employeeIds = malloc(capacity * sizeof(int));
    
    int id;
    while (1)
    {
        printf("Enter EmployeeID (-1 to stop): ");
        scanf("%d", &id);

        if(id == -1){
            break;
        }
       

        if(count == capacity){
            // capacity = capacity *2;
            capacity *= 2;
            employeeIds = realloc(employeeIds, capacity*sizeof(int));
            printf("Memory expanded. New capacity = %d\n", capacity);    
        }
        
        employeeIds[count] = id;
        count++;
       
    }

    printf("\nEmployees: \n");

    for(int i = 0; i <count; i++){
        printf("%d\n", employeeIds[i]);
    }
    
}