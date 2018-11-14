cmake_minimum_required(VERSION 3.9)
project(library_management C)

set(CMAKE_C_STANDARD 99)

add_executable(library_management main.c lmsauth.h printhelper.h kernel.h goodbye.h mainmenu.h addbook.h department-add.h book.h shelf.h show-books.h delete-book.h)