#include <stdio.h>
int main()
{
    char str[1000];             //by,in,on,over,of,at,for
    int i, count=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='b' && str[i]=='y' && str[i+1]==' ')
        {
            count++;
        }
        else if(str[i]=='i' && str[i+1]=='n' && str[i+2]==' ')
        {
            count++;
        }
         else if(str[i]=='o' && str[i+1]=='n' && str[i+2]==' ')
        {
            count++;
        }
         else if(str[i]=='o' && str[i+1]=='f' && str[i+2]==' ')
        {
            count++;
        }
        else if(str[i]=='a' && str[i+1]=='t' && str[i+2]==' ')
        {
            count++;
        }

        else if(str[i]=='f' && str[i+1]=='o' && str[i+2]=='r' && str[i+3] == ' ')
        {
            count++;
        }

        else if(str[i]=='o' && str[i+1]=='v' && str[i+2]=='e' && str[i]=='r' && str[i+3] == ' ')
        {
            count++;
        }
    }

    printf("there are %d preposition in the string\n", count);

    return 0;
}



