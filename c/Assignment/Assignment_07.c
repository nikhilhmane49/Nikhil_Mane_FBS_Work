//^^^^^^^Pointer

#include <stdio.h>

//**********swap two numbers */

// void swap(int*, int*);
// void main(){
//     int a = 10;
//     int b = 20;

//     printf("Before swap: a = %d, b = %d\n", a, b);
//     swap(&a, &b);
//     printf("After swap: a = %d, b = %d\n", a, b);
// }

// void swap(int *x,int *y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

//**********Write a program to input an array using pointers and print its elements. */

int main(){
        int arr[5];
        int *ptr;

        ptr = arr;

        printf("Enter 5 values in the array:\n");
        for (int i = 0; i < 5;i++){
            scanf("%d", ptr + i);
        }

        for (int i = 0; i < 5;i++){
            printf("%d ", *(ptr + i));
        }
}

//*****Find the maximum and minimum element in an array using pointers. */


int main(){
    int arr[5];
    int *ptr;

    ptr = arr;

    for (int i = 0; i < 5;i++){
        scanf("%d", ptr + i);
    }

    int max = *ptr;
    int min = *ptr;

    for (int i = 0; i < 5;i++){
        if (*(ptr + i) > max){
            max = *(ptr + i);
        }
        if (*(ptr + i) < min){
            min = *(ptr + i);
        }
    }
}