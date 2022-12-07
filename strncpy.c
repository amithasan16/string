#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Jabalpur";
    char s2[]="Jaipur";
    printf("%d",strncmp(s1,s2,2));
}