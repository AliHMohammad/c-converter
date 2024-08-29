#include<stdio.h>
#include <string.h>

void display_temperature_menu() {
    printf("\nf) Celcius to Fahrenheit\n");
    printf("c) Fahrenheit to Celcius\n");
    printf("k) Celcius to Kelvin\n");
    printf("x) Back\n");
}

void get_temperature_choice(char *s) {

    char input;
    scanf("%c", &input);

    switch (input)
    {
    case 'f':
        strcpy(s, "Celcius");
        break;
    case 'c':
        strcpy(s, "Fahrenheit");
        break;
    case 'k':
        strcpy(s, "Kelvin");
        break;
    case 'x':
        strcpy(s, "exit");
        break;
    default:
        get_temperature_choice(s);
        break;
    }
}

float get_temperature_value(const char* type) {
    if (strcmp(type, "Kelvin") == 0) {
        printf("Indtast temperatur i Celcius: ");
    } else {
        printf("Indtast temperatur i %s: ", type);
    }
    
    float value;
    scanf("%f", &value);
    return value;
}
