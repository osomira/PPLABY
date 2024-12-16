#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


double iloczynRekurencyjnie(double ciag[], int n) {
    if (n == 1) return ciag[0];
    return ciag[n - 1] * iloczynRekurencyjnie(ciag, n - 1);
}

int main() {
    srand(time(0));
    int n;
    cout << "Ile elementow ciagu?: ";
    cin >> n;
    double ciag[n];
    cout << "Wylosowany ciag liczb rzeczywistych:" << endl;
    for (int i = 0; i < n; i++) {
        ciag[i] = 2 + (rand() % 1600) / 100.0;
        cout << fixed << setprecision(2) << ciag[i] << " ";
    }
    cout << endl;
    double wynik = iloczynRekurencyjnie(ciag, n);
    cout << "Iloczyn elementow ciagu: " << fixed << setprecision(2) << wynik << endl;

    return 0;
}
