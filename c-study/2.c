#include <stdio.h>

int main()
{
    unsigned int a = 127;
    unsigned int b = 128;
    int binary_a[20] = { 0 };
    int binary_b[20] = { 0 };

    int position_a = 0;
    int position_b = 0;

    int cnt = 0;

    while (1)
    {
        binary_a[position_a] = a % 2;
        a = a / 2;
        position_a++;

        if (a == 0)
            break;
    }
    while (1)
    {
        binary_b[position_b] = b % 2;
        b = b / 2;

        position_b ++;

        if (b == 0)
            break;
    }

    if (position_b > position_a)
    {
        for (int i = position_b - 1; i >= 0; i--)
        {
            if (binary_a[i] == binary_b[i])
                cnt++;
        }
    }
    else
    {
        for (int i = position_a - 1; i >= 0; i--)
        {
            if (binary_a[i] == binary_b[i])
                cnt++;
        }
    }

    printf("%d", cnt);
    return 0;


}


