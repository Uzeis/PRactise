#include<stdio.h>
#include<conio.h>
struct std
{
    int id;
    char name[30];
    float gpa;
};
int main()
{
    struct std s[5];
    int i;
    {
        printf("enter your id");
        scanf("%d",&s[i].id);
        printf("Enter your name");
        scanf("%s",s[i].name);
        printf("Enter your gpa");
        scanf("%f",&s[i].gpa);
    }
    printf("\nid\tname\tgpa");
    for(i=0;i<5;i++)
    {
        printf("\n%d\t%S\t%f",s[i].id,s[i].name,s[i].gpa);
    }
    getch ();
    return 0;
}