#include <stdio.h>
int main()
{
    int id;
    float gpa;
    char name[30];
    printf("Enter your id");
    scanf("%d",&id);
    printf("Ente your gpa");
    scanf("%f",&gpa);
    printf("enter your name");
    scanf("%s",name);
    printf("\nID\tGPA\tNAME");
    printf("\n%d\t%f\t%s",&id,&gpa,name);
    return 0;
}