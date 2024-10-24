//Objects declared in the file scope have static storage duration.
//But a variable within a scope can also be made to have static duration.
//And that is by adding a 'static' keyword.
//Static variables must always be initialised with a value and not a variable.
#include<stdio.h>
#include<stdlib.h>
void increment(void)
{
    static unsigned int counter = 0;
    counter++;
    printf("%d", counter);
}
int main(void)
{
    for(int i=0;i<5;i++) increment();
    puts("");
    return 0;
}
