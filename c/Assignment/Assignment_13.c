#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int *arr;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);

    free(arr); // ✅ Free allocated memory
    return 0;
}
