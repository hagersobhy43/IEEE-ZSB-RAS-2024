//#BIT MASKING
#include <stdio.h>
int main () {
    int time=0 , hh , mm , ss;
    printf("Enter the time now in (hh:mm:ss)format: ");
    scanf("%d:%d:%d", &hh , &mm , &ss);

    //time = 4*8 = 32 bits
    time |= ss & 0xff; //we set ss in time variable by useing bitwise AND with 11111111 to get only the LSB and store it in byte 0 of time variable
    time |= (mm & 0xff)<< 8; //the same thing occures here but with shift left by 8 ,it means minutes will be stored in byte 1 of time integer
    time |= (hh & 0xff)<< 16; //the same thing here but with shifting left by 16 bits ,it means hours are stored in byte 2 of timr integer

    //to extract them again we will reverse the operation but to time integer 
    //by mean we will shift right with the same num of bits we shifted left previously
    //then time integer bitwise AND with 11111111 to set only the veaiable we want to exract to 1

    ss = time & 0xff;
    mm = (time >> 8) & 0xff;
    hh = (time >> 16) & 0xff;

    printf("the time is : %d:%d:%d" , hh , mm , ss);


}