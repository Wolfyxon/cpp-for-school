#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
} Film;

void printFilm(Film* film, int id) {
    printf("F%i: %i - %i \n", id, film->start, film->end);
}

void sort(Film* films, size_t len) {
    
    for(int i = 1; i < len; i++) {
        int j = i - 1;
        Film current = films[i];

        while(j >= 0 && films[j].end > current.end) {
            films[j + 1] = films[j];
            j -= 1;
        }

        films[j + 1] = current;
    }
}

int main() {
    int filmsLen = 0;

    printf("Podaj ilośc filmów: ");
    scanf("%i", &filmsLen);

    Film films[filmsLen]; 

    for(int i = 0; i < filmsLen; i++) {
        Film film;
        
        printf("Dane filmu F%i: \n", i);

        printf("start: ");
        scanf("%i", &film.start);

        printf("koniec: ");
        scanf("%i", &film.end);

        films[i] = film;
    }
    
    puts("Harmonogram:");

    for(int i = 0; i < filmsLen; i++) {
        printFilm(&films[i], i);
    }

    puts("Posortowane:");
    sort(films, filmsLen);

    for(int i = 0; i < filmsLen; i++) {
        printFilm(&films[i], i);
    }

    puts("Wybrane filmy:");

    for(int i = 1; i < filmsLen; i++) {
        Film prev = films[i - 1];
        Film current = films[i];

        if(current.start > prev.end) {
            printFilm(&current, i);
        }
    }
}