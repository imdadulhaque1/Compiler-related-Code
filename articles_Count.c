#include<stdio.h>
int main()
{
    int i,count=0;
    char str[1000];
    printf("Enter an String: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='a' && str[i+1]==' '){
            count++;
        }
        else if(str[i]=='a' && str[i+1]=='n' && str[i+2]==' '){
            count++;
        }
        else if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && str[i+3]==' '){
            count++;
        }
    }
    printf("Total articles are: %d",count);
}
