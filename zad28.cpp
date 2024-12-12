#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    srand(rand());

    double a, b;
    int n;
    cout << "Podaj dolną granicę całkowania (a): ";
    cin >> a;

    cout << "Podaj górną granicę całkowania (b): ";
    cin >> b;

    cout << "Podaj liczbę prób losowych (n): ";
    cin >> n;

    double s = 0.0;
    double zakres = b - a;

    for (int i = 0; i < n; i++) {
        double c = a + (static_cast<double>(rand()) / RAND_MAX) * zakres;
        s += c;
    }

    double wynikMonteCarlo = (s / n) * zakres;
    double wynikDokladny = 0.5 * b * b - 0.5 * a * a;

    cout << "Wynik całkowania metodą Monte Carlo: " << wynikMonteCarlo << endl;
    cout << "Dokładny wynik całkowania: " << wynikDokladny << endl;
    cout << "Błąd: " << fabs(wynikMonteCarlo - wynikDokladny) << endl;

    return 0;
}
