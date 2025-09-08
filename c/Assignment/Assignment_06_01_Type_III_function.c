//^^^^^^^^^^^^Function type III -->function with arguments and with out return type^^^^^^^^^^^^^

#include <stdio.h>

//**********Write a program to check whether a number is even or odd. */
void checkEvenOdd(int);
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
}

void checkEvenOdd(int x)
{

    if (x % 2 == 0)
    {
        printf("The number %d is even.\n", x);
    }
    else
    {
        printf("The number %d is odd.\n", x);
    }
}

//************* Write a program to check given 3 digit number is pallindrome or not.*/

void checkPallindrome(int);
void main()
{
    printf("Enter a 3 digit number: ");
    int num;
    scanf("%d", &num);
    checkPallindrome(num);
}

void checkPallindrome(int num)
{
    
    int  originalNum, reversedNum = 0, digit;
    
    originalNum = num;

    while (num != 0)
    {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num = num / 10;
    }
    if (originalNum == reversedNum)
    {
        printf("The number %d is pallindrome.\n", originalNum);
    }
    else
    {
        printf("The number %d is not pallindrome.\n", originalNum);
    }
}

//*************Write a program to check whether a given year is a leap year.*/

void checkLeapYear(int);
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    checkLeapYear(year);
}

void checkLeapYear(int year)
{


    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Year is a leap year");
    }
    else
    {
        printf("Year is not a leap year");
    }
}

//************Write a program to check whether a given character is a vowel or consonant. */

void checkVowelConsonant(char);
void main()
{
    char ch;
    printf("Enter a character:");
    scanf(" %c", &ch);

    checkVowelConsonant(ch);
}

void checkVowelConsonant(char ch)
{
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("The character is a vowel.\n");
        }
        else
        {
            printf("The character is a consonant.\n");
        }
    }
    else
    {
        printf("Invalid input. Please enter an alphabetic character.\n");
    }
}

//*********Write a program to check whether a person is eligible to vote (age ≥ 18). */

void checkVotingEligibility(int);
void main()
{
    int age;
    printf("Enter the age of the person: ");
    scanf("%d", &age);
    checkVotingEligibility(age);
}
void checkVotingEligibility(int age)
{
    
    if (age >= 18)
    {
        printf("Person is eligible to vote.\n");
    }
    else
    {
        printf("Person is not eligible to vote.\n");
    }
}

//***********Write a program to check whether a given character is uppercase or lowercase. */

void checkUperrLower(int);

void main()
{
    char ch;
    printf("Enter the char : ");
    scanf(" %c", &ch);
    checkUperrLower(ch);
}

void checkUperrLower(int ch)
{
    

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The char is the lower case");
    }
    else
    {
        printf("The char is the upper case");
    }
}

//****Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
// 10 %, 20 % and 25 % respectively otherwise da, ta and hra will be 15 %, 25 % and 30 % respectively.* /

void CalculateSalary(int);
void main()
{
    int salary;
    printf("Enter the salary : ");
    scanf("%d", &salary);
    CalculateSalary(salary);
}

void CalculateSalary(int salary)
{
    
    int da, ta, hra;

    if (salary <= 5000)
    {
        da = salary * 0.10;
        ta = salary * 0.20;
        hra = salary * 0.25;
    }
    else
    {
        da = salary * 0.15;
        ta = salary * 0.25;
        hra = salary * 0.30;
    }

    int total = da + ta + hra;

    printf("%d", total);
}