
#include<stdio.h>

int arr(unsigned char(*p))
{

    int i,j;

    int max = 0;
    int min = 10000;

    int result = 0;

    for (i = 0; i < 30; i++)
    {
            if (*p > max)
            {
                max = *p;
            }
            else
            {
                max;
            }
             
        if (*p < min)
        {
            min = *p;
        }
        else
        {
            min;
        }
        *p++;
    }
    result = max - min;

   return  result;
}

int main(void)
{
    int i = 0;
    int j = 0;
    unsigned char c[3][10] = { 1,3,5,7,9,11,13,15,17,19,21,23,25,27,29, 31,33,35,37,39,41,43,47,49,51,53,55,57,59,61};
    unsigned char* p = &c[0][0];

 

    printf("%d", arr(p));

}
