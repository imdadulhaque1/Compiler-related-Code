#include<stdio.h>
#include<string.h>

int i;

int main()
{
    char str1[101], str2[101];
    scanf("%s", str1);
    int len = 0;
    for(i = 0; str1[i] != '\0'; i++)
        len++;
    for(i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[len-i-1];
    }
    str2[i]='\0';
    if(strcmp(str1, str2) == 0)
        printf("%s is Palindrome!!\n", str1);
    else
        printf("%s is not Palindrome!!\n", str1);
    main();
    return 0;
}
