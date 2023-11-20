#include <stdio.h>

int binary_search(int [], int, int, int);

int main()
{
    int arr[100], n, key;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number you want to search: ");
    scanf("%d", &key);
    int l = 0, h = n - 1;
    int position = binary_search(arr, key, l, h);

    if (position != -1)
    {
        printf("Number found at index %d\n", position);
    }
    else
    {
        printf("Number not found\n");
    }
}

int binary_search(int arr[], int key, int l, int h)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            return binary_search(arr, key, mid + 1, h);
        }
        else
        {
            return binary_search(arr, key, l, mid - 1);
        }
    }
    return -1;
}
