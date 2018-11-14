#ifndef LIBRARY_MANAGEMENT_SHOW_BOOKS_H
#define LIBRARY_MANAGEMENT_SHOW_BOOKS_H

extern struct shelves library[3];
extern int request;

void shelfLookUp(char dept[50], int count, int id) {
    printDots(90);
    printf("\t\tTotal Books on %s Shelf: %d\n", dept, count);
    int i = 0;
    if (count > 0) {
        printTableHeader();
        for (i = 0; i <= 99; i++) {
            if (library[id].department[i].id) {
                printf("%d\t\t\t | %s\t\t\t | %d\n",
                       library[id].department[i].id, library[id].department[i].title,
                       library[id].department[i].year);
            }
        }
    } else {
        printDots(90);
        printf("There is no Book on %s Shelf\n", dept);
    }
    printf("\n\n");
    return;
}

void showBook() {
    int csc, lis, massComm, i;
    csc = lis = massComm = 0;
    for(i = 0; i <= 99; i++) {
        if (library[0].department[i].id)
            csc += 1;
        if (library[1].department[i].id)
            lis += 1;
        if (library[2].department[i].id)
            massComm += 1;
    }
    shelfLookUp("Comp. Sci", csc, 0);
    shelfLookUp("Library Information Sci.", lis, 1);
    shelfLookUp("Mass Comm.", massComm, 2);

    printf("Press Enter to Continue:");
    sleep(10);
    request = 2;
}
#endif //LIBRARY_MANAGEMENT_SHOW_BOOKS_H
