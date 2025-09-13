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