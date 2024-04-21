#include <stdio.h>
#include <string.h>

int main() {
    char respuesta[20];

    printf("Buen día, ¿cómo estás?\n");
    scanf("%s", respuesta);

    // Comprobamos si la respuesta es "bien"
    if (strcmp(respuesta, "bien") == 0) {
        printf("¡Qué bueno! :)\n");
    } else {
        printf("Entiendo. ¡Hasta luego!\n");
    }

    return 0;
}
