#include<stdio.h>
#include <string.h>

void display_temperature_menu() {
    printf("f) Celcius to Fahrenheit\n");
    printf("c) Fahrenheit to Celcius\n");
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
    case 'x':
        strcpy(s, "exit");
        break;
    default:
        get_temperature_choice(s);
        break;
    }
}

float get_temperature_value(const char* type) {
    printf("Indtast temperatur i %s: ", type);
    float value;
    scanf("%f", &value);
    return value;
}
