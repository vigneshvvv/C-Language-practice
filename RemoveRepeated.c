#include <stdio.h>
#include <string.h>

void main(){
    char str[100];
    char ch;
    char result[100];
    int i, j = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character you want to remove: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != ch){
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("result: %s", result);
}