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
    fflush(stdin);
}

void clrconsole() {
    system("clear");
    fflush(stdin);
}

void printDots(int amount) {
    for (int j = 0; j <= amount; j++) {
        printf("-");
    }
    printf("\n");
}

void printTableHeader() {
    printDots(90);
    printf("Book ID\t\t\tBook Name\t\t\tYear Published\n");
    printDots(90);
}


#endif //LIBRARY_MANAGEMENT_PRINTHELPER_H
