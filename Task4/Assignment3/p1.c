#include <stdio.h>
int main(){
    /*
    it's called padding
    processor reads 1 word in a cycle 
    and through trying different values 1 word in my labtop is 4 bytes
    */
   /*
   in first struct: int = 4 bytes
                    char[25] = 25 bytes
                    char = 1 byte
    the size : int size + string size + char size+ the rest of last word size
             =     4    +       25    +     1    +             2   =32
   in second struct: char[25]=25
                     int = 4
                     char = 1
     the size : string size + padding + int size + char size + the rest of last word
              =       25    +    3    +     4    +     1     +          3       = 36  
    the reason for it becuase for example in second case the int id if its size collected directly after string size
    it will be selected in 2 cycles but with padding it's selected in 1 cycle and it's much better
   */
    struct test1{
       int id;
       char name[25];
       char class_id;
    };

    struct test2{
       char name[25];
       int id;
       char class_id;
    };
    printf("size of integer %ld\n", sizeof(int));
    printf("size of char %ld\n", sizeof(char));

    printf("size of first struct: %ld\n" , sizeof(struct test1));
    printf("size of second struct: %ld" , sizeof(struct test2));
    return 0;
}