// '1)' stands for another variation of the program. If every line which has a comment that follows is replaced by the comment and omiting out the '1)', the other variation of the code comes into play.

#include<stdio.h>
void swap(int*, int*);//1) void swap(int, int)
int main()
{
    int a=17;
    int b=21;
    swap(&a, &b);// 1) swap(a, b);
    printf("swap a = %d, b = %d\n", a, b);//1) printf("main a=%d, b=%d", a, b);
}
void swap(int *a, int *b) //1)void swap(int a, int b)
{
    printf("main a = %d, b = %d\n", *a, *b);//1)
    int t=*a;// t=a;
    *a=*b;//a=b;
    *b=t;//b=t;
    //1) printf("swap a = %d, b = %d", a, b);
}
