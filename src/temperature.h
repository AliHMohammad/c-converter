#ifndef TEMPERATURE_H
#define TEMPERATURE_H

void display_temperature_menu();
float fahrenheit_to_celcius(float fahrenheit);
float celcius_to_fahrenheit(float celcius);
float celcius_to_kelvin(float celcius);
void get_temperature_choice(char *s);
float get_temperature_value(const char* str);
int temperature_main();

#endif // TEMPERATURE_H
