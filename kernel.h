#ifndef LIBRARY_MANAGEMENT_KERNEL_H
#define LIBRARY_MANAGEMENT_KERNEL_H
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "printhelper.h"
#include "lmsauth.h"
#include "goodbye.h"
extern int request;

void Kernel(int request) {
    clrconsole();
    switch (request) {
        case 0:
            terminate();
            break;
        case 1:
            login();
            break;

        default:
            Kernel(0);
            break;
    }
}
#endif //LIBRARY_MANAGEMENT_KERNEL_H
