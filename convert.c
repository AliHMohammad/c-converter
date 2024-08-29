#include <stdio.h>
#include <string.h>

#include "temperature.h"
#include "convert.h"

int main() {
    display_intro();

    while(1) {
        char type[256];

        display_types();

        get_type(type);

        printf("%s\n", type);

        if (strcmp(type, "exit") == 0) 
            break;

        convert(type);
    }

    printf("\nHave a good day :)\n");
    return 0;
}

void convert(char *str) {
    if (strcmp(str, "Distance") == 0) {
        //TODO: Skal lave hele distance converting. Husk at importere .h øverst her
    } else if (strcmp(str, "Temperature") == 0) {
        temperature_main();
    }
    //TODO: tredje og sidste option.
}

