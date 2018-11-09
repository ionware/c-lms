//#include "lmsauth.h"
#include <stdio.h>

void main() {
    struct books {
        char * title;
        int year;
        int price;
        char * author;
    };

    struct books LIS[200];

    LIS[1].title = "Introduction to HTML";
    LIS[1].year = 2009;
    LIS[1].price = 21000;
    LIS[1].author = "John Duckett";

    LIS[2].title = "CSS Mastery 3rd Edition";
    LIS[2].year = 2016;
    LIS[2].price = 13500;
    LIS[2].author = "Sarah Udoh";

    for(int i = 1; i <= 2; i++) {
        printf("%s\t\t%d\t\t%d\t\t%s\n", LIS[i].title, LIS[i].price, LIS[i].year, LIS[i].author);
    }
}