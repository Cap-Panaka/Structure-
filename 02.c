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
        
        int sum=0;
        printf("Teacher id: %d\n",tea[i].id);
        printf("Teacher name: %s\n",tea[i].name);
        printf("The students of teacher %s are:\n",tea[i].name);
        
         for(j=0; j<5; j++)
        
        {
            printf("(%d,%d) ",tea[i].stu[j].roll,tea[i].stu[j].marks);
            sum+=tea[i].stu[j].marks;
        }
        printf("\n*************************************\n");
        
        printf("\n");
        int total[2];
        float avg[2];

         total[i] = sum;
         avg[i] = sum / 5;
         for(i=0;i<2;i++)
        printf("The students of teacher %s have a total number of %d and an average number of %d.",tea[i].name,total[i],avg[i]);
        getc;


        if(avg[1]>avg[0])
        {
            printf("The students of %s have better results\n", tea[1].name);
        }
        
        else if(avg[1]=avg[1])
        {
            printf("Same results!\n");
        }
        else
        {
            printf("The students of %s have better results\n", tea[0].name);
        }
        
     
    }//1 2 2 2 3 2 4 2 5 2
    //1 3 2 3 3 3 4 3 5 3 
    
    
}
