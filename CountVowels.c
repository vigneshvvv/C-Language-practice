#include <stdio.h>

void main(){
    char name[50];
    int vowel_count = 0;

    printf("Enter some text to Count vowels: ");
    scanf("%s", name);
    printf("%s", name);

    for(int i = 0; name[i] != '\0'; i++){
        char letter = name[i];
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
             letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ){
                vowel_count++;
             }
    }

    printf("The word has %d vowels.\n", vowel_count);
}