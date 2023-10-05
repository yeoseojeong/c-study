//A

#include <stdio.h>
 
#define LEFT_BITS  0xFFFF0000
#define RIGHT_BITS 0x0000FFFF
 
int main()
{
    unsigned int data;
    int num2;
 
    if (scanf("%X %d", &data, &num2) != 2)
    {
        printf("Input error!\n");
        return 1; 
    }
 
    unsigned int a = (data & LEFT_BITS) << num2;
    unsigned int b = (data & RIGHT_BITS) >> num2;
 
    printf("%X\n", a + b);
 
    return 0;
}
 

#include <stdio.h>

int main() {
    unsigned int data;
    int n;


    scanf("%X %d", &data, &n);


    unsigned int left = (data & 0xFFFF0000) << n;
    unsigned int right = (data & 0x0000FFFF) >> n;

    printf("%X\n", left+right);

    return 0;
}

//B

#include <stdio.h>
 
int main() {
    unsigned char n;
    unsigned char result;
    scanf("%hhu", &n);
 
    result= ((n & 0x0F) << 4) | ((n & 0xF0) >> 4);
 
    printf("%hhu\n", result);
 
    return 0;
}

//C

#include <stdio.h>
 
int main() {
    unsigned char n, x;
    unsigned char result;
    scanf("%hhu", &n);
 
    scanf("%hhu", &x);
 
    if (x < 8)
    {
        int count = 0;
        for (int i = 0; i <= 8 - 3; i++)
        {
            unsigned char result = (n >> i) & 0x07;
            if (result == x)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
 
    return 0;
}

//D

#include <stdio.h>
#include <string.h>
 
int main() {
    char n[33]; 
    int x;
 
    scanf("%s %d", n, &x);
 
    int len = strlen(n);
    unsigned long long result = 0; 
 
    for (int i = 0; i < len; i++) {
        char digit = n[i];
        int num;
 
        if (digit >= '0' && digit <= '9') {
            num = digit - '0'; 
        }
        else
        {
            printf("%c\n", digit);
            return 1; 
        }
 
        if (num >= x) 
        {
            printf("%d\n", digit, x);
            return 1; 
        }
 
        result = result * x + num;
    }
 
    printf("%llu\n", result);
 
    return 0;
}

//E

#include <stdio.h>
 
int main() {
    unsigned char n;
    unsigned char result;
 
    scanf("%hhu", &n);
 
    result = (n >> 2) & 0x0F;
 
 
    printf("%X\n", result);
 
    return 0;
}

//F

#include <stdio.h>
 
int main() {
    unsigned char n;
    int x;
    unsigned char mask;
    unsigned char result;
 
    scanf("%hhu", &n);
 
 
    scanf("%d", &x);
 
    if (x >= 0 && x < 8) 
    {
       
        mask = ~(1 << x); 
        result = n & mask;
 
        printf("%hhu\n", result);
    }
    else
    {
        printf("%x\n");
    }
 
    return 0;
}

//G

#include <stdio.h>
 
int main() 
{
    unsigned int data;
    unsigned char key;
    unsigned int result;
 
    scanf("%u %hhu", &data, &key);
 
    unsigned char a = (data >> 24) & 0xFF;
    unsigned char b = (data >> 16) & 0xFF;
    unsigned char c = (data >> 8) & 0xFF;
    unsigned char d= data & 0xFF;
 
    a ^= key;
    b ^= key;
    c ^= key;
    d ^= key;
 
 
    result = (a << 24) | (b << 16) | (c << 8) | d;
 
    printf("%u\n", result);
 
    return 0;
}

//H

#include <stdio.h>
 
#define CHECK_BITS 0xF
 
int main()
{
    int digit;
    int num;
 
    scanf("%d", &num);
 
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        digit = num & CHECK_BITS;
        result += digit << (i * 4);
        num = num >> 1;
    }
 
    printf("%X\n", result);
}

//I

#include <stdio.h>
 
int main() {
    unsigned char data;
    unsigned char key;
    unsigned char result;
 
    scanf("%hhu", &data);
    scanf("%hhu", &key);
 
    result = data ^ key;
 
    printf("%hhu\n", result);
 
    return 0;
}

//J

#include <stdio.h>
 
int main() {
    unsigned int n;
    unsigned int result = 0;
 
    scanf("%u", &n);
 
 
    result |= (n & 0xFF) << 16;
    result |= ((n >> 8) & 0xFF) << 24;
    result |= ((n >> 16) & 0xFF) ;
    result |= ((n >> 24) & 0xFF)<<8;
 
 
 
    printf("%u\n", result);
 
 
    return 0;
}

//K

#include <stdio.h>
 
int main() {
    
    unsigned char n;
   
    scanf("%hhu", &n);
 
    unsigned char result= 0;
    int size = sizeof(n) * 8;
 
    for (int i = 0; i < size; i++)
    {
        if (n & (1 << i))
        {
            result |= (1 << ((size - 1) - i));
        }
    }
 
    printf("%hhu\n", result);
 
    return 0;
}
