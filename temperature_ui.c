#include<stdio.h>

void display_menu() {
    printf("f) Celcius to Fahrenheit\n");
    printf("c) Fahrenheit to Celcius\n");
    printf("x) Exit\n");
}

char get_choice() {
    //TODO: brug en switch case her. Den skal returnere en string (f.eks. f => fahrenheit)
    char choice;
    scanf("%c", &choice);
    return choice;
}
//TODO: Skal tage i mod type (string)
float get_value() {
    // printf("Indtast temperatur i %s", type)
    float value;
    scanf("%f", &value);
    return value;
}
