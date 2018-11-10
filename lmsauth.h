#ifndef LIBRARY_MANAGEMENT_LOGIN_H
#define LIBRARY_MANAGEMENT_LOGIN_H
#define PIN 322322

extern int request;

bool authenticate(int pin) {
    return pin == 322322;
}

void login() {
    int pin;
    printLines();
    printf("Enter your Six Digit PIN to continue:\n");
    scanf("%d", &pin);
    if (authenticate(pin)) {
        request = 2;
        printf("Login Successful now\n");
        printLines();
        return;
    }

    while(!authenticate(pin)) {
        printf("Pin Incorrect. Please retry: \n");
        scanf("%d", &pin);
    }
    request = 2;
    printf("Login Successful\n");
    printLines();
}
#endif //LIBRARY_MANAGEMENT_LOGIN_H
