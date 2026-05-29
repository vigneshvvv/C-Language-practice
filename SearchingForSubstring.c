#include<stdio.h>
#include<string.h>

void main(){
    char text[] = "we are learning programming in c language";

    char *result = strstr(text, "programing");
    
    if(result  != NULL){
        printf("Foung substring: %s\n", result);
    } else {
        printf("Substring not founded \n");
    }
}