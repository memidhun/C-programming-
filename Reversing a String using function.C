//C program to Reverse a string using functions
#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    int i,j;
    char temp;
    for(i=0,j=strlen(str)-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
int main()
{
    char str[100];
    printf("Enter the string\n");
    scanf("%s",str);
    reverse(str);
    printf("Reversed string is %s\n",str);
    return 0;
}
