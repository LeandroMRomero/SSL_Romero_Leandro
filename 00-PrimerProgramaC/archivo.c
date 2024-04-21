#include <stdio.h>
#include <string.h>

int main() {
    char respuesta[20];

    printf("Buen dia, como estas?\n");
    scanf("%s", respuesta);

    // Comprobamos si la respuesta es "bien"
    if (strcmp(respuesta, "bien") == 0) {
        printf("Que bueno! :)\n");
    } else {
        printf("Ok, chau.\n");
    }

    return 0;
}
