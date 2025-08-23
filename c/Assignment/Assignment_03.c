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



