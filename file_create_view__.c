#include <stdio.h>
int main()
{
    FILE *file;
    int a;
    char newfile[100],c;
    printf("what you want to:\n");
    printf("1. Create a file:\n");
    printf("2. View a file:\n");

    printf("Enter the number that you want to do: ");
    scanf("%d",&a);

    switch(a)
    {
    case 1:
        scanf("%s",&newfile);
        file=fopen(newfile,"w");
        break;
    case 2:
        printf("Enter the filename to open \n");
        scanf("%s",&newfile);
        file=fopen(newfile,"r");
        if(file!=NULL)
        {
                printf("Valid file");
                break;
        }
         else if(file==NULL)
        {
                printf("Not Valid file");
                break;
        }
    default:
        fclose(file);


    }
    printf("\n");
    return 0;
}


