#include <stdio.h>

int main() {

unsigned int liczba_wierszy, liczba_znakow, wiersz, kolumna;
char znak;

printf("Podaj liczbe wierszy: ");
scanf("%d", &liczba_wierszy);

printf("Podaj liczbe znakow: ");
scanf("%d", &liczba_znakow);

printf("Podaj dowolny znak: ");
scanf(" %c", &znak);

printf("\n");

for (wiersz = 1; wiersz <= liczba_wierszy; wiersz++) {
    for (kolumna = 1; kolumna <= liczba_znakow; kolumna++){
        printf("%c", znak);
    }
    printf("\n");
    }
return 0;
}
