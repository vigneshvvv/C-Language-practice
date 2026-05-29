#include <stdio.h>
#include <string.h>

void main(){
    char str[] = "Hello world";
    char result[100];
    int i =0;
    int j = 0;
    int sub_len = strlen("l");

    while (str[i] != '\0')
    {
        if (strncmp(&str[i], "l", sub_len) == 0)
        {
            i += sub_len;
        }else {
            result[j++] = str[i++];
        }
        
       
    }
     result[j] = '\0';
     printf("original String: %s\n", str);
     printf("Result: %s\n", result);
    

}