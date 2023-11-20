#include <stdio.h>

int main()
{
    int arr[100], n, num;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter some integer in ascending order: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter a number you want to search: ");
    scanf("%d", &num);
    int l, h, mid;
    l=0;
    h= n-1;
    while(l<=h)
    {
        mid= (l+h)/2;
        if(arr[mid]==num)
        {
            printf("Number found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid]<num)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    printf("Number not found.\n");

    return 0;
}
