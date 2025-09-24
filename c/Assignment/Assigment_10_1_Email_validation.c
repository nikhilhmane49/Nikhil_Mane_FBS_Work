#include <stdio.h>
#include <string.h>


//###########Email validation


int main(){

    char email[50];
    int atTheRateCount = 0, dotCount = 0, i, len;

    printf("Enter your email address: ");
    scanf("%s", email);

    len = strlen(email);

    //check the @ and . count should be 1

    for(int i=0;i<len;i++){
        if(email[i] == '@'){
            atTheRateCount++;
        }
        if(email[i] == '.'){
            dotCount++;
        }
    }

    char substr = ".com";
    char substr2 = " ";

    //check if .com is present and space is not present
    if(strstr(email, substr) == NULL){
        printf("Invalid email address.\n");
        return 0;
    }
    if(strstr(email, substr2) != NULL){
        printf("Invalid email address.\n");
        return 0;
    }


    if(strpbrk(email,'#$%^&*)(!?/')!=NULL){
        printf("Invalid email address.\n");
        return 0;
    }


    //check if @ and . are not at the start or end and both should be only one

    if(atTheRateCount >1 && dotCount > 1 && email[0] != '@' && email[len-1] != '@' && email[0] != '.' && email[len-1] != '.'){
        printf("Valid email address.\n");
    } else {
        printf("Invalid email address.\n");
    }
}