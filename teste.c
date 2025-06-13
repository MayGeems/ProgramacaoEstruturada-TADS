#include <stdio.h>
#include <ctype.h>

void removeEspacosExtras(char *str) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        // Ignorar espaços consecutivos
        if (!isspace(str[i]) || (i > 0 && !isspace(str[i - 1]))) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  // Finaliza a string
}

int main() {
    char texto[] = "  Olá   Mundo!   Como vai   você?  ";
    
    printf("Antes: \"%s\"\n", texto);
    
    removeEspacosExtras(texto);
    
    printf("Depois: \"%s\"\n", texto);

    return 0;
}
