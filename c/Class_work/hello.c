// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[10];

    printf("Enter 10 values in the array:\n");

    // insert
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // // display
    // printf("\nThe array elements are: ");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    // // search
    // int num;
    // bool found = false;

    // printf("Enter the number to search: ");
    // scanf("%d", &num);

    // for (int i = 0; i < 10; i++)
    // {
    //     if (num == arr[i])
    //     {
    //         found = true;
    //         break;
    //     }
    // }

    // if (found)
    //     printf("Number %d found in the array.\n", num);
    // else
    //     printf("Number %d not found in the array.\n", num);

    //*****sum of elements in array

    int sum = 0;
    for (int i = 0; i < 10;i++){
        sum = sum + arr[i];
    }

    printf("Sum of array elements is: %d\n", sum);


    //*****reverse the arr */

    for (int i = 9; i >= 0;i--){
        printf("%d ", arr[i]);
    }

        return 0;
}
