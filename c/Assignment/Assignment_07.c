//^^^^^^^Pointer

#include <stdio.h>
#include <stdbool.h>

//**********swap two numbers */

// void swap(int*, int*);
void main(){
    int a = 10;
    int b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
}

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

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

//**********Write a program to input an array using pointers and print its elements. */

void StoreArray(int *ptr, int size);

void DisplayArray(int *ptr, int size);

int main()
{
    int arr[5];
    int brr[6];
    int crr[8];

    printf("Enter 5 values in the first array:\n");
    StoreArray(arr, 5);
    printf("Enter 6 values in the second array:\n");
    StoreArray(brr, 6);
    printf("Enter 7 values in the third array:\n");
    StoreArray(crr, 7);

    printf("The elements in first array are:\n");
    DisplayArray(arr, 5);
    printf("\nThe elements in second array are:\n");
    DisplayArray(brr, 6);
    printf("\nThe elements in third array are:\n");
    DisplayArray(crr, 7);
}

void StoreArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}

void DisplayArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
}

//**********Write a program to search the element in the array using pointer  */

void StoreArray(int *ptr, int size);

void SearchElement(int *ptr, int size, int num);

int main()
{
    int arr[5];

    printf("Enter 5 values in the first array:\n");
    StoreArray(arr, 5);

    int num;
    printf("Enter the number to search: ");
    scanf("%d", &num);

    SearchElement(arr, 5, num);
}

void StoreArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}

void SearchElement(int *ptr, int size, int num)
{
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (num == ptr[i])
        {
            found = true;
            break;
        }
    }

    if (found)
        printf("Number %d found in the array.\n", num);
    else
        printf("Number %d not found in the array.\n", num);
}