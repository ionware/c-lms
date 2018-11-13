#ifndef LIBRARY_MANAGEMENT_DEPARTMENT_ADD_H
#define LIBRARY_MANAGEMENT_DEPARTMENT_ADD_H
extern int request, department_id;
void addBookForDepartment() {
    int selection;
    printLines();
    printf("\n\tSelect the Department to categorize Book\n\n");
    printf(" \n [1] Computer Science\n [2] Library Information Science\n");
    printf(" [3] Mass Communication\n [0] Return Back\n\n");
    printLines();

    printf("Enter your selection: ");
    scanf("%d", &selection);
    switch (selection) {
        case 0:
            request = 3;
            break;
        case 1:
            department_id = 0;
            request = 311;
            break;
        case 2:
            department_id = 1;
            request = 312;
            break;
        case 3:
            department_id = 2;
            request = 313;
            break;
        default:
            request = 31;
            addBookForDepartment();
            break;
    }
}
#endif //LIBRARY_MANAGEMENT_DEPARTMENT_ADD_H
