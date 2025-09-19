1.#include<stdio.h>
#include<string.h>

//user defined data type --> structure
struct student
{
    int roll;
    float cgpa;
    char name[100];
};// --> don't forget the semicolon
int main() 
{
    struct student s1; //structure variable
    s1.roll=64;
    s1.cgpa=6.9;
//    s1.name ="Drim"; X --> String which are defined with array notation you can't change the value of it,you  can copy ,compare.But you can't directly change the value.if it's a  character pointer then you can change the value.
    strcpy(s1.name,"Drim");

    printf("student name = %s\n",s1.name);
    printf("student roll no = %d\n",s1.roll);
    printf("student cgpa =%f\n",s1.cgpa);
}   

//Output: 
/* student name = Drim
student roll no = 64
student cgpa =6.900000*/


//2.Write a program to store the data of 3 students

#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main() 
{
    struct student s1;
    s1.roll = 1;
    s1.cgpa=6.9;
    strcpy(s1.name,"Partho");

    printf("student name = %s\n",s1.name);
    printf("student roll = %d\n",s1.roll);
    printf("student cgpa = %.2f\n",s1.cgpa);


    struct student s2;
    s2.roll = 2;
    s2.cgpa=4.94;
    strcpy(s2.name,"Rif");

    printf("student name = %s\n",s2.name);
    printf("student roll = %d\n",s2.roll);
    printf("student cgpa = %.2f\n",s2.cgpa);

    struct student s3;
    s3.roll=35;
    s3.cgpa=3.45;
    strcpy(s3.name,"Lamim");

    printf("student name = %s\n",s3.name);
    printf("student roll = %d\n",s3.roll);
    printf ("student cgpa = %f\n",s3.cgpa);



   
}




3. #include<stdio.h>
#include<string.h>

//user defined
struct student 
{
    int roll;
    float cgpa;
    char name[100];

};
int main()
{
    struct student ece[100];
    ece[0].roll=1664;
    ece[0].cgpa=9.9;
    strcpy(ece[0].name,"Dibosh");

    printf("name= %s\n",ece[0].name);

    return 0;
}//name= Dibosh



4.
#include<stdio.h>
#include<string.h>

//user defined
struct student 
{
    int roll;
    float cgpa;
    char name[100];

};
int main()
{
    struct student s1={13,9.5,"skibidibop"};
printf("student roll=%d\n",s1.roll);
return 0;
}//student roll=13


5.#include<stdio.h>
#include<string.h>

//user defined
struct student 
{
    int roll;
    float cgpa;
    char name[100];

};
int main()
{
    struct student s1={13,9.5,"skibidibop"};
printf("student roll=%d\n",s1.roll);

struct student *ptr=&s1;
printf("student roll= %d\n",(*ptr).roll);
return 0;
}/*student roll=13
student roll= 13*/
