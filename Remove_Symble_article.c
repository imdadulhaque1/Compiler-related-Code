
#include <stdio.h>
int main()
{
    char str[1000], str1[1111];
    int i, count=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' && str[i+1]==' ')
        {
            str1[count]=str[i];
        }
        else if(str[i]=='a' && str[i+1]=='n' && str[i+2]==' ')
        {
           str1[count]=str[i];
        }

        else if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && str[i+3] == ' ')
        {
            str1[count]=str[i];
        }
    }

    printf("New string: %s", str1);

    return 0;
}

