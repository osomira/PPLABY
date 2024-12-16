#include <iostream>
using namespace std;


int oblicz_a1(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    return oblicz_a1(n - 1) * oblicz_a1(n - 2);
}

int main() {
    int n;
    cout << "Podaj n: ";
    cin >> n;

    cout << "a_n" << n << " = " << oblicz_a1(n) << endl;
    return 0;
}
