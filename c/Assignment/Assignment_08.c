//^^^^^^^^^^^^^^Array

#include <stdio.h>
#include <stdbool.h>

//******Find minimum and maximum number in array. */

int main(){
    int arr[6];
    printf("Enter 6 values in the array:\n");
    for (int i = 0; i < 6;i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 6;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum value in the array is: %d\n", max);
    printf("Minimum value in the array is: %d\n", min);
}

//**********Search the given number in array.*/

int main(){
    int arr[10];

    printf("Enter 10 values in the array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    //****** */ search
    int num;
    bool found = false;

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        if (num == arr[i])
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

//************Find sum of all numbers. */

int main()
{
    int arr[10];

    printf("Enter 10 values in the array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < 10;i++){
        sum = sum + arr[i];
    }

    printf("Sum of array elements is: %d\n", sum);
}

//*********4. Find odd and even among the numbers. */
int main(){
        int arr[10];

        printf("Enter 10 values in the array:\n");
        for (int i = 0; i < 10; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < 10;i++){
            if(arr[i]%2==0){
                printf("%d is even\n", arr[i]);
            }
            else{
                printf("%d is odd\n", arr[i]);
            }
        }
}

//****************Take two array and add sum in third array */
int main(){
    int arr1[5];
    int arr2[5];
    int arr3[5];

    printf("Enter the frist array value:\n");
    for (int i = 0; i < 5;i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the second array value:\n");

    for (int i = 0; i < 5;i++){
        scanf("%d", &arr2[i]);
    }

    printf("the combination of two array is:\n");
    for (int i = 0; i < 5; i++){

        arr3[i] = arr1[i] + arr2[i];
    }

    for (int i = 0; i < 5;i++){
        printf("%d ", arr3[i]);
    }
}

//******************Reverse the given array. */

int main(){
    int arr[5];
    printf("Enter 5 values in the array:\n");
    for (int i = 0; i < 5;i++){
        scanf("%d", &arr[i]);
    }

    printf("The reverse of the array is:\n");
    for (int i = 4; i >=0;i--){
        printf("%d ", arr[i]);
    }
}

//******************** Merge two arrays*/

int main(){
    int arr[5];
    printf("Enter 5 values in the array:\n");
    for (int i = 0; i < 5;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter 5 values in the array:\n");
    int arr1[5];
    for (int i = 0; i < 5;i++){
        scanf("%d", &arr1[i]);
    }

    int arrrsult[10];
    for (int i = 0; i < 5;i++){
        arrrsult[i] = arr[i];
    }
    for (int i = 5; i < 10;i++){
        arrrsult[i] = arr1[i-5];
    }
    printf("The combination of two array is:\n");
    for (int i = 0; i < 10;i++){
        printf("%d ", arrrsult[i]);
    }
}

//*******************Print alternate elements in array.*/

int main()
{
    int arr[10];
    printf("Enter 10 values in the array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
    }

//***************Sort the array.*********/

int main(){
    int arr[10];
    printf("Enter 10 values in the array:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10;i++){
        for (int j = i + 1; j < 10;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10;i++){
        printf("%d ", arr[i]);
    }
}

//******************6. Accept array and print only prime numbers of array. */
int main()
{
    int arr[5];
    printf("Enter the value in the array");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("prime numbers of array%d \n", arr[i]);
        }
    }
}

//**********Remove the duplicate elements in brr */
int main()
{
    int arr[5];
    int brr[5];

    printf("Enter 10 values in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter 10 values in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }
    printf("The unique elements in second array are:\n");
    for (int i = 0; i < 5; i++)
    {
        bool flag = 0;
        for (int j = 0; j < 5; j++)
        {
            if (brr[i] == arr[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d ", brr[i]);
        }
    }
}


//************Remove the duplicate elements in arr */
int main()
{
    int arr[10];
    printf("Enter 10 values in the array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int isduplicate = 0;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
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

//***********take the three number form user and store it and display it */

int main()
{
    int arr[4];
    int brr[6];
    int crr[8];

    printf("Enter 4 values in the first array:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter 6 values in the second array:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &brr[i]);
    }
    printf("Enter 8 values in the third array:\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &crr[i]);
    }

    printf("The elements in first array are:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe elements in second array are:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", brr[i]);
    }
    printf("\nThe elements in third array are:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", crr[i]);
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

//********Replace the old value with new value*/

void storearray(int *ptr, int size);
void Displayarray(int *ptr, int size);

void replace(int *ptr, int size, int old, int new);

int main()
{
    int arr[7];
    printf("Enter 7 values in the array:\n");
    storearray(arr, 7);
    printf("The elements in array are:\n");
    Displayarray(arr, 7);
    int old, new;
    printf("\nEnter the old and new value to replace: ");
    scanf("%d %d", &old, &new);
    replace(arr, 7, old, new);
    printf("The elements in array after replacing are:\n");
    Displayarray(arr, 7);
}

void storearray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}

void Displayarray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
}

void replace(int *ptr, int size, int old, int new)
{
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == old)
        {
            ptr[i] = new;
        }
    }
}

//*******Removing the element form the array */

void StoreArray(int *ptr, int size);
int SearchElement1(int *ptr, int size, int num);
void DisplayArray(int *ptr, int size);

void Removeelement(int *ptr, int size, int index);

int main()
{
    int arr[5];
    printf("Enter 5 values in the array:\n");
    int size = 5;
    StoreArray(arr, 5);

    int num;
    printf("Enter the number to search: ");
    scanf("%d", &num);
    int result = SearchElement1(arr, 5, num);

    Removeelement(arr, 5, result);
    printf("The elements in array after removing are:\n");

    size--;
    DisplayArray(arr, size);
}

void StoreArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}

int SearchElement1(int *ptr, int size, int num)
{
    int found = 0;

    for (int i = 0; i < size; i++)
    {
        if (num == ptr[i])
        {
            found = 1;
            return i;
        }
    }

    if (found == 0)
    {
        return -1;
    }
}

void Removeelement(int *ptr, int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        ptr[i] = ptr[i + 1];
    }
}

void DisplayArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
}