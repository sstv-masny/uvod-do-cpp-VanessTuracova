
#include <iostream>
using namespace std;
int main() {
    int cislo;
    cin >> cislo;
    
    int obratene_cislo = 0;
    if (cislo == 0) {
        cout << 0;
    } else {
        while (cislo > 0) {
            int cifra = cislo % 10;        
        obratene_cislo = obratene_cislo * 10 + cifra;
        cislo = cislo / 10;
        }
        cout << obratene_cislo;
    }
    return 0;
}