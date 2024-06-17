#include <stdlib.h>
#include <string.h>

void exe(char argv[]) {

    char str1[] = "./";
    argv = strcat(str1, argv);
    int return_value = system(argv);

    if (return_value != 0) {

    }

}