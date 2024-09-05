#include <stdio.h>
#include <string.h>

#include "convert.h"
#include "distance.h"
#include "temperature.h"
#include "weight.h"

int main() {
    display_intro();

    while(1) {
        char type[256];

        display_types();

        get_type(type);

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
    } else if (strcmp(str, "Weight") == 0) {
        weight_main();
    }
}

