#ifndef LIBRARY_MANAGEMENT_SHELF_H
#define LIBRARY_MANAGEMENT_SHELF_H

// Holds the value for the current department.
int department_id = 0;

extern int request;

// Global storage for book names.
char name[];

// Removes newline from books to be inserted into
// the Library shelf.
char * removeWhiteSpace(char string[]) {
    int i;
    for (i = 0; i <= strlen(string); i++) {
        if(string[i] == '\n') {
            string[i] = '\0';
        }
    }
    return string;
}

// Defines the structure of the Book on a shelf
// of a precise department.
struct shelf {
    int id;
    int year;
    char title[255];
    //char * author;

};

// Defines the structure of a more generic shelf of
// a particular department in the Library.
// => A Department shelf can not hold more than 100 Books.
struct shelves {
    int id;
    struct shelf department[100];
};

// Construct three array for Comp. Sci, LIS and Mass Comm.
// Since we are dealing only with 3 departments.
struct shelves library[3];

void insertBook() {
    char title[255], *pos;
    int i, bookYear;
    printLines();
    printf("Insert Book into Computer Science Shelf\n");
    printLines();

    for(i = 0; i <= 99; i++) {
        if (!!!library[department_id].department[i].id) {
            printf("Enter the name of the Book: ");
            getchar();
            fgets(name, 255, stdin);
            strcpy(library[department_id].department[i].title, removeWhiteSpace(name));
            printf("The year of Publishing: \n");
            scanf("%d", &bookYear);

            library[department_id].department[i].id = i + 1;
            library[department_id].department[i].year = bookYear;
            break;
        }
    }
    printf("Book has been Added with an ID of %d\n", i + 1);
    printLines();
    sleep(3);
    request = 31;
}

void removeBook(int id) {
    int bookId = id;
    if (library[department_id].department[bookId].id) {
        printLines();
        library[department_id].department[bookId].id = 0;
        printf("Book has been deleted successfully.\n");
        printLines();
        sleep(3);
        request = 4;
        return;
    }
    printLines();
    printf("The Book with the ID %d was not found on the Shelf.\n", id);
    printLines();
    sleep(3);
    request = 4;
}
#endif //LIBRARY_MANAGEMENT_SHELF_H
