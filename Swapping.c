#include<stdio.h>
void swap(int*, int*);
int main()
{
    int a=17;
    int b=21;
    swap(&a, &b);// 1) swap(a, b);
    printf("swap a = %d, b = %d\n", a, b);
}
void swap(int *a, int *b)
{
    printf("main a = %d, b = %d\n", *a, *b);
    int t=*a;
    *a=*b;
    *b=t;
}