#include <stdio.h>

int main(void)
{

    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d", convert(n));
    return 0;
}

int convert(int n)
{
    int temp = 0;
    int dec = n;
    int i = 1;
    while (dec > 0) {
        temp += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return temp;
}