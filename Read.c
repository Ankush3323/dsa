#include<stdio.h>
int main()
{
    FILE *fp;
    int n;
    char name[20];
    int marks;
    int i;
    fp=fopen("abc.txt","r");
   while(1)
    {
        fscanf(fp,"%s%d",name,&marks);
        if(feof(fp))
            break;
        printf("Name:%s\tMarks:%d\n",name,marks);
    }
    fclose(fp);
}
