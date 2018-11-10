#include <stdio.h>
#include <string.h>

#define LINE_MARKER 60
#ifndef LIBRARY_MANAGEMENT_PRINTHELPER_H
#define LIBRARY_MANAGEMENT_PRINTHELPER_H

void printLines()
{
    for (int i = 1; i <= LINE_MARKER; i++) {
        printf("=");
    }
    printf("\n");
}

void clrconsole() {
    system("clear");
}

#endif //LIBRARY_MANAGEMENT_PRINTHELPER_H
