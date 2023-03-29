#include<stdio.h>
int main()
{
    printf("size of int is %d bytes\n",sizeof(int));
    printf("size of float is %d bytes\n",sizeof(float));
    printf("size of char is %d bytes\n",sizeof(char));
    //printf("size of void is %d bytes\n",sizeof(void));
    printf("size of unsigned int is %d bytes\n",sizeof(unsigned int));
    printf("size of long int is %d bytes\n",sizeof(long int));
    printf("size of double is %d bytes\n",sizeof(double));
    printf("size of long double is %d bytes\n",sizeof(long double));
    return 0;
}