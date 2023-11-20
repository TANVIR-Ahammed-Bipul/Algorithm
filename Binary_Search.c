#include <stdio.h>

int binarySearch(int array[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main(void)
{
    int N, K, array[100];
    scanf("%d", &N);
    scanf("%d", &K);
    for(int i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    int result = binarySearch(array, K, 0, N - 1);
    if (result == -1)
        printf("false\n");
    else
        printf("true\n");
    return 0;
}

