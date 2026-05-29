#include <stdio.h>

void main(){
    char buffer[10];

    printf("Enter a name:");
    fgets(buffer, sizeof(buffer), stdin);

    printf("you have entered %s\n", buffer);
}