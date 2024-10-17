#include <stdio.h>

int main() {
    int numero;


    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    printf("I divisori di %d sono: ", numero);


    if (numero == 0) {
        printf("Il numero 0 non ha divisori.\n");
    } else {

        for (int i = 1; i <= (numero); i++) {
            if (numero % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
