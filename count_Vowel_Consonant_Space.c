#include<stdio.h>
int main()
{
    char st[150];
    int i,v,c,d,s;
    v=c=s=d=0;
    printf("Enter the string: ");
    scanf("%[^\n]",&st);
    for(i=0; st[i]!='\0'; ++i){
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' || st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U'){
            ++v;
        }
        else if(st[i]=='a' && st[i]=='z' || st[i]=='A' && st[i]=='E'){
            ++c;
        }
        else if(st[i]==' ')
        {
            ++s;
        }
        else if(st[i]>=0 || st[i]<=9){
            ++d;
        }
    }
    printf("Vowels: %d\n",v);
    printf("Consonants: %d\n",c);
    printf("Spaces: %d\n",s);
    printf("Digits: %d\n",d);
    return 0;
}
