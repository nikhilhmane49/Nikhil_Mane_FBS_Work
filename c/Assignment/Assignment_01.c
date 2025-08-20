#include <stdio.h>

//********* Write a program to check whether a number is even or odd.*/
void main()
{

    int num = 5;

    if (num % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}

//*********Write a program to check given 3 digit number is pallindrome or not. */

void main()
{
    int num = 121;
    int r1, r2, r3, q1, rev;

    r1 = num % 10;
    q1 = num / 10;
    r2 = q1 % 10;
    r3 = q1 / 10;

    rev = r1 * 100 + r2 * 10 + r3;
    if (rev == num)
    {
        printf("Number is pallindrome");
    }
    else
    {
        printf("Number is not pallindrome");
    }
}

//********Write a program to check whether a given year is a leap year. */

void main()
{
    int year = 2020;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Year is a leap year");
    }
    else
    {
        printf("Year is not a leap year");
    }
}

//*********Write a program to check whether a given character is a vowel or consonant. */

void main()
{
    char ch = 'a';

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Character is a vowel");
    }
    else
    {
        printf("Character is a consonant");
    }
}

//******Write a program to check whether a person is eligible to vote (age ≥ 18). */

void main()
{
    int age = 20;

    if (age >= 18)
    {
        printf("Person is eligible to vote");
    }
    else
    {
        printf("Person is not eligible to vote");
    }
}

//******Write a program to check whether a given character is uppercase or lowercase. */

void main()
{
    char ch = 'A';

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("character is uppercase");
    }
    else
    {
        printf("character is lowercase");
    }
}

//******Calculating total salary based on basic. */

void main()
{
    float basic, da, hra, ta, total_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000)
    {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    }
    else
    {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }

    total_salary = basic + da + ta + hra;
    printf("Total Salary: %.2f\n", total_salary);
}