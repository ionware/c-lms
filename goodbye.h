//
// Created by ionware on 11/10/18.
//

#ifndef LIBRARY_MANAGEMENT_GOODBYE_H
#define LIBRARY_MANAGEMENT_GOODBYE_H
extern int request;

void terminate() {
    request = 0;
    printLines();
    printf("Library Management System - Group 1\n");
    printf("Goodbye!\n");
    printLines();
}
#endif //LIBRARY_MANAGEMENT_GOODBYE_H
