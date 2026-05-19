#include <stdio.h>

void main(){
    int age = 20;
    int hasLicense = 0;

    if(age >= 18 && hasLicense == 1){
        printf("You are allowed to drive \n");
    }else {
        printf("sorry you cannot drive \n");
    }

    int day = 5;

    if(day == 6 || day == 7){
        printf("you got a weeend discount");
    }else{
        printf("standard pricing applies \n");
    }

    int isRaining = 0; //0 means not raining and 1 means raining

    if(!isRaining){
        printf("No rain \n");
    }else{
        printf("raining");
    }


}