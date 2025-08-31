#include <stdio.h>
#include <math.h>

int main(){

    //*********** */  Write a C program to check whether a person is eligible for a loan:

    // int age, salary;
    // printf("Enter the age of the person: ");
    // scanf("%d", &age);
    // printf("Enter the salary of the person: ");
    // scanf("%d", &salary);

    // if(age>=18 && salary>=25000){
    //     printf("The person is eligible for a loan.\n");
    // }
    // else{
    //     printf("The person is not eligible for a loan.\n");
    // }

    //********** .Write a C program to input a time in 24-hour format and display it in 12
    // hour format with AM / PM.* /

    // int hour;
    // printf("Enter the hour in 24-hour format: ");
    // scanf("%d", &hour);
    // if(hour>=0 && hour<12){
    //     printf("The time in 12-hour format is: %d AM\n", hour);
    // }
    // else if(hour==12){
    //     printf("The time in 12-hour format is: %d PM\n", hour);
    // }
    // else if(hour>12 && hour<24){
    //     printf("The time in 12-hour format is: %d PM\n", hour-12);
    // }
    // else{
    //     printf("Invalid input.\n");
    // }





    //********Write a C program to classify a character as vowel / consonant / digit /
    // special symbol.* /

    // char ch;
    // printf("Enter a character: ");
    // scanf("%c", &ch);
    // if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
    //     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
    //         printf("The character is a vowel.\n");
    //     }
    //     else{
    //         printf("The character is a consonant.\n");
    //     }
    // }
    // else if(ch>='0' && ch<='9'){
    //     printf("The character is a digit.\n");
    // }
    // else{
    //     printf("The character is a special symbol.\n");
    // }

    //***********Write a C program to print all factors of a given number. */

    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);

    // for (int i = 1; i <= num;i++){
    //     if(num%i==0){
    //         printf("%d\n", i);
    //     }
    // }

    //************7.Write a C program to generate the series:
    // 1, 4, 9, 16, 25, ... n terms * /

    // int n;
    // printf("Enter the range: ");
    // scanf("%d", &n);

    // for (int i = 1; i <= n;i++){

    //     int temp = i * i;
    //     printf("%d\n", temp);
    // }

    //*********** Write a C program to generate the series:
    // 2, 4, 8, 16, 32, ... n terms * /

    // int n;
    // printf("Enter the range: ");
    // scanf("%d", &n);

    // for (int i = 1; i <= n;i++){

    //     int temp=pow(2,i);
    //     printf("%d\n", temp);
    // }

    //******* Write a C program to generate the series:
    // 1, 2, 4, 7, 11, 16, ... n terms * /
                            // Next term = previous term + increasing difference

    // int n;
    // printf("Enter the range: ");
    // scanf("%d", &n);

    // int term = 1;

    // for (int i = 0; i <= n;i++){
    //     term = term + i;
    //     printf("%d\n", term);
    // }



    //********* Write a C program to generate the series:
    // 1, 11, 111, 1111, ... n terms * /

    // int n;
    // printf("Enter the range: ");
    // scanf("%d", &n);

    // for (int i = 1; i <= n;i++){
    //     for (int j = 1; j <= i;j++){
    //         printf("1");
    //     }
    //     printf(" , ");
    // }


    //************pattern 11Q extra Q */

   

    //     int count = 1;
    // for (int i = 1; i <= 5;i++){
    //     for (int j = 1; j <= i;j++){
    //         printf("%d", count);
    //         count++;
    //     }
    //     printf("\n");



    // }

    //************pattern 12Q extra Q */

    // for (int i = 1; i <= 3;i++){
    //     int digit;

    //     if (i % 2 == 0)
    //     {
    //         digit = 0;
    //     }
    //     else
    //     {
    //         digit = 1;
    //     }

    //     for (int j = 1; j <= 5;j++){
    //         printf("%d", digit);
    //         digit = 1-digit ;
    //     }

    //     printf("\n");
    // }

    //************pattern 13Q extra Q */

    // for (int i = 1; i <= 5;i++){
    //     int count = 1;
    //     for (int j = 1; j <= i;j++){
    //         printf("%d", count);
    //         count++;
    //     }
    //     printf("\n");
    // }

    //************pattern 14Q extra Q */

    // int digit = 0;
    // for (int i = 1; i <= 4;i++){
    //     for (int j = 1; j <= i;j++){
    //         char ch = 'A' + digit;
    //         printf("%c", ch);
    //         digit=digit+1;
    //     }
    //     printf("\n");
    // }

    //***** Q21 Print the following pattern:/

    // for (int i = 1; i <= 5;i++){
    //     int digit;
    //     if(i%2==0){
    //         digit=0;
    //     }
    //     else{
    //         digit=1;
    //     }
    //     for (int j = 1; j <= i;j++){
    //         printf("%d", digit);
    //         digit=1-digit;
    //     }
    //     printf("\n");
    // }

    //*********Extra Q 24. Print the below pattern:  */

    // int count = 1;
    // int digit = 0;

    // for (int i = 1; i <= 4;i++){
    //     for (int j = 1; j <= 4;j++){
           
    //         char ch = 'A' + digit;
    //         if(i%2==0){
    //             printf("%c", ch);
    //             digit++;
    //         }
    //         else{
    //             printf("%d", count);
    //             count++;
    //         }
    //     }
    //     printf("\n");
    // }

    //*********Extra Q 25. Print the below pattern:  */

    // for (int i = 1; i < 5;i++){
    //     for (int j = i; j >0;j--){
    //         printf("%d", j);
    //     }
    //     for (int j = 2; j <= i; j++){
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    //**************Q 23. Print a diamond number pattern:  */

    // for (int i = 1; i <= 4;i++){
    //     for (int j = 1;j<=4-i;j++){
    //         printf(" ");
    //     }
    //     for (int j = i; j > 0; j--)
    //     {
    //         printf("%d", j);
    //     }
    //     for (int j = 2; j <= i; j++){
    //         printf("%d", j);
    //     }
    //         printf("\n");
    //     }



// Extra Q 15. Print the below pattern:  */


    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }


    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 5 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}






