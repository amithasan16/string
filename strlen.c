#include<stdio.h>
#include<string.h>
int main()
{
    char st[10];
    gets(st);
   // int l=strlen(st);
    printf("%d",strnlen(st,18));
}