#include <stdio.h>

int sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int g(int n)
{
    while (n >= 10)
    {
        n = sum(n);
    }
    return n;
}

int main()
{
    int N;

    while (1)
    {
        scanf("%d", &N);

        if (N == 0)
        {
            break;
        }

        int output = g(N);
        printf("%d\n", output);
    }

    return 0;
}


