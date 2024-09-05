#ifndef WEIGHT_H
#define WEIGHT_H

void display_weight_menu();
float grams_to_pounds(float grams);
float pounds_to_kilogram(float pounds);
float kilogram_to_pounds(float kilogram);
void get_weight_choice(char *s);
float get_weight_value(const char* str);
int weight_main();

#endif // WEIGHT_H
