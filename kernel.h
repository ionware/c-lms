#ifndef LIBRARY_MANAGEMENT_KERNEL_H
#define LIBRARY_MANAGEMENT_KERNEL_H
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "printhelper.h"
#include "lmsauth.h"
#include "goodbye.h"
#include "mainmenu.h"
#include "addbook.h"
#include "department-add.h"
#include "shelf.h"
#include "show-books.h"

extern int request;
extern int department_id;

void Kernel(int request) {
    clrconsole();
    switch (request) {
        case 0:
            terminate();
            break;
        case 1:
            login();
            break;
        case 2:
            // Runs the Main menu option.
            mainMenu();
            break;
        case 3:
            // Adding of book - Faculty selection
            addBook();
            break;
        case 31:
            // Adding of Book - Department selection
            addBookForDepartment();
            break;
        case 311:
        case 312:
        case 313:
            insertBook();
            break;

        case 4:
            //delete book;
            break;
        case 5:
            showBook();
            break;
        default:
            Kernel(0);
            break;
    }
}
#endif //LIBRARY_MANAGEMENT_KERNEL_H
