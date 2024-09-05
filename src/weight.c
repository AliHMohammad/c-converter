#include<stdio.h>
#include <string.h>
// Vi inkluderer vores eget bibliotek
#include "weight.h"

int weight_main() {

    while (1)
    {
        char choice[256];
        float value;

        display_weight_menu();

        get_weight_choice(choice);

        if (strcmp(choice, "exit") == 0) 
            break;

        value = get_weight_value(choice);
        if (strcmp(choice, "Kilogram") == 0) {
            float pounds = kilogram_to_pounds(value);
            printf("%.2f kilograms er %.2f pounds\n", value, pounds);
        } else if (strcmp(choice, "Pounds") == 0) {
            float kilogram = pounds_to_kilogram(value);
            printf("%.2f pounds er %.2f kilograms\n", value, kilogram);
        } else if (strcmp(choice, "Gram") == 0) {
            float pounds = grams_to_pounds(value);
            printf("%.2f gram er %.2f pounds\n", value, pounds);
        }

    }
    
    return 0;
}

float kilogram_to_pounds(float kilogram) {
    return kilogram * 2.205;
}

float pounds_to_kilogram(float pounds) {
    return pounds / 2.205;
}

float grams_to_pounds(float grams) {
    return grams / 453.6;
}
