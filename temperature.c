#include<stdio.h>
// Vi inkluderer vores eget bibliotek
#include "temperature.h"



int main() {
    printf("Velkommen til min converter!\n");
    printf("==========================\n");

    while (1)
    {
        display_menu();

        char choice = get_choice();

        if (choice == 'x')
            break;

        float fahr = get_value();

        float cel = fahrenheit_to_celcius(fahr);
        printf("%.2f fahrenheit er %.2f grader celcius\n", fahr, cel);
    }
    

    return 0;
}

float fahrenheit_to_celcius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float celcius_to_fahrenheit(float celcius) {
    return (celcius * 9.0 / 5) + 32;
}




