#include <stdio.h>

// ***print last two digit of a number */

void main(){
    int num = 1234;
    printf("%d", num % 100);
}

//****check the leap year */

void main(){
    int year=2020;

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
}


//***convert the time entered in hh,min and sec into total seconds */

void main(){
    int hh, mm, ss, total_seconds;

    printf("Enter hours: ");
    scanf("%d", &hh);
    printf("Enter minutes: ");
    scanf("%d", &mm);
    printf("Enter seconds: ");
    scanf("%d", &ss);

    total_seconds = (hh * 3600) + (mm * 60) + ss;
    printf("Total seconds: %d", total_seconds);
}