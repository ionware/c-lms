
#ifndef LIBRARY_MANAGEMENT_DELETE_BOOK_H
#define LIBRARY_MANAGEMENT_DELETE_BOOK_H

#include "shelf.h"

extern int request, department_id;

void deleteBookForDepartment() {
    int selection;
    printLines();
    printf("\n\tSelect the Department Shelf to remove Book\n\n");
    printf(" \n [1] Computer Science\n [2] Library Information Science\n");
    printf(" [3] Mass Communication\n [0] Return Back\n\n");
    printLines();

    printf("Enter your selection: ");
    scanf("%d", &selection);
    switch (selection) {
        case 0:
            request = 2;
            break;
        case 1:
            department_id = 0;
            request = 411;
            break;
        case 2:
            department_id = 1;
            request = 412;
            break;
        case 3:
            department_id = 2;
            request = 413;
            break;
        default:
            request = 4;
            deleteBookForDepartment();
            break;
    }
}

void requestBookId() {
    int bookId;
    printLines();
    printf("The ID of the Book to remove from Shelf: ");
    scanf("%d", &bookId);
    removeBook(bookId);
}

#endif //LIBRARY_MANAGEMENT_DELETE_BOOK_H
