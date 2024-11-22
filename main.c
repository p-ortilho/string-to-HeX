#include <stdio.h>
#include <string.h>

void stringHex(const char *string, char *buffer);

int main()
{   
    const char *string = "ola mundo!";
    char buffer[512];

    stringHex(string, buffer);

    printf("%s", buffer);

    return 0;
}

void stringHex(const char *string, char *buffer)
{
    while (*string)
    {
        /*

        buffer -> local onde colocar
        \\x%02X -> escapa \x a cada 2 carateres hexadecimais
        (unsigned char)*string -> cada caracter da string

        */

        sprintf(buffer, "\\x%02X", (unsigned char)*string);
        
        buffer += 4; // Cada sequência "\\xXX" tem 4 caracteres

        string++;
    }

    *buffer = '\0'; // termina a string com nulo
}