#include <iostream>
#include <cmath>

using namespace std;


int sumaCyfr(int liczba) {
    if (liczba == 0) return 0;
    return abs(liczba % 10) + sumaCyfr(liczba / 10);
}

void wczytajTablice(int tablica[], int n, int i = 0) {
    if (i == n) return;
    cout << "Podaj element " << i + 1 << ": ";
    cin >> tablica[i];
    wczytajTablice(tablica, n, i + 1);
}

int sumaTablicy(int tablica[], int n, int i = 0) {
    if (i == n) return 0;
    return sumaCyfr(tablica[i]) + sumaTablicy(tablica, n, i + 1);
}

int main() {
    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    int tablica[n];
    wczytajTablice(tablica, n);
    cout << "Podana tablica: ";
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    int wynik = sumaTablicy(tablica, n);
    cout << "Suma cyfr wszystkich elementow tablicy: " << wynik << endl;

    return 0;
}
