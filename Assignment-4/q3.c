#include<stdio.h>

struct Student {  
    char name[200];
    int age;    
    int marks[5];  
};

void main() {
    int size = 5;
    struct Student students[5];
    for (int i = 0; i < size; i++) {
        printf("Enter name: \n");
        gets(students[i].name);
    }
    for(int i = 0; i < size; i++)
    puts(students[i].name);
}