#include <unistd.h>
#include "main.h"

/* Definition of the _putchar function */
int _putchar(char c) {
    return write(1, &c, 1);
}
