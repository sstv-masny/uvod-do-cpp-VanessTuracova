
#include <iostream>
using namespace std;
int main() {
    long long kilometre;
    cin >> kilometre;

    double cena = 4.0;
    if (kilometre > 2)
        cena += 1.5 * (kilometre - 2);
    cout << cena << "0";

    return 0;
}
