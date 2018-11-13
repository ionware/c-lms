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
//    library[0].department[0].id = 1;
//    library[0].department[0].title = "Learning HTML";
//    //library[department_id].department[0].author = "Sarah Udoh";
//    library[0].department[0].year = 2009;
//    library[0].department[1].id = 2;
//    * library[0].department[1].title = "Assembly Language x86";
//    //library[department_id].department[0].author = "Sarah Udoh";
//    library[0].department[2].year = 2017;

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
            //strncpy(library[department_id].department[i].title,  pos, strlen(pos) - 1);
            strcpy(library[department_id].department[i].title, removeWhiteSpace(name));
            printf("The year of Publishing: \n");
            scanf("%d", &bookYear);

            library[department_id].department[i].id = i + 1;
            library[department_id].department[i].year = bookYear;
            break;
        }
    }
    printf("Book has been Added with an ID of %d\n", i);
    printLines();
    sleep(3);
    request = 31;
}
#endif //LIBRARY_MANAGEMENT_SHELF_H
