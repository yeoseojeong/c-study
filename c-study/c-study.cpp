/*1. 최대 500글자까지의 문자열을 입력받고(혹은 배열이나 문자열 상수의 초기값으로 주어도 상관없음),
그 중에, 같은 알파벳 각 글자가 몇번씩 나오는지 카운트 해서 출력하는 코드 (대소문자 구분하지 않음. 따라서 총 26개 문자)를
   아래의 2가지 방식으로 각각 코딩

   1-1 main 함수에서 모든 것을 처리 하는 방식
   1-2 main에 있는 데이터를 count() 함수로 넘겨서 여기서 카운트 한뒤에, 다시 main 함수에서 그 빈도수를 출력하는 방식

*/

//1-1

#include <stdio.h>
int main()
{
    char input[501] = { 0 };
    int alpha_count[26] = { 0 };
    int i = 0;
    int alpa = 0;

    gets(input);

    while (input[i] != 0)
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


    for (int j = 0; j < 26; j++)
    {

        printf("%c : %d\n", j + 97, alpha_count[j]);
    }

    return 0;
}

//1-2


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


    gets(input);

    count(input, alpha_count); //함수 호출

    for (int j = 0; j < 26; j++)
    {
        printf("%c : %d\n", j + 97, alpha_count[j]);
    }

    return 0;
}



/*2. unsigned int 형태의 변수 a, b 두개가 있고, 각각 임의의 값을 초기값으로 준다.
이 두 변수의 값을 2진수로 생각했을때, 같은 자리에 같은 비트 값이 들어있는 갯수가 몇개인지 카운트 해서 출력하는 main 코드를 작성 (main  에서 다함)

*/

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

        position_b++;

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


/*4. 3차원  unsigned char c[3][10] 배열이 있다. 이 배열에 들어 있는 값중에 가장 작은 값과 가장 큰 값을 찾아서 그 차이를 출력하는 코드를 작성. main 에서만 처리함*/

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

//5
/*5. 4번과 같은데 c 배열에 들어있는 값을 c 라는 배열이름으로는 절대 읽지 못하고, char * p  라는 p 의 이름으로만 읽어서 처리하는 코드를 작성.main 에서만 처리함
*/
//진행중
#include<stdio.h>
int main(void)
{
    unsigned char c[3][10] = { 1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61 };
    unsigned char(*p)[2] = c;


    p = c;

    int i, j;
    int max = *p;
    int min = *p;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (*(*p + i)[j]) > max)
            {
            max = *(*c + i) + j));
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