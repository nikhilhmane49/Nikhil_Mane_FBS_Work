#include <stdio.h>
#include <math.h>


int main()
{

    //*****1. Print armstrong numbers in the given range 1 to n. */

    printf("Enter the range: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int sum = 0;
        int tempcamp = num;
        int temp = num;

        // find the count of the number

        int count = 0;
        while (temp != 0)
        {
            count++;
            temp = temp / 10;
        }

        // calculate the sum of the number with thier power
        while (num != 0)
        {
            int digit = num % 10;
            sum = sum + (int)(pow(digit, count) + 0.5);
            num = num / 10;
        }

        if (sum == tempcamp)
        {
            printf("%d\n", tempcamp);
        }
    }

    //***********************Print prime numbers in the given range 1 to n. */

    int n;
    printf("Enter the range: ");
    scanf("%d", &n);

    for (int i = 1; i <= n;i++){
        int num = i;
        int count = 0;

        for (int j = 1; j <= i;j++){
            if(num%j==0){
                count++;
            }
        }

        if(count==2){
            printf("%d\n", num);
        }
    }

    //********Print perfect numbers in the given range 1 to n. */

    int n;
    printf("Enter the range: ");
    scanf("%d", &n);

    for (int i = 1; i <= n;i++){
        int num = i;
        int sum = 0;

        for (int j = 1; j <= i;j++){
            if(num%j==0 && j!=num){
                sum = sum + j;
            }
        }
        if(sum==num){
            printf("%d\n", num);
        }
    }

    //*************Print strong numbers in the given range 1 to n. */

    int n;
    printf("Enter the range: ");
    scanf("%d", &n);

    for (int i = 1; i <= n;i++){
        int num = i;
        int sum = 0;

        int temp = num;

        while(num!=0){
            int digit = num % 10;
            int fact = 1;

            for(int j=1;j<=digit;j++){
                fact = fact * j;
            }

            sum = sum + fact;
            num = num / 10;
        }

        if(sum==temp){
            printf("%d\n", temp);
        }
    }
}