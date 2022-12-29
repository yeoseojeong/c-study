
#include <stdio.h>
void count(char input[], int alpha_count[])
{
    int i = 0;
    int alpa;

    while (input[i] != NULL)
    {
        if (input[i] > 96)
        {
            alpa = input[i] - 97;
        }
        else
        {
            alpa = input[i] - 65;
        }
        alpha_count[alpa] += 1;
        i++;
        alpa = 0;

    }
}

int main() {
    char input[501] = { 0 };
    int alpha_count[26] = { 0 };


    gets_s(input);

    count(input, alpha_count); //함수 호출

    for (int j = 0; j < 26; j++)
    {
        printf("%c : %d\n", j + 97, alpha_count[j]);
    }

    return 0;
}
