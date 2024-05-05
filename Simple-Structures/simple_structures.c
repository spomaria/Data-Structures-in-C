#include <stdio.h>
#include <stdlib.h>

struct simpledate {
    int day;
    int month;
    int year;
};

static int day_tab[2][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};


main() {
    void dump_date();
    printf("Playing with structures\n");
    struct simpledate sd;

    sd.year = 2023;
    sd.month = 2;
    sd.day = 11;
    dump_date(&sd);
    printf("Day of year %d\n", day_of_year(&sd));

    sd.year = 2023;
    sd.month = 9;
    sd.day = 15;
    dump_date(&sd);
    printf("Day of year %d\n", day_of_year(&sd));

    sd.year = 2024;
    sd.month = 9;
    sd.day = 15;
    dump_date(&sd);
    printf("Day of year %d\n", day_of_year(&sd));
}

int day_of_year(pd) /* set day of year from month, day */
struct simpledate *pd;
{
    int i, day;
    day = pd->day;
    /* First determine whether or not it is a leap year*/
    if(pd->year % 4 == 0 | pd->year % 100 == 0 | pd->year % 400 == 0){
        for(i = 0; i < pd->month; i++){
            day += day_tab[1][i];
        }
    }else{
        for(i = 0; i < pd->month; i++){
            day += day_tab[0][i];
        }
    }
    return day;
}

void dump_date(pd) /* print date from year, month, day */
struct simpledate *pd;
{
    /* The date should be in the following format - note that */
    /* The month and day are always two digits with leading zeros */
  if(pd->month < 10 & pd->day >= 10){
    printf("%d/0%d/%d\n", pd->year, pd->month, pd->day);
  }else if(pd->day < 10 & pd->month >= 10){
    printf("%d/%d/0%d\n", pd->year, pd->month, pd->day);
  }else if(pd->day < 10 & pd->month < 10){
    printf("%d/0%d/0%d\n", pd->year, pd->month, pd->day);
  }else{
    printf("%d/%d/%d\n", pd->year, pd->month, pd->day);
  }
}