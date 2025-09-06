#include <stdio.h>

//**********Write a program to check whether a number is even or odd. */
// int checkEvenOdd();
// int main()
// {
//    int cont= checkEvenOdd();

//    if(cont){
//        printf("the Number is even");
//    }
//    else{
//        printf("the Number is odd");
//    }
// }

// int checkEvenOdd()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num % 2 == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

//************* Write a program to check given 3 digit number is pallindrome or not.*/

// int checkPallindrome();
// int main()
// {
//    int cont= checkPallindrome();
//    if(cont){
//        printf("The number  is pallindrome.\n");
//    }
//    else{
//        printf("The number is not pallindrome.\n");
//    }
// }

// int checkPallindrome()
// {
//     printf("Enter a 3 digit number: ");
//     int num, originalNum, reversedNum = 0, digit;
//     scanf("%d", &num);
//     originalNum = num;

//     while (num != 0)
//     {
//         digit = num % 10;
//         reversedNum = reversedNum * 10 + digit;
//         num = num / 10;
//     }
//     if (originalNum == reversedNum)
//     {
//         return 1;
        
//     }
//     else
//     {
       
//         return 0;
//     }
// }

//*************Write a program to check whether a given year is a leap year.*/

// int checkLeapYear();
// int main()
// {
//     int cont = checkLeapYear();

//     if (cont)
//     {
//         printf("Year is a leap year");
//     }
//     else
//     {
//         printf("Year is not a leap year");
//     }
// }

// int checkLeapYear()
// {

//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// ************Write a program to check whether a given character is a vowel or consonant. */

// void checkVowelConsonant();
// void main()
// {
//     checkVowelConsonant();
// }

// void checkVowelConsonant()
// {
//     char ch;
//     printf("Enter a character:");
//     scanf(" %c", &ch);

//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//         {
//             printf("The character is a vowel.\n");
//         }
//         else
//         {
//             printf("The character is a consonant.\n");
//         }
//     }
//     else
//     {
//         printf("Invalid input. Please enter an alphabetic character.\n");
//     }
// }

//*********Write a program to check whether a person is eligible to vote (age ≥ 18). */

// void checkVotingEligibility();
// void main()
// {
//     checkVotingEligibility();
// }
// void checkVotingEligibility()
// {
//     int age;
//     printf("Enter the age of the person: ");
//     scanf("%d", &age);
//     if (age >= 18)
//     {
//         printf("Person is eligible to vote.\n");
//     }
//     else
//     {
//         printf("Person is not eligible to vote.\n");
//     }
// }

//***********Write a program to check whether a given character is uppercase or lowercase. */

// void checkUperrLower();

// void main()
// {
//     checkUperrLower();
// }

// void checkUperrLower()
// {
//     char ch;
//     printf("Enter the char : ");
//     scanf(" %c", &ch);

//     if (ch >= 'a' && ch <= 'z')
//     {
//         printf("The char is the lower case");
//     }
//     else
//     {
//         printf("The char is the upper case");
//     }
// }

//****Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
// 10 %, 20 % and 25 % respectively otherwise da, ta and hra will be 15 %, 25 % and 30 % respectively.* /

// void CalculateSalary();
// void main()
// {
//     CalculateSalary();
// }

// void CalculateSalary()
// {
//     int salary;
//     printf("Enter the salary : ");
//     scanf("%d", &salary);
//     int da, ta, hra;

//     if (salary <= 5000)
//     {
//         da = salary * 0.10;
//         ta = salary * 0.20;
//         hra = salary * 0.25;
//     }
//     else
//     {
//         da = salary * 0.15;
//         ta = salary * 0.25;
//         hra = salary * 0.30;
//     }

//     int total = da + ta + hra;

//     printf("%d", total);
// }