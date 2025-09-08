//^^^^^^^^^^^^Function type III -->function with arguments and with  return type^^^^^^^^^^^^^

#include <stdio.h>

//**********Write a program to check whether a number is even or odd. */
int checkEvenOdd(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int cont=checkEvenOdd(num);

    if(cont==1)
    {
        printf("The number %d is even.\n", num);
    }
    else
    {
        printf("The number %d is odd.\n", num);
    }


}

int checkEvenOdd(int x)
{

    if (x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//************* Write a program to check given 3 digit number is pallindrome or not.*/

int checkPallindrome(int);
int main()
{
    printf("Enter a 3 digit number: ");
    int num;
    scanf("%d", &num);
   int cont= checkPallindrome(num);
    if(cont==1)
    {
         printf("The number %d is pallindrome.\n", num);
    }
    else
    {
         printf("The number %d is not pallindrome.\n", num);
    }
}

int checkPallindrome(int num)
{

    int originalNum, reversedNum = 0, digit;

    originalNum = num;

    while (num != 0)
    {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num = num / 10;
    }
    if (originalNum == reversedNum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//*************Write a program to check whether a given year is a leap year.*/

int checkLeapYear(int);
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    int cont=checkLeapYear(year);
    if(cont==1)
    {
         printf("The year %d is a leap year.\n", year);
    }
    else
    {
         printf("The year %d is not a leap year.\n", year);
    }
}

int checkLeapYear(int year)
{

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//************Write a program to check whether a given character is a vowel or consonant. */

int checkVowelConsonant(char);
int main()
{
    char ch;
    printf("Enter a character:");
    scanf(" %c", &ch);

    int cont=checkVowelConsonant(ch);
    if(cont==1)
    {
         printf("The character is a vowel.\n");
    }
    else
    {
         printf("The character is a consonant.\n");
    }
}

int checkVowelConsonant(char ch)
{

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            return 1;
            
        }
        else
        {
            return 0;
           
        }
    }
    else
    {
        printf("Invalid input. Please enter an alphabetic character.\n");
    }
}

//*********Write a program to check whether a person is eligible to vote (age ≥ 18). */

int checkVotingEligibility(int);
int main()
{
    int age;
    printf("Enter the age of the person: ");
    scanf("%d", &age);
   int cont= checkVotingEligibility(age);
    if(cont==1)
    {
          printf("Person is eligible to vote.\n");
    }
    else
    {
          printf("Person is not eligible to vote.\n");
    }
}
int checkVotingEligibility(int age)
{

    if (age >= 18)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//***********Write a program to check whether a given character is uppercase or lowercase. */

int checkUperrLower(int);

int main()
{
    char ch;
    printf("Enter the char : ");
    scanf(" %c", &ch);
   int cont= checkUperrLower(ch);
   if(cont){
       printf("The char is the lower case");
   }
   else{
       printf("The char is the upper case");
   }

}

int checkUperrLower(int ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return 1;
        
    }
    else
    {
        return 0;
    }
}

//****Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
// 10 %, 20 % and 25 % respectively otherwise da, ta and hra will be 15 %, 25 % and 30 % respectively.* /

int CalculateSalary(int);
int main()
{
    int salary;
    printf("Enter the salary : ");
    scanf("%d", &salary);
    int cont=CalculateSalary(salary);
    printf("%d", cont);
}

int CalculateSalary(int salary)
{

    int total, da, ta, hra;

    if (salary <= 5000)
    {
        da = salary * 0.10;
        ta = salary * 0.20;
        hra = salary * 0.25;
         total = da + ta + hra;

         return total;
    }
    else
    {
        da = salary * 0.15;
        ta = salary * 0.25;
        hra = salary * 0.30;
        total = da + ta + hra;

        return total;
    }

}
