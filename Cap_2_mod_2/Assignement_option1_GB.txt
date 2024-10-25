/*Assignement Module 2 - Struct and enums
  Oct. 17th, Giulia B.

Write enumerated types that supports dates—such as december 12. 
Then add a function that produces a next day.  
So nextday(date) of december 12 is december 13. 
Also write a function printdate(date) that prints a date legibly.
The function can assume that February has 28 days and it most know how many days are in each month. 
Use a struct with two members; one is the month and the second  is the day of the month—an int (or short).
*/

#include <stdio.h>
#include <ctype.h>

//Declare costumized types
typedef enum {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} month;
typedef struct { month m; int d; } date;

void print_date (date day){
    switch (day.m){
    case jan:  printf("the date is January %d", day.d); break;
    case feb:  printf("the date is February %d", day.d); break;
    case mar:  printf("the date is March %d", day.d); break;
    case apr:  printf("the date is April %d", day.d); break;
    case jun:  printf("the date is June %d", day.d); break;
    case jul:  printf("the date is July %d", day.d); break;
    case aug:  printf("the date is August %d", day.d); break;
    case sep:  printf("the date is September %d", day.d); break;
    case oct:  printf("the date is October %d", day.d); break;
    case nov:  printf("the date is November %d", day.d); break;
    case dec:  printf("the date is December %d", day.d); break;    
    default: printf("Error"); break;
    }
}

void next_day(date *day)
{
    int last_day = 0; //last day of the month, values 28, 30 or 31

    switch (day -> m){
        case 1: last_day = 28; break; //February
        case 3: case 5: case 8: case 10: last_day = 30; break; //April, June, September, November
        default: last_day = 31; break;
    }

    if(day -> d < last_day ){
        day -> d++;
    }else{
        day -> d = 1;
        day -> m = (day -> m +1)%12;
    }
}


int main(){
    date days[4] = {{jan, 1}, {feb, 28}, {mar, 14}, {dec, 31}};
    
    for (int i = 0; i < 4; i++)
    {
        printf("\n\nToday ");
        print_date(days[i]);
        next_day(&days[i]);
        printf("\nTomorrow ");
        print_date(days[i]);
    }

    printf("\n\n");
    
    return 0;
}

