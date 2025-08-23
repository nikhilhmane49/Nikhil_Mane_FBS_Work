#include <stdio.h>

// //****Accept the price from user. Ask the user if he is a student (user may say y or n). If he
// is a student and he has purchased more than 500 than discount is 20 % otherwise discount is 10 %.But if he is not a student then if he has purchased more than 600 discount is 15 % otherwise there is not discount.* /


void main(){
    float price,  final_price;

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    char student;
    scanf(" %c", &student);

    if(student == 'y'){
        if(price > 500){
            final_price = price - (price * 0.2);
            printf("Final price: %.2f", final_price);
        }
        else{
            final_price = price - (price * 0.1);
            printf("Final price: %.2f", final_price);
        }
    }
    else{
        if(price > 600){
            final_price = price - (price * 0.15);
            printf("Final price: %.2f", final_price);
        }
        else{
            printf("No discount applicable. Final price: %.2f", price);
        }
    }

}

//*****find the greatest of three number  */



void main(){
    int num1 = -50;
    int num2 = -40;
    int num3 = -30;

    if(num1>num2){
        if(num1>num3){
            printf("the grater number is %d", num1);
        }
        else{
            printf("the greater number is %d", num3);
        }
    }
    else{
        if(num2>num3){
            printf("the greater number is %d", num2);
        }
        else{
            printf("the greater number is %d", num3);
        }
    }
}



//********Accept two numbers and an operator (+, -, *, /). Perform the operation on the two numbers based on the operator entered by user.


void main(){
    int num1, num2;
    char operator;
    float result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    if(operator == '+'){
        result = num1 + num2;
        printf("Result: %.2f", result);
    }
    else if(operator == '-'){
        result = num1 - num2;
        printf("Result: %.2f", result);
    }
    else if(operator == '*'){
        result = num1 * num2;
        printf("Result: %.2f", result);
    }
    else if(operator == '/'){
        if(num2 != 0){
            result = (float)num1 / num2;
            printf("Result: %.2f", result);
        }
        else{
            printf("Error: Division by zero is not allowed.");
        }
    }
    else{
        printf("Invalid operator.");
    }
}

//********* */ Accept three sides of a triangle from the user and determine whether the triangle is
//     equilateral,
//     isosceles, or scalene.




int main(){
    int num1, num2, num3;

    printf("enter the three side of triangle");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1==num2 && num2==num3){
        printf("The triangle is equilateral");
    }
    else if(num1==num2 || num1==num3 || num2==num3){
        printf("The triangle is isosceles");
    }
    else{
        printf("The triangle is scalene");
    }
}

//**********Accept the age and check if the person is: */


int main(){
    int age;
    printf("Enter the age");
    scanf("%d", &age);

    if(age<12){
        printf("The person is child");
    }
    else if(age<=19 && age>=12){
        printf("The person is teenager");
    }
    else if(age<=59 && age>=20){
        printf("The person is adult");
    }
    else{
        printf("The person is senior");
    }
}

//************Ask the user to enter marks.
// Then show the result based on these rules : If marks are more than 75 → show "Distinction" If marks are more than 65 → show "First Class" If marks are more than 55 → show "Second Class" If marks are 40 or more → show "Pass Class" If marks are less than 40 → show "Fail" * /

int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if(marks > 75){
        printf("Distinction");
    }
    else if(marks > 65){
        printf("First Class");
    }
    else if(marks > 55){
        printf("Second Class");
    }
    else if(marks >= 40){
        printf("Pass Class");
    }
    else{
        printf("Fail");
    }
}

//******* */ Accept a number and check if it is divisible by 3, 5, or both.
// (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
// both" or” Divisible by None”)

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 != 0){
        printf("Divisible by 3 but not by 5");
    }
    else if(num % 5 == 0 && num % 3 != 0){
        printf("Divisible by 5 but not by 3");
    }
    else if(num % 3 == 0 && num % 5 == 0){
        printf("Divisible by both");
    }
    else{
        printf("Divisible by None");
    }
}
