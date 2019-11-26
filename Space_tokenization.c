#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000], s1[1000];
    int i = 0,j=0;
    printf("Enter the string: ");
    gets(s);

    while(s[i] != '\0')
    {
        if(s[i] != ' ')
        {

            s1[j] = s[i];
        }
        i++;
    }
    //s1[j] = '\0';
    printf("\nThe string after removing all the spaces is: %s", s1);
    return 0;
}

