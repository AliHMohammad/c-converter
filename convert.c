#include <stdio.h>
#include <string.h>

#include "convert.h"
#include "distance.h"
#include "temperature.h"

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
        distance_main();
    } else if (strcmp(str, "Temperature") == 0) {
        temperature_main();
    }
    //TODO: tredje og sidste option.
}

