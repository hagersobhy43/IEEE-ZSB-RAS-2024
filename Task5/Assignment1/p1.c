#include <stdio.h>
typedef struct student_info{
    //there are 4 bytes stored in memory for first unsigned integer which equals to 32 bits
    unsigned int rollnum : 4 ; //but only 4 bits will be used and the rest 28 bits will be padded
    unsigned int age : 8 ; //these 8 bits will be added to the first 4 bytes of first unsigned int and the rest 20 bits will be padded
    unsigned int marks : 3 ; //these 3 bits also will be added to the first 4 bytes of first unsigned int and the rest 17 bits will be padded
    char address [70];//70 bytes are stored in memory 
    char name [50]; //50 bytes are stored in memory
    //so the size of struct = 4 + 70 + 50 = 124
    //if we didn't use bit field the size = 4 + 4 + 4 + 70 + 50= 132 bytes
    //so bit field helps us to utilize memory efficiently
} info;

void info_print( info student[]){
    for(int i = 0; i<=14 ; i++){
        printf("information of student %d\n", i+1);
        printf("name : %s\n", student[i].name);
        printf("roll number : %u\n", student[i].rollnum);
        printf("age : %u\n", student[i].age);
        printf("address : %s\n", student[i].address);
        printf("marks : %u\n", student[i].marks);
    
    }

}

int main(){
    info student[15];
    unsigned int rollnumtemp , agetemp , markstemp; //we can't access the bitfield addresses directly
     printf("the total size of the struct : %lu ", sizeof(info));
    for(int i = 0; i<=14 ; i++){
        printf("information of student %d\n", i+1);
        printf("Enter the name : ");
        scanf("%s", student[i].name);
        printf("Enter the roll number : ");
        student[i].rollnum = rollnumtemp;
        scanf("%u", &rollnumtemp);
        printf("Enter the age : ");
        student[i].age = agetemp;
        scanf("%u", &agetemp);
        printf("Enter the address : ");
        scanf("%s", student[i].address);
        printf("Enter the marks : ");
        student[i].marks = markstemp;
        scanf("%u", &markstemp);
    
    }
    info_print(student);
    printf("the total size of the struct : %lu ", sizeof(info));

    return 0;

    

}