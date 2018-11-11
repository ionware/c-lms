//
// Created by ionware on 11/11/18.
//

#ifndef LIBRARY_MANAGEMENT_MAINMENU_H
#define LIBRARY_MANAGEMENT_MAINMENU_H
extern int request;
int selection;
void mainMenu() {
    printLines();
    printf("\t\tMain Menu\n\n");
    printf("[1] Add Book\t\t\t[2] Delete Book\n\n");
    printf("[3] Select Book\t\t\t[4] Book Request\n\n");
    printf("[5] Return Book\t\t\t[2] Exit\n\n");
    printLines();
    printf("Enter corresponding selection: ");
    scanf("%d", &selection);
    switch (selection) {
        case 0:
            request = 0;
            break;
        case 1:
            request = 3;
            break;
        case 2:
            request = 4;
            break;
        case 3:
            request = 5;
            break;
        case 4:
            request = 6;
            break;
        case 5:
            request = 7;
            break;
        default:
            mainMenu();
            break;
    }

}
#endif //LIBRARY_MANAGEMENT_MAINMENU_H
