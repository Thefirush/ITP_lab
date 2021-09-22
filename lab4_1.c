#include <stdio.h>

struct exam_day {
    int day;
    int year;
    char month[20];
};
struct student {
    char name[30];
    char surname[30];
    int groupNo;
    struct exam_day ed;
};

int main() {
    struct student st;
    printf("Enter the name of student: ");
    gets(st.name);
    printf("Enter the surname of student: ");
    gets(st.surname);
    printf("Enter the number of group: ");
    scanf("%d", &st.groupNo);
    printf("Enter the day of exam: ");
    scanf("%d", &st.ed.day);
    printf("Enter the year of exam: ");
    scanf("%d", &st.ed.year);
    printf("Enter the month of exam: ");
    scanf("%s", st.ed.month);
    printf("Data about student: \n");
    printf("Name: %s;\n Surname: %s;\n Number of group: %d;\n Day of exam: %d;\n Year of exam: %d;\n Month of exam: %s.", st.name, st.surname, st.groupNo, st.ed.day, st.ed.year, st.ed.month);
    return 0;
}