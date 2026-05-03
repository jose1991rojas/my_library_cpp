#ifndef RUZZA_H
#define RUZZA_H

#include <cctype>
#include <cstring> // <--- NUEVA: Para que funcione strlen()

// Funcionalidad strupr(); es antigua pero la cree para seguir usandola, es para cambiar palabras minusculas a mayusculas.
void strupr(char palabra[]) {
    for (int i = 0; palabra[i] != '\0'; i++) {
        palabra[i] = toupper((unsigned char)palabra[i]);
    }
}

// Funcionalidad strrev(); es antigua pero la cree para seguir usarlai, es para revertir la palabra.
void strrev(char palabra[]) {
    int n = strlen(palabra);
    for (int i = 0; i < n / 2; i++) {
        char temp = palabra[i];
        palabra[i] = palabra[n - i - 1];
        palabra[n - i - 1] = temp;
    }
}

#endif // <--- ESTO SIEMPRE DEBE IR AL FINAL para que mi libreria funcione
