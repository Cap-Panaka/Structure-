#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    int marks;

};
struct teacher
{

    char name[50];
    int id;
    struct student stu[5];
};

int main()
{
    int i,j;
    struct teacher tea[2];
    //struct student stu;
    for(i=0; i<2; i++)
    {

        printf("Enter teacher %d 'name: ",i+1);
        scanf("%s",tea[i].name);
        printf("Enter teacher %d 's  id: ",i+1);
        scanf("%d",&tea[i].id);
        printf("Enter teacher %d 's student info : \n",i+1);
        for(j=0; j<5; j++)
        {
            scanf("%d %d",&tea[i].stu[j].roll,&tea[i].stu[j].marks);
        }

    }

    for(i=0;i<2;i++)
    {

        printf("Teacher id: %d\n",tea[i].id);
        printf("Teacher name: %s\n",tea[i].name);
        printf("The students of teacher %s are:\n",tea[i].name);
         for(j=0; j<5; j++)
        {
            printf("(%d,%d) ",tea[i].stu[j].roll,tea[i].stu[j].marks);
        }
        printf("\n***************************\n");
    }
    getchar();

}
