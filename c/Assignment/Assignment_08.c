//^^^^^^^^^^^^^^Array


#include <stdio.h>
#include <stdbool.h>

//******Find minimum and maximum number in array. */

// int main(){
//     int arr[6];
//     printf("Enter 6 values in the array:\n");
//     for (int i = 0; i < 6;i++){
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0];
//     int min = arr[0];
//     for (int i = 0; i < 6;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     printf("Maximum value in the array is: %d\n", max);
//     printf("Minimum value in the array is: %d\n", min);
// }

//**********Search the given number in array.*/

// int main(){
//     int arr[10];

//     printf("Enter 10 values in the array:\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     //****** */ search
//     int num;
//     bool found = false;

//     printf("Enter the number to search: ");
//     scanf("%d", &num);

//     for (int i = 0; i < 10; i++)
//     {
//         if (num == arr[i])
//         {
//             found = true;
//             break;
//         }
//     }

//     if (found)
//         printf("Number %d found in the array.\n", num);
//     else
//         printf("Number %d not found in the array.\n", num);
// }

//************Find sum of all numbers. */

// int main()
// {
//     int arr[10];

//     printf("Enter 10 values in the array:\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int sum = 0;
//     for (int i = 0; i < 10;i++){
//         sum = sum + arr[i];
//     }

//     printf("Sum of array elements is: %d\n", sum);
// }

//*********4. Find odd and even among the numbers. */
// int main(){
//         int arr[10];

//         printf("Enter 10 values in the array:\n");
//         for (int i = 0; i < 10; i++)
//         {
//             scanf("%d", &arr[i]);
//         }

//         for (int i = 0; i < 10;i++){
//             if(arr[i]%2==0){
//                 printf("%d is even\n", arr[i]);
//             }
//             else{
//                 printf("%d is odd\n", arr[i]);
//             }
//         }
// }


