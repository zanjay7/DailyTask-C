
#include <stdio.h>
struct Date{
    int day;
    int month;
    int year;
};


int main()
{
    struct Date date1;
    struct Date date2;
    printf("Enter the First date in DD MM YYYY Format: ");
    scanf("%d %d %d",&date1.day,&date1.month,&date1.year);
    
    printf("Enter the Second date in DD MM YYYY Format: ");
    scanf("%d %d %d",&date2.day,&date2.month,&date2.year);

    if (date1.year > date2.year || (date1.year == date2.year && date1.month > date2.month) || (date1.year == date2.year && date1.month == date2.month && date1.day > date2.day)){
        printf("The First Date comes Earlier");
    }
    else if(date1.year==date2.year && date1.month == date2.month && date1.day == date2.day){
        printf("Both are the same Dates");
    }
    else{
        printf("The Second Date comes Earlier");
    }
    return 0;
}