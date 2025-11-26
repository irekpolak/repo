#include <iostream>
using namespace std;

bool czy_doskonala(int n) {
    if (n <= 1) return false;
    int suma = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            suma += i;
            if (i != n / i) suma += n / i;
        }
    }
    return suma == n;
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Blad: podana liczba nie jest dodatnia liczba naturalna." << endl;
        return 0;
    }

    cout << n;
    if (czy_doskonala(n))
        cout << " jest liczba doskonala";
    else
        cout << " nie jest liczba doskonala";

    cout << endl;
    return 0;
}
