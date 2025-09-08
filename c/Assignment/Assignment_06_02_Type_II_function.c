//^^^^^^^^^^^^Function type II -->function without arguments and with return type^^^^^^^^^^^^^

#include <stdio.h>

// //****Accept the price from user. Ask the user if he is a student (user may say y or n). If he
// is a student and he has purchased more than 500 than discount is 20 % otherwise discount is 10 %.But if he is not a student then if he has purchased more than 600 discount is 15 % otherwise there is not discount.* /

float priceCalculator();

int main()
{
    float final_price = priceCalculator();
    printf("Final price: %.2f", final_price);
    return 0;
}

float priceCalculator()
{
    float price, final_price;
    char student;

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if (student == 'y')
    {
        if (price > 500)
            final_price = price - (price * 0.2);
        else
            final_price = price - (price * 0.1);
    }
    else
    {
        if (price > 600)
            final_price = price - (price * 0.15);
        else
            final_price = price;
    }
    return final_price;
}



// //*****find the greatest of three number  */

int checkGreatest();

int main()
{
    int greatest = checkGreatest();
    printf("The greatest number is: %d", greatest);
    return 0;
}

int checkGreatest()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
        return num1;
    else if (num2 >= num1 && num2 >= num3)
        return num2;
    else
        return num3;
}

//********Accept two numbers and an operator (+, -, *, /). Perform the operation on the two numbers based on the operator entered by user.

int operationCalculator();
int main()
{
   int result = operationCalculator();
    printf("Result: %.2f", result);
}

int operationCalculator()
{
    int num1, num2;
    char operator;
    float result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+')
    {
        result = num1 + num2;
        return result;
    }
    else if (operator == '-')
    {
        result = num1 - num2;
        return result;
    }
    else if (operator == '*')
    {
        result = num1 * num2;
        return result;
    }
    else if (operator == '/')
    {
        if (num2 != 0)
        {
            result = (float)num1 / num2;
            return result;
        }
        else
        {
            printf("Error: Division by zero is not allowed.");
        }
    }
    else
    {
        printf("Invalid operator.");
    }
}

//********* */ Accept three sides of a triangle from the user and determine whether the triangle is
//     equilateral,
//     isosceles, or scalene.

int triangleType();

int main()
{
    int type = triangleType();
    if (type == 1)
        printf("Equilateral");
    else if (type == 2)
        printf("Isosceles");
    else
        printf("Scalene");
    return 0;
}

int triangleType()
{
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        return 1; // Equilateral
    else if (a == b || a == c || b == c)
        return 2; // Isosceles
    else
        return 3; // Scalene
}

//**********Accept the age and check if the person is: */

int checkAgeCategory();

int main()
{
    int category = checkAgeCategory();
    if (category == 1)
        printf("Child");
    else if (category == 2)
        printf("Teenager");
    else if (category == 3)
        printf("Adult");
    else
        printf("Senior");
    return 0;
}

int checkAgeCategory()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if (age < 12)
        return 1;
    else if (age <= 19)
        return 2;
    else if (age <= 59)
        return 3;
    else
        return 4;
}
//************Ask the user to enter marks.
// Then show the result based on these rules : If marks are more than 75 → show "Distinction" If marks are more than 65 → show "First Class" If marks are more than 55 → show "Second Class" If marks are 40 or more → show "Pass Class" If marks are less than 40 → show "Fail" * /

int checkMarks();

int main()
{
    int result = checkMarks();
    if (result == 1)
        printf("Distinction");
    else if (result == 2)
        printf("First Class");
    else if (result == 3)
        printf("Second Class");
    else if (result == 4)
        printf("Pass Class");
    else
        printf("Fail");
    return 0;
}

int checkMarks()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks > 75)
        return 1;
    else if (marks > 65)
        return 2;
    else if (marks > 55)
        return 3;
    else if (marks >= 40)
        return 4;
    else
        return 5;
}
//******* */ Accept a number and check if it is divisible by 3, 5, or both.
// (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
// both" or” Divisible by None”)

int checkDivisibility();

int main()
{
    int result = checkDivisibility();
    if (result == 1)
        printf("Divisible by 3 but not by 5");
    else if (result == 2)
        printf("Divisible by 5 but not by 3");
    else if (result == 3)
        printf("Divisible by both");
    else
        printf("Divisible by None");
    return 0;
}

int checkDivisibility()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 != 0)
        return 1;
    else if (num % 5 == 0 && num % 3 != 0)
        return 2;
    else if (num % 3 == 0 && num % 5 == 0)
        return 3;
    else
        return 4;
}