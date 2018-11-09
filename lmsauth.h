#include <stdbool.h>
#include <zconf.h>
#include "printhelper.h"
#include <stdlib.h>
#ifndef LIBRARY_MANAGEMENT_LOGIN_H
#define LIBRARY_MANAGEMENT_LOGIN_H
#define PIN 322322

bool authenticate(int pin) {
    return pin == 322322;
}

void clrconsole() {
    system("clear");
}

void login() {
    int pin;
    printPad(40);
    printf("Enter your Six Digit PIN to continue:\n");
    scanf("%d", &pin);
    if (authenticate(pin)) {
        printf("Login Successful now\n");
        printPad(40);
        sleep(2);
        clrconsole();
        return;
    }

    while(!authenticate(pin)) {
        printf("Pin Incorrect. Please retry: \n");
        scanf("%d", &pin);
    }
    printf("Login Successful\n");
    printPad(40);
}
#endif //LIBRARY_MANAGEMENT_LOGIN_H
