#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        int L, i, j, k;
        scanf("%d", &L);

        int carry[L];
        for (k = 0; k < L; k++)
        {
            scanf("%d", &carry[k]);
        }

        int swp = 0;
        for (i = 0; i < L - 1; i++)
        {
            for (j = 0; j < L - i - 1; j++)
            {
                if (carry[j] > carry[j + 1])
                {
                    int temp = carry[j];
                    carry[j] = carry[j + 1];
                    carry[j + 1] = temp;
                    swp++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", swp);
    }

    return 0;
}
