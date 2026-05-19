#include <stdio.h>

void main(){
    int day;
    printf("Enter a day to now work to be done \n");
    scanf("%d", &day);

    switch(day){
        case 1:
            printf("Attend TownHall meeting");
            break;
        case 2:
            printf("Focus of Frontend coding");
            break;
        case 3:
            printf("Work on PROD Suport tickets");
            break;
        case 4:
            printf("Attend Retro meeting");
            break;
        case 5:
            printf("Prod deployment checklist preparation \n");
            break;
        default:
            printf("it's weekend \n");
    }

    


}