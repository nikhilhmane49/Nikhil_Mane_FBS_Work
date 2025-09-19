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


// int main(){
//     int arr[10];
//     printf("Enter 10 values in the array:\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < 10;i++){
//         int isduplicate = 0;
//         for (int j = i + 1; j < 10;j++){
//             if(arr[i]==arr[j]){
//                 isduplicate = 1;
//                 break;
//             }
//         }

//         if (isduplicate == 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }

  
// }



//***********take the three number form user and store it and display it */

// int main(){
//     int arr[4];
//     int brr[6];
//     int crr[8];

//     printf("Enter 4 values in the first array:\n");
//     for (int i = 0; i < 4; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter 6 values in the second array:\n");
//     for (int i = 0; i < 6; i++)
//     {
//         scanf("%d", &brr[i]);
//     }
//     printf("Enter 8 values in the third array:\n");
//     for (int i = 0; i < 8; i++)
//     {
//         scanf("%d", &crr[i]);
//     }

//     printf("The elements in first array are:\n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\nThe elements in second array are:\n");
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", brr[i]);
//     }
//     printf("\nThe elements in third array are:\n");
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d ", crr[i]);
//     }
// }



// //**********Write a program to input an array using pointers and print its elements. */

// void StoreArray(int *ptr, int size);

// void DisplayArray(int *ptr, int size);

// int main(){
//     int arr[5];
//     int brr[6];
//     int crr[8];

//     printf("Enter 5 values in the first array:\n");
//     StoreArray(arr, 5);
//     printf("Enter 6 values in the second array:\n");
//     StoreArray(brr, 6);
//     printf("Enter 7 values in the third array:\n");
//     StoreArray(crr, 7);



//     printf("The elements in first array are:\n");
//     DisplayArray(arr, 5);
//     printf("\nThe elements in second array are:\n");
//     DisplayArray(brr, 6);
//     printf("\nThe elements in third array are:\n");
//     DisplayArray(crr, 7);

// }

// void StoreArray(int *ptr, int size){
//     for (int i = 0; i < size;i++){
//         scanf("%d", &ptr[i]);
//     }
// }

// void DisplayArray(int *ptr, int size){
//     for (int i = 0; i < size;i++){
//         printf("%d ", ptr[i]);
//     }
// }



//**********Write a program to search the element in the array using pointer  */

// void StoreArray(int *ptr, int size);

// void SearchElement(int *ptr, int size, int num);

// int main(){
//     int arr[5];


//     printf("Enter 5 values in the first array:\n");
//     StoreArray(arr, 5);

//     int num;
//     printf("Enter the number to search: ");
//     scanf("%d", &num);

//     SearchElement(arr, 5, num);
// }


// void StoreArray(int *ptr, int size){
//     for (int i = 0; i < size;i++){
//         scanf("%d", &ptr[i]);
//     }
// }

// void SearchElement(int *ptr, int size, int num)
// {
//     bool found = false;

//     for (int i = 0; i < size;i++){
//         if(num==ptr[i]){
//             found = true;
//             break;
//         }
//     }

//     if (found)
//         printf("Number %d found in the array.\n", num);
//     else
//         printf("Number %d not found in the array.\n", num);
// }


// //********Replace the old value with new value*/

// void storearray(int *ptr, int size);
// void Displayarray(int *ptr, int size);

// void replace(int *ptr,int size, int old, int new);

// int main(){
//     int arr[7];
//     printf("Enter 7 values in the array:\n");
//     storearray(arr, 7);
//     printf("The elements in array are:\n"); 
//     Displayarray(arr, 7);
//     int old, new;
//     printf("\nEnter the old and new value to replace: ");
//     scanf("%d %d", &old, &new);
//     replace(arr, 7, old, new);
//     printf("The elements in array after replacing are:\n");
//     Displayarray(arr, 7);

// }

// void storearray(int *ptr, int size){
//     for (int i = 0; i < size;i++){
//         scanf("%d", &ptr[i]);
//     }
// }

// void Displayarray(int *ptr, int size){
//     for (int i = 0; i < size;i++){
//         printf("%d ", ptr[i]);
//     }
// }


// void replace(int *ptr,int size, int old, int new){
//     for (int i = 0; i < size;i++){
//         if(ptr[i]==old){
//             ptr[i] = new;
//         }
//     }
// }