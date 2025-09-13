// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

// int main()
// {
//     int arr[10];

//     printf("Enter 10 values in the array:\n");

//     // insert
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // // display
//     // printf("\nThe array elements are: ");
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//     // printf("\n");

//     // // search
//     // int num;
//     // bool found = false;

//     // printf("Enter the number to search: ");
//     // scanf("%d", &num);

//     // for (int i = 0; i < 10; i++)
//     // {
//     //     if (num == arr[i])
//     //     {
//     //         found = true;
//     //         break;
//     //     }
//     // }

//     // if (found)
//     //     printf("Number %d found in the array.\n", num);
//     // else
//     //     printf("Number %d not found in the array.\n", num);

//     //*****sum of elements in array

//     int sum = 0;
//     for (int i = 0; i < 10;i++){
//         sum = sum + arr[i];
//     }

//     printf("Sum of array elements is: %d\n", sum);


//     //*****reverse the arr */

//     for (int i = 9; i >= 0;i--){
//         printf("%d ", arr[i]);
//     }

//         return 0;
// }



//**********Remove the duplicate elements in brr */
// int main(){
//     int arr[5];
//     int brr[5];

//     printf("Enter 10 values in the array:\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter 10 values in the array:\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &brr[i]);
//     }
//     printf("The unique elements in second array are:\n");
//     for (int i = 0; i < 5;i++){
//         bool flag = 0;
//         for (int j = 0; j < 5;j++){
//             if(brr[i]==arr[j]){
//                 flag=1;
//             }
//         }
//         if(flag==0){
//             printf("%d ", brr[i]);
//         }
//     }
// }


int main(){
    int arr[10];
    printf("Enter 10 values in the array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10;i++){
        int isduplicate = 0;
        for (int j = i + 1; j < 10;j++){
            if(arr[i]==arr[j]){
                isduplicate = 1;
                break;
            }
        }

        if (isduplicate == 0)
        {
            printf("%d ", arr[i]);
        }
    }

  
}