#include <stdio.h>

void main(){
    int num;
    printf("Enter a day to now work to be done \n");
    scanf("%d", &num);

    switch(num){
        case 1 ... 100:
            printf("Attend TownHall meeting \n");
            break;
        case 101 ... 200:
            printf("Focus on coding \n");
            break;
        default:
            printf("it's weekend \n");
    }

    int c = 'a';
    switch(c){
        case 'a':
            printf("Attend TownHall meeting \n");
            break;
        case 'b':
            printf("Focus on coding \n");
            break;
        default:
            printf("it's weekend \n");
    }

    


}