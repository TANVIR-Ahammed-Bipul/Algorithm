#include <stdio.h>

int main()
{
    int arr[100], n, min;
    printf("Enter the number of size: ");
    scanf("%d", &n);
    printf("Enter Numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("After sorting:\n");
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int swap = arr[i];
            arr[i] = arr[min];
            arr[min] = swap;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
