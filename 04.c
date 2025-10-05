/*Prepare a Date Structure, it will have the following members
Day, Month, Year
Now write a program in C that will take two dates as inputs and compare them.
Sample Input:
Enter Date 1:
Day : 1
Month :1
Year : 1997
Enter Date 2:
Day : 1

Month :1
Year : 1999
Sample Output:
Date 1 is earlier than Date 2 */
#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int main()
{
  struct Date d[2];
  int i;
  for(i=0;i<2;i++)
  {
      printf("Enter Date %d: \n",i+1);
      printf("Day: ");
      scanf("%d",&d[i].day);
      printf("Month: ");
      scanf("%d",&d[i].month);
      printf("Year: ");
      scanf("%d",&d[i].year);
  }
  
 if(d[0].year>d[1].year)
 {
     printf("Date 2 is earlier than Date 1 ");
 }
 else if(d[0].year<d[1].year)
 {
     printf("Date 1 is earlier than Date 2");
 }
 else
 {
     if(d[0].month>d[1].month)
     {
         printf("Date 2 is earlier than Date 1");
     }
     else if(d[0].month<d[1].month)
     {
         printf("Date 1 is earlier than Date 2");
     }
     else
     {
         if(d[0].day>d[1].day)
         {
             printf("Date 2 is earlier than Date 1");
         }
         else if(d[0].day<d[1].day)
         {
             printf("Date 1 is earlier than Date 2");
         }
         else
         {
             printf("Both dates are equal");
         }
     }
 }
}
