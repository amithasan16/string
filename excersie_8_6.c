#include<stdio.h>
int main()
{
    char str[]="HELLO WORLD";
    int m;
    for(m=0;str[m]!='\0';m++)
    if((m%2)==0)
    printf("%c",str[m]);
}