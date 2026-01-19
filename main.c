typedef struct Person
{
    char* name;
    int age;
} person;

typedef struct Student
{
    int school_number;  //structtun ilk degiskeni(school number) ve  
    person p;           //structun kendisi(student) aynı adreste tutulur
} student;

#include <stdlib.h>
#include <stdio.h>
int main()
{
   struct Person p1;
    p1.name = "Hüseyin";
     p1.age = 25;
    // struct Student s1;
    // s1.p.age = 20;
    // s1.p.name = "Ali";
    // printf("Name: %s, Age: %d\n", p1.name, p1.age);
    // return 0;

//     person* ptr = &p1;
//     printf("Name: %s, Age: %d\n", ptr-> name, ptr-> age);
//  person p;
//  p.age = 22;
//  p.name = "Hüseyin";
//  printf( "Struct'ın Adresi: %p\n", &p);
//  printf( "Name'in   Adresi: %p\n", &(p.name));
//  printf( "Age'in    Adresi: %p\n", &(p.age));

//  person* prs;
//  prs = &p;
//  printf("p.age'in adresi %p\n", &(prs -> age));
//  printf("p.name'in adresi %p\n", &(prs ->name));
 
//   student* std;

//  std = (student*)malloc(sizeof(student));

//  std ->school_number = 2005;

//  std->p.name = "Hüseyin";
//  std->p.age = 22;

//  printf("std pointer adresi: %p\n", &std);
//  printf("studentin adresi: %p\n", std);
//  printf("stdschool number'ın adresi: %p\n", &(std->school_number));




}