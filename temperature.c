#include<stdio.h>
#include <string.h>
// Vi inkluderer vores eget bibliotek
#include "temperature.h"

int temperature_main() {

    while (1)
    {
        char choice[256];
        float value;

        display_temperature_menu();

        get_temperature_choice(choice);

        printf("%s\n", choice);

        if (strcmp(choice, "exit") == 0) 
            break;

        value = get_temperature_value(choice);
        if (strcmp(choice, "Celcius") == 0) {
            float fahr = celcius_to_fahrenheit(value);
            printf("%.2f grader celcius er %.2f fahrenheit\n", value, fahr);
        } else if (strcmp(choice, "Fahrenheit") == 0) {
            float cel = fahrenheit_to_celcius(value);
            printf("%.2f fahrenheit er %.2f grader celcius\n", value, cel);
        } else if (strcmp(choice, "Kelvin") == 0) {
            float kel = celcius_to_kelvin(value);
            printf("%.2f grader celcius er %.2f kelvin\n", value, kel);
        }

    }
    
    return 0;
}

float fahrenheit_to_celcius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float celcius_to_fahrenheit(float celcius) {
    return (celcius * 9.0 / 5) + 32;
}

float celcius_to_kelvin(float celcius) {
    return celcius + 273.15;
}

