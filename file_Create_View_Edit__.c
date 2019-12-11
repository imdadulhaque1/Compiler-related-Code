#include<stdio.h>
int main()
{
    FILE *file;
    int n;
    char nfile[1000], ch[100];
    printf("\n1. create a file\n");
    printf("2. View the file\n");
    printf("3. Edit the file\n");

    printf("Enter your choice: ");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            scanf("%s",&nfile);
            file=fopen(nfile,"w");
            break;
        case 2:
            printf("Enter the file name to open: ");
            scanf("%s",&nfile);
            file=fopen(nfile,"r");
            if(file!=NULL){
                printf("Valid file");
                break;
            }
            else if(file==NULL){
                printf("Not Valid file");
                break;
            }
        case 3:
            printf("Enter the file name: ");
            scanf("%s",&nfile);

            printf("Input: ");
            scanf("%s",&ch);

            if((file=fopen(nfile,"a"))==NULL){
                printf("can not open %s file.",nfile);
            }
            else{
                fputs(ch,file);
            }
        default:
            fclose(file);

    }
    return 0;
}

