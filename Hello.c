#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    // Attende che l'utente prema un tasto
    printf("Buona giornata!");
    printf("Premi invio per uscire...");
    getchar(); // Alternativa: scanf("%c", &c);

    return 0;
}

