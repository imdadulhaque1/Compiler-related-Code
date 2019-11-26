#include <stdio.h>
int main()
{
    char str[1000];             //or,nor, so, too, but,then,when
    int i, count=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='s' && str[i+1]=='o' && str[i+2]==' ')
        {
            count++;
        }
        else if(str[i]=='o' && str[i+1]=='r' && str[i+2]==' ')
        {
            count++;
        }
         else if(str[i]=='n' && str[i+1]=='o' && str[i+2]=='r' && str[i+3]==' ')
        {
            count++;
        }
        else if(str[i]=='t' && str[i+1]=='o' && str[i+2]=='o' && str[i+3]==' ')
        {
            count++;
        }
        else if(str[i]=='b' && str[i+1]=='u' && str[i+2]=='t' && str[i+3]==' ')
        {
            count++;
        }
        else if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && str[i+3]=='n' && str[i+4]==' ')
        {
            count++;
        }
         else if(str[i]=='w' && str[i+1]=='h' && str[i+2]=='e' && str[i+3]=='n' && str[i+4]==' ')
        {
            count++;
        }
    }
    printf("there are %d preposition in the string\n", count);

    return 0;
}

