
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n[101] = {};

    n[1] += 1;
    n[2] += 1;
    n[2] += 1;
    n[100] += 1;
    n[10] += 1;

    for (int pocet : n) {
        cout << pocet << " ";
    }
    return 0;
}