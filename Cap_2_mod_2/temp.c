/* I chose option 1. */

#include <stdio.h>

/* Create the month enum and the date struct */
typedef enum month{ jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} month;
typedef struct date{month m; int d;} date;

/* Function that returns the month following the given month */
month nextmonth(month m) {
    return (m + 1) % 12;
}

/* Function that returns the number of days in the given month */
int monthlength(month m) {
    switch (m) {
        case jan: return 31; break;
        case feb: return 28; break;
        case mar: return 31; break;
        case apr: return 30; break;
        case may: return 31; break;
        case jun: return 30; break;
        case jul: return 31; break;
        case aug: return 31; break;
        case sep: return 30; break;
        case oct: return 31; break;
        case nov: return 30; break;
        case dec: return 31; break;
    }
}

/* Function that prints a date */
void printdate(date d) {
    switch (d.m) {
        case jan: printf("January %d\n", d.d); break;
        case feb: printf("February %d\n", d.d); break;
        case mar: printf("March %d\n", d.d); break;
        case apr: printf("April %d\n", d.d); break;
        case may: printf("May %d\n", d.d); break;
        case jun: printf("June %d\n", d.d); break;
        case jul: printf("July %d\n", d.d); break;
        case aug: printf("August %d\n", d.d); break;
        case sep: printf("September %d\n", d.d); break;
        case oct: printf("October %d\n", d.d); break;
        case nov: printf("November %d\n", d.d); break;
        case dec: printf("December %d\n", d.d); break;
    }
}

/* Function that returns the date following a date */
date nextday(date d) {
    if (d.d >= monthlength(d.m)) { // If this is the last day of the month, the next day is the 1st day of the next month
        date next = {nextmonth(d.m), 1};
        return next;
    }
    else { // Else just add 1 to the day number
        date next = {d.m, d.d + 1};
        return next;
    }
}

/* Main function */
int main() {
    date dates[5] = {{jan, 1}, {feb, 28}, {mar, 14}, {oct, 31}, {dec, 31}};
    for (int i = 0; i < 5; i++) {
        printdate(dates[i]);
        printdate(nextday(dates[i]));
    }
}