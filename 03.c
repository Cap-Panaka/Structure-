/*Write a C program where you need to do the followings:
● Define three structures namely Date, Book, Student with necessary member
variables.
Member variables of the three structures are shown in the following table:

Structure Members
Date-       day, month

Book-       Book Name, Issuing Date, Return
            Date (Issuing date and Return date are two
            instances of Date structure.)

Student-    ID, Name, Issued Book 1, Issued
            Book 2 (Issued Books are two instances of
            the Book structure)

● Create one instance of “Student” in the main() function.
● Take user input for all member variables of the student from the main() function.
● Calculate the total fine if that student haven’t returned the books within the due
    date. (Each book has to be returned within 5 days of being issued. Otherwise
    the student has to pay a fine for each passing day and the fine rate is Tk 50 per
    day for each book. )
    Explanation: [You may consider that each month has 30 days for ease of
    calculation. E.g. If the issuing date is 5/10 and the return date is 15/11 then the
    day difference may be considered as 40 days and the fine will be calculated for
    35 days].
● Finally, print the total fine of that student.*/

#include <stdio.h>

struct date {
    int day;
    int month;
};
struct book {
    char name[50];
    struct date isd, rd;
};
struct student {
    int id;
    char name[50];
    struct book b[2];
};
int main() {
    int d, f;
    struct student s;
    printf("Student name: ");
    scanf("%s", & s.name);
    printf("\nStudent ID: ");
    scanf("%d", & s.id);
    for (int i = 0; i < 2; i++) {
        printf("\nBook name %d: ", i + 1);
        scanf("%s", & s.b[i]);
        printf("\nIssue date: ");
        scanf("%d %d", & s.b[i].isd.day, & s.b[i].isd.month);
        printf("\nReturn date: ");
        scanf("%d %d", & s.b[i].rd.day, & s.b[i].rd.month);
        if (s.b[i].rd.month == s.b[i].isd.month) {
            d = s.b[i].rd.day - s.b[i].isd.day;
        }
        else {
            d = (s.b[i].rd.month - s.b[i].isd.month) * 30 - s.b[i].isd.day + s.b[i].rd.day;
        }
        if (d > 5) {
            d = d - 5;
            f = d * 50;
            printf("\nTotal fine for book %d: %d", i + 1, f);
        }
        else {
            printf("\nThere is no fine");
        }
    }
}
