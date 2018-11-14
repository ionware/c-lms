
#ifndef LIBRARY_MANAGEMENT_ADDBOOK_H
#define LIBRARY_MANAGEMENT_ADDBOOK_H
extern int request;
void addBook() {
    int selection;
    printLines();
    printf("\t\tSelect Faculty to categorize Book\n\n");
    printf(" [1] ICT\n [2] Engineering\n [3] Pure and Applied Sciences\n");
    printf(" [4] Education\n [5] Agriculture\n [6] Humanities\n");
    printf(" [0] Return to Main Menu\n");
    printLines();
    printf("Enter your choice: ");
    scanf("%d", &selection);
    switch (selection) {
        case 0:
            request = 2;
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            request = 31;
            break;
        default:
            addBook();
            break;
    }
}
#endif //LIBRARY_MANAGEMENT_ADDBOOK_H
