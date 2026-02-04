#include <iostream>
using namespace std;

int main() {
    int liczba;
    cin >> liczba;

    if (liczba <= 0) {
        cout << "B³¹d: Podaj dodatni¹ liczbê naturaln¹!" << endl;
        return 1;
    }

    cout << liczba;
    if (czy_doskonala(liczba)) {
        cout << " jest liczba doskona³a" << endl;
    } else {
        cout << " nie jest liczba doskona³a" << endl;
    }
    return 0;
}

