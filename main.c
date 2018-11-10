
#include "kernel.h"
int request = 1;

int main() {
    // Defines each level of the application to be
    // handled by the Kernel function.

    // Turn the Light on
    while(request != 0) {
        Kernel(request);
    }

    return 0;
}