
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int number[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char cislo = 5;

    cout << sizeof(number) / 4 << '\n';

    for (int i = 0; i < 24; i++) {
        cout << number[i] << '\n';
    }
    return 0;
}