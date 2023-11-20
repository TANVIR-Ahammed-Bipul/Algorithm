#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    return a < b ? a : b;
}

int divideCoins(int coins[], int n, int sum1, int sum2, int index)
{
    if (index == n)
    {
        return abs(sum1 - sum2);
    }

    int diff1 = divideCoins(coins, n, sum1 + coins[index], sum2, index + 1);

    int diff2 = divideCoins(coins, n, sum1, sum2 + coins[index], index + 1);

    return min(diff1, diff2);
}

int main()
{
    int n, x, m;
    scanf("%d", &n);
    for (x = 1; x <= n; x++)
    {
        scanf("%d", &m);
        int coins[m], i;
        for (i = 0; i < m; i++)
        {
            scanf("%d", &coins[i]);
        }
        int diff = divideCoins(coins, m, 0, 0, 0);
        printf("%d\n", diff);
    }

    return 0;
}
