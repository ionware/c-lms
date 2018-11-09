#include <stdio.h>
#ifndef LIBRARY_MANAGEMENT_PRINTHELPER_H
#define LIBRARY_MANAGEMENT_PRINTHELPER_H

void printPad(int amount)
{
    for (int i = 1; i <= amount; i++) {
        printf("=");
    }
    printf("\n");
}

#endif //LIBRARY_MANAGEMENT_PRINTHELPER_H
