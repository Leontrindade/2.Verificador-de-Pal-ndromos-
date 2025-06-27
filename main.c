#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

bool eh_palindromo(char* palavra) {
    int inicio = 0;
    int fim = strlen(palavra) - 1;

    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) {
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

int main() {
    char palavra[MAX];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (eh_palindromo(palavra)) {
        printf("É palíndromo!\n");
    } else {
        printf("Não é palíndromo.\n");
    }

    return 0;
}
