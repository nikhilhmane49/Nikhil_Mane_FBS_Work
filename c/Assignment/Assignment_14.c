//#############Structure in C #############


#include <stdio.h>
#include <string.h>


struct Student {
    int id;
    char name[50];
    float marks;
};


int main(){
    struct Student s1,s2;

    s1.id = 1;
    strcpy(s1.name, "Nikhil");
    s1.marks = 123.23;

    printf("enter the Id of student :");
    scanf("%d", &s2.id);

    printf("enter the name of student :");
    scanf("%s", s2.name);

    printf("enter the marks of student :");
    scanf("%f", &s2.marks);

    printf("Student 1: ID=%d, Name=%s, Marks=%.2f\n", s1.id, s1.name, s1.marks);
    printf("Student 2: ID=%d, Name=%s, Marks=%.2f\n", s2.id, s2.name, s2.marks);

    return 0;
}
 