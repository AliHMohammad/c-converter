#include<stdio.h>
#include <string.h>

void display_distance_menu() {
    printf("k) Miles to Kilometer\n");
    printf("m) Kilometer to Miles\n");
    printf("i) Centimeter to inches\n");
    printf("x) Back\n");
}

void get_distance_choice(char *s) {

    char input;
    scanf("%c", &input);

    switch (input)
    {
    case 'k':
        strcpy(s, "Miles");
        break;
    case 'm':
        strcpy(s, "Kilometer");
        break;
    case 'i':
        strcpy(s, "Centimeter");
        break;
    case 'x':
        strcpy(s, "exit");
        break;
    default:
        get_distance_choice(s);
        break;
    }
}

float get_distance_value(const char* type) {
    printf("Indtast afstand i %s: ", type);
    float value;
    scanf("%f", &value);
    return value;
}
