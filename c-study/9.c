#include <stdio.h>

int main()
{
    unsigned int a = 0;
    int binary_a[32] = { 0 };
    int position_a = 0;
    int b = 0;
    int c = 0;
    int i = 0;
    scanf_s("%d %d %d", &a, &b, &c);
    while (1)
    {
        binary_a[position_a] = a % 2;    
        a = a / 2;           

        position_a++;    

        if (a == 0)   
            break;
    }
    for (int i = 0; i < position_a; i++)
    {
        if (i == b)
        {
            binary_a[i] = 0;
        }
        else if (i == c)
        {
            binary_a[i] = 0;
        }
    }

    for (int i = position_a - 1; i >= 0; i--) 
     {
        printf("%d", binary_a[i]);
    }


    return 0;
}

