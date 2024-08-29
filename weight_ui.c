#include<stdio.h>
#include <string.h>

void display_weight_menu() {
    printf("p) Kilogram to Pounds\n");
    printf("k) Pounds to Kilogram\n");
    printf("o) Gram to Ounces\n");
    printf("x) Back\n");
}

void get_weight_choice(char *s) {

    char input;
    scanf("%c", &input);

    switch (input)
    {
    case 'p':
        strcpy(s, "Kilogram");
        break;
    case 'k':
        strcpy(s, "Pounds");
        break;
    case 'o':
        strcpy(s, "Gram");
        break;
    case 'x':
        strcpy(s, "exit");
        break;
    default:
        get_weight_choice(s);
        break;
    }
}

float get_weight_value(const char* type) {
    printf("Indtast vaegt i %s: ", type);
    float value;
    
    scanf("%f", &value);
    return value;
}
