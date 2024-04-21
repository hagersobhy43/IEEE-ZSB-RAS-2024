#include <stdio.h>

typedef struct student_info{
    int rollnum;
    char name[20];
    char address[70];
    float marks;
}student;

int counting(student info[]){
    int count=0;
    for(int i=0;i<=14;i++){
       printf("information of student %d:\n", i+1);
       printf("roll num: %d\n", info[i].rollnum);
       printf("name: %s\n", info[i].name);
       printf("address: %s\n", info[i].address);
       printf("mark: %.1f\n", info[i].marks);
       if (info[i].marks<12)
          count+=1;
    }
    return printf("number of students with marks <12 = %d",count);

}
int main(){
    student students[15];
    for(int i=0;i<=14;i++){
       printf("information of student %d:\n", i+1);
       printf("enter the roll number: ");
       scanf("%d", &students[i].rollnum);
       printf("enter the name: ");
       scanf("%s", students[i].name);
       printf("enter the address: ");
       scanf("%s", students[i].address);
       printf("enter the mark: ");
       scanf("%f", &students[i].marks);

       if(0 > students[i].marks || students[i].marks > 20){
           printf("it's not accepted, enter a value from 0 to 20: ");
           scanf("%f\n", &students[i].marks);
       }
    }
    counting(students);
    

}