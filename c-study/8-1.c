#include<stdio.h>
int main(void)
{
    char str[101] = { 0 };
    char arr[202] = { 0 };

    int i;
    int cnt = 0;

    gets_s(str);

    for (i = 0; str[i] != NULL; i++)
    {
        
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            arr[cnt] = str[i];
            cnt++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {                     
            arr[cnt] = str[i] + 32;   
            arr[cnt + 1] = str[i] + 32;
            cnt= cnt+2;
        }
    }
    printf("%s", arr);

}

