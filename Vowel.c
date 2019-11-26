#include<stdio.h>
int main()
{
    int i,j, count=0;
    char s[100], v[20]="a,e,i,o,u,A,E,I,O,U";
    printf("Enter a string: ");
    gets(s);
    for(i=0; s[i]; i++){
        for(j=0; v[j]; j++){
            if(s[i]==v[j]){
                count++;
            }
        }
    }
    printf("Total VoweL is : %d",count);
    return 0;
}
