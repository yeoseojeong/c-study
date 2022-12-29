#include <stdio.h>
int Count(int a, int b, int c, int d)
{
    int binary_a[20] = { 0 };
    int binary_b[20] = { 0 };
    int binary_c[20] = { 0 };
    int binary_d[20] = { 0 };

    unsigned int position_a = 0;
    unsigned int position_b = 0;
    unsigned int position_c = 0;
    unsigned int position_d = 0;

    unsigned int min = 10000;
    int cnt = 0;

    while (1) 
    {

        binary_a[position_a] = a % 2;   
        a = a / 2;          

        position_a++;   

        if (a == 0)
        {
            if (min > position_a)
                min = position_a;
            break;
        }

    }
    while (1)
    {
        binary_b[position_b] = b % 2;   
        b = b / 2;             

        position_b++;    

        if (b == 0)
        {
            if (min > position_b)
                min = position_b;
            break;
        }
    }
    while (1)
    {
        binary_c[position_c] = c % 2;   
        c = c / 2;             

        position_c++;    

        if (c == 0)
        {
            if (min > position_c)
                min = position_c;
            break;
        }
    }
    while (1)
    {
        binary_d[position_d] = d % 2;    
        d = d / 2;             

        position_d++;   
        if (d == 0)
        {
            if (min > position_d)
                min = position_d;
            break;
        }
    }

    if (min == position_a)
    {
        for (int i = position_a - 1; i >= 0; i--)
        {
            if (binary_a[i] == binary_b[i] && binary_a[i] == binary_c[i] && binary_a[i] == binary_d[i])
                cnt++;
        }
    }
    else if (min == position_b)
    {
        for (int i = position_b - 1; i >= 0; i--)
        {
            if (binary_b[i] == binary_a[i] && binary_b[i] == binary_c[i] && binary_b[i] == binary_d[i])
                cnt++;
        }
    }
    else if (min == position_c)
    {
        for (int i = position_c - 1; i >= 0; i--)
        {
            if (binary_c[i] == binary_a[i] && binary_c[i] == binary_b[i] && binary_c[i] == binary_d[i])
                cnt++;
        }
    }
    else if (min == position_d)
    {
        for (int i = position_d - 1; i >= 0; i--)
        {
            if (binary_d[i] == binary_a[i] && binary_d[i] == binary_b[i] && binary_d[i] == binary_c[i])
                cnt++;
        }
    }

    return cnt;
}
int main()
{
    unsigned int i[4] = { 8,9,10,11 };

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

  
    a = i[0];
    b = i[1];
    c = i[2];
    d = i[3];

    printf("%d", Count(a, b, c, d));
    return 0;

}

v
