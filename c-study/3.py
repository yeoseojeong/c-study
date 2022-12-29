#include<stdio.h>
int main(void)
{
    unsigned char c[3][10] = { 1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61 };

    int i, j;
    int max = c[0][0];
    int min = c[0][0];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (c[i][j] > max)
            {
                max = c[i][j];
            }
            else
            {
                max;
            }

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (c[i][j] < min)
            {
                min = c[i][j];
            }
            else
            {
                min;
            }

        }
    }

    printf("%d", max - min);

}
