#include <stdio.h>
typedef struct Date{
    int day;
    int month;
    int year;
}Date;
int main(){
    Date date1, date2;
    printf("Enter the first date(dd-mm-yyyy): ");
    scanf("%d-%d-%d", &date1.day ,  &date1.month ,  &date1.year);
    printf("Enter the second date(dd-mm-yyyy): ");
    scanf("%d-%d-%d", &date2.day ,  &date2.month ,  &date2.year);
    if(date1.day==date2.day && date1.month==date2.month && date1.year==date2.year){
        printf("Dates are equal");
    } 
    else{
        printf("Dates are not equal");
    }

}