#include <stdio.h>
int linear_search(int arr[], int size, int num);

int linear_search(int arr[], int size, int num)
{
    if(size==0)
        return -1;
    else if(arr[size-1]==num)
        return size-1;
    else
        return linear_search(arr, size-1, num);
}

int main()
{
    int size;
    printf("Enter number of size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter number: \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int num;
    printf("Enter number you want to search: ");
    scanf("%d", &num);
    int loc=linear_search(arr, size, num);

    if(loc==-1)
    {
        printf("Number not found\n");
    }
    else
        printf("%d found at index %d\n", num, loc+1);


    return 0;
}
