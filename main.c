#include <stdio.h>
int main() {
    int numero;
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);
    if (numero > 0) {
        printf("Il numero %d è positivo.\n", numero);
    } else if (numero < 0) {
        printf("Il numero %d è negativo.\n", numero);
    } else {
        printf("Il numero è zero.\n");
    }
    return 0;
}