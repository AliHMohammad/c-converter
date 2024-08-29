#include<stdio.h>
#include <string.h>
// Vi inkluderer vores eget bibliotek
#include "distance.h"

int distance_main() {

    while (1)
    {
        char choice[256];
        float value;

        display_distance_menu();

        get_distance_choice(choice);

        printf("%s\n", choice);

        if (strcmp(choice, "exit") == 0) 
            break;

        value = get_distance_value(choice);
        if (strcmp(choice, "Miles") == 0) {
            float kilometer = miles_to_kilometer(value);
            printf("%.2f Miles er %.2f Kilometer\n", value, kilometer);
        } else if (strcmp(choice, "Kilometer") == 0) {
            float miles = kilometer_to_miles(value);
            printf("%.2f kilometer er %.2f miles\n", value, miles);
        } else if (strcmp(choice, "Centimeter") == 0) {
            float inches = centimeter_to_inches(value);
            printf("%.2f centimeter er %.2f inches\n", value, inches);
        }

    }
    
    return 0;
}

float miles_to_kilometer(float miles) {
    return miles * 1.609344;
    
}

float kilometer_to_miles(float kilometer) {
    return kilometer / 1.609344;
}

float centimeter_to_inches(float centimeter) {
    return centimeter / 2.54;
}

