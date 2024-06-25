#include<stdio.h>
#include<conio.h>
int main()
{
    int id,i;
    char name[10][30],position[10][30];
    for(i=0;i<10,i++)
    {
        printf("enter your id");
        scanf("%d",&id);
        printf("Entet your name");
        scanf("%s",name[i]);
        printf("Enter your position");
        scanf("%s",position[i]);
    }
    printf("\nID\tNMAE\tPOSITION");
    for(i=0;i<10,i++;)
    {
        printf("\n%d\t%s\t%s",id,name,position);
    }
    getch();
    return 0;
}