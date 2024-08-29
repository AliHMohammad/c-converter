#include<stdio.h>
#include <string.h>

void display_intro() {
    printf("Velkommen til Alis converter!\n");
    printf("==========================\n");
}

void display_types() {
    printf("t) Temperature\n");
    printf("d) Distance\n");
    printf("x) Exit\n");
}

void get_type(char *s) {

    char input;
    scanf("%c", &input);

    switch (input)
    {
    case 't':
        strcpy(s, "Temperature");
        break;
    case 'd':
        strcpy(s, "Distance");
        break;
    case 'x':
        strcpy(s, "exit");
        break;
    default:
        get_type(s);
        break;
    }
}
