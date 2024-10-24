//Example of struct in C
//Example of struct in C
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sigrecord
{
    int signum;
    char signame[20];
    char sigdesc[100];
}sigline, *sigline_p;
int main(void)
{
    sigline.signum = 5;
    strcpy(sigline.signame, "SIGINT");
    strcpy(sigline.sigdesc, "Interrupt from keyboard");

    sigline_p=&sigline;

    sigline_p->signum=5;
    strcpy(sigline_p->signame, "SIGINT");
    strcpy(sigline_p->sigdesc, "Interupt from keyboard");
}
