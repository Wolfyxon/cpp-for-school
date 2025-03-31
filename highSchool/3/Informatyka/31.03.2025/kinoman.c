#include <stdio.h>

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
    Film films[] = {
        {
            .start = 9,
            .end = 10
        },
        {
            .start = 16,
            .end = 17
        },
        {
            .start = 15,
            .end = 17
        },
        {
            .start = 18,
            .end = 21
        },
        {
            .start = 14,
            .end = 15
        },
        {
            .start = 10,
            .end = 11
        },
        {
            .start = 13,
            .end = 14
        },
        {
            .start = 15,
            .end = 17
        },
        {
            .start = 18,
            .end = 20
        }
    };

    size_t filmsLen = sizeof(films) / sizeof(Film);

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