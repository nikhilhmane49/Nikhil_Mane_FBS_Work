#include <stdio.h>

//********Print numbers from 1 to 10 */

int main(){
int num = 1;

    while(num<=10){
        printf("%d\n", num);
        num++;
    }

}

//********* Print table for given number.*/

int main(){
    int num1;
    printf("Enter the number");
    scanf("%d", &num1);

    int i = 1;
    while(i<=10){
        int result = i * num1;
        printf("%d\n", result);
        i++;
    }
}

//**********Sum of numbers in given range. */


int main(){
    int start, end;
    int sum = 0;

    printf("Enter the start and end number: ");
    scanf("%d %d", &start, &end);

    int i = start;
    while(i<=end){
        sum = sum + i;
        i++;
    }

    printf("The sum of the range number is %d", sum);
}

//***********Check the given number is prime or not. */


int main(){
    int num1;
    printf("Enter the number : ");
    int count = 0;
    scanf("%d", &num1);
   
    int i = 1;

    while(i<=num1){
        if(num1%i==0){
            count++;
        }
        i++;
    }

    printf("Count %d\n", count);

    if(count==2){
        printf("%d is a prime number", num1);
    }
    else{
        printf("%d is not a prime number", num1);
    }
}

//**********Check the given number is Palindrome number or not. */

int main(){
    int num1,temp;
    int rev = 0;
    printf("Enter the number : ");
    scanf("%d", &num1);
    temp = num1;

    while(num1!=0){
        int digit = num1 % 10;
        rev = rev * 10 + digit;
        num1 = num1 / 10;
    }

    if(temp==rev){
        printf("the number is Palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
}

//**********Check the given number is Armstrong number or not.. */


int main(){
    int num1, temp;
    int sum = 0;
    printf("Enter the Number : ");
    scanf("%d", &num1);
    temp = num1;

    while(num1!=0){
        int digit = num1 % 10;
        sum = sum + (digit * digit * digit);
        num1 = num1 / 10;
    }

    if(temp==sum){
        printf("The number is Armstrong");
    }
    else{
        printf("The number is not Armstrong");
    }
}

//***********Check the given number is Perfect number or not. */


int main(){
    int num1, temp;
    int sum = 0;
    printf("Enter the Number : ");
    scanf("%d", &num1);
    temp = num1;

    int i = 1;

    while(i<num1){
    if(num1%i==0){
        sum = sum + i;
    }
    i++;
}
    printf("%d\n", sum);

    if(sum==temp){
        printf("the Number is Perfect");
    }
    else{
        printf("the number is not Perfect");
    }
}

//*****************Find factorial of given number. */

int main(){
    int num1;
    printf("Enter the Number :");
    scanf("%d", &num1);
    int fact = 1;

    while (num1 != 0)
    {
        fact = fact * num1;
        num1--;
    }

    printf(" the factoreal number is %d", fact);
}

//*********Check the given number is Strong number or not. */

int main()
{
    int num1;
    printf("Enter the Number :");
    scanf("%d", &num1);

    int temp = num1;
    int fact = 1;
    int sum = 0;
    while (num1 != 0)
    {
        int digit = num1 % 10;
        while (digit != 0)
        {
            fact = fact * digit;
            digit--;
        }
        printf(" the fact of %d\n", fact);
        sum = sum + fact;
        fact = 1;
        num1 = num1 / 10;
    }

    printf("%d\n", sum);

    if (temp == sum)
    {
        printf("the Number is Strong");
    }
    else
    {
        printf("the Number is not a Strong");
    }
 }

//************Find Sum of first and last digit of given number. */

int main(){

int num1;
int temp;
int sum = 0;
printf("Enter the Number : ");
scanf("%d", &num1);

int last = num1 % 10;
while(num1>=10){
    num1 = num1 / 10;
}
int first = num1;

printf("Sum of first and last digit = %d\n", first + last);
}