# Wybrane zadania
(10)

## Zadanie 10-12. (Weryfikacja hasła)
Rozszerz program kontrolujący hasła w taki sposób, aby akceptował wielu użytkowników, z których każdy ma swoje hasło. Zagwarantuj, aby właściwe hasła
były przypisane właściwym użytkownikom. Udostępnij możliwość ponownego
zalogowania użytkownika, jeśli pierwsza próba nie powiodła się. Zastanów się,
jak łatwo (lub trudno) można zrealizować taką funkcjonalność w przypadku
dużej liczby użytkowników i haseł.

Pomyśl o tym, jakie elementy lub funkcje języka ułatwiłyby dodawanie nowych
użytkowników bez potrzeby ponownej kompilacji programu weryfikującego hasła

## Zadanie 22. (Rozkład na czynniki pierwsze)
Napisz program rozkładający daną liczbę naturalną na czynniki pierwsze w następujący sposób. Sprawdzamy, czy liczba dzieli się przez 2. Jeżeli tak, to stwierdzamy, że dwójka występuje w jej rozkładzie na czynniki pierwsze, a samą liczbę
dzielimy przez 2. Czynność tę powtarzamy, aż liczba przestanie być podzielna
przez 2. Następnie powtarzamy tę samą procedurę badając podzielność przez 3,
4, itd., aż rozważana liczba stanie się równa 1.

## Zadanie 40-42. (Szyfr podstawieniowy)
Napisz program używający szyfru podstawieniowego, w którym wszystkie wiadomości składają się z wielkich liter i znaków interpunkcyjnych. Pierwotna wiadomość jest zwana tekstem jawnym, zaś szyfrogram tworzy się poprzez podmianę każdej z liter na inną. Utwórz w programie tablicę typu const składającą się
z 26 elementów char służących do szyfrowania. Program powinien odczytywać
tekst jawny i wyprowadzać odpowiadający mu szyfrogram.

Zmodyfikuj powyższy program w taki sposób, by konwertował szyfrogram z
powrotem na tekst jawny w celu zweryfikowania kodowania i dekodowania.

Aby jeszcze bardziej utrudnić problem szyfru podstawieniowego, zmodyfikuj
program w taki sposób, by zamiast wykorzystywać wbudowaną tablicy wartości
const, generował w sposób losowy wzorzec szyfrowania. W praktyce oznacza to
umieszczenie losowych znaków w każdym elemencie tablicy. Pamiętaj, że dana
litera nie może być substytutem samej siebie. Nie możesz także użyć tej samej
litery dwukrotnie.

## Zadanie 46. (Ciąg Fibonacciego)
Ciąg Fibonacciego to ciąg liczb, w którym pierwszy wyraz jest równy 0, drugi
jest równy 1 a każdy następny jest sumą dwóch poprzednich:

F0 = 1 F1 = 1 Fn = Fn−1 + Fn−2

Napisz program wyznaczający n-ty wyraz ciągu najpierw przy użyciu funkcji
iteracyjnej, a następnie rekurencji. Które podejście jest łatwiejsze?

## Zadanie 51. (Rekurencyjna potęga)
Napisz program w sposób rekurencyjny obliczający funkcję potęgową x^y

## Zadanie 55. (Implementacja funkcji swap)
Napisz funkcję, która zamienia miejscami wartości swoich dwóch argumentów.
Niewykonalne? – przekaż do funkcji argumenty przy użyciu wskaźników albo
referencji

## Zadanie 59. (Odwrócony Pan Tadeusz)
Zaimplementuj stos zmiennych typu string. Korzystając z tej struktury napisz
program, który wczytuje ze standardowego wejścia ciąg słów, a następnie wypisuje je na standardowe wyjście w odwrotnej kolejności, oddzielone spacjami.
Program przetestuj na tekście Pana Tadeusza i Hamleta.

## Zadanie 37. (Dominanta sondażowa)
Dominantą zbioru danych w statystyce nazywamy taką wartość, która występuje
w nim najczęściej. Napisz kod, który przetwarza tablicę danych sondażowych,
aby ustalić ich dominantę. Odpowiedź na pytanie sondażowe polegała na podawaniu liczby z zakresu od 1 do 10. W sytuacji gdy istnieje wiele dominant,
można wybrać dowolną z nich. Program powinien wczytywać odpowiedzi na
pytanie ankietowe do momentu, w którym użytkownik wprowadzi wartość 0.

## Zadanie 24. (Arytmetyka binarna)
Jeśli znasz arytmetykę binarną i wiesz, w jaki sposób można zamieniać liczby
dziesiętne na binarne (i odwrotnie), spróbuj napisać programy, które wykonują
takie konwersje dla liczb o nieograniczonej długości (możesz założyć, że są na
tyle małe, iż mogą być przechowywane w standardowym typie int języka C++)

## Zadanie 13. (Trójka pitagorejska)
Napisz program, który wczyta trzy liczby typu int a następnie sprawdzi czy stanowią one trójkę pitagorejską, to znaczy czy suma kwadratów dwóch mniejszych liczb jest równa kwadratowi liczby największej. Liczby
3, 4 oraz 5 stanowią taką trójkę. W przypadku podania trójki pitagorejskiej należy wyświetlić komunikat: Liczby stanowia trojke pitagorejska., w przeciwnym razie powinien być to komunikat: To nie jest trojka pitagorejska.
Uwaga: W programie należy założyć, że użytkownik wpisze liczby w dowolnej
kolejności, np. 5, 3, 4.