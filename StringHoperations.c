#include<stdio.h>
#include <string.h>

void main(){
    char str[50] = "vignesh";

    printf("size of string: %lu\n", sizeof(str));
    printf("string length: %lu\n", strlen(str));

    char src[] = "This is a very long String";
    char dest[10];

    strncpy(dest, src, sizeof(dest)-1);
    printf("safety copied %s\n", dest);

    char greeting[30] = "hello";
    char name[] = "welcome";

    strncat(greeting, name, sizeof(greeting)- strlen(greeting)-1);
    printf("%s\n", greeting);

    char pass1[] = "user123";
    char pass2[] = "user123";

    if(strcmp(pass1, pass2) == 0){
        printf("password matches!\n");
    }

    char str11[] = "apple";
    char str21[] = "apple";

    if(str11 == str21){
        printf("They are equal");
    }else {
        printf("They are not equal");
    }

   char *ptr1 = "string";
   char *ptr2 = ptr1;

   if(ptr1 == ptr2){
    printf("theyh are equal");
   }
}