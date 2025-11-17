
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int numbers[1000]; 

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    for (int value = 0; value <= 100; value++) {
        int count = 0;

     for (int i = 0; i < n; i++) {
        if (numbers[i] == value) {
        count++;
         }
        }
        if (count > 0) {
            cout << value << " " << count << endl;
        }
    }
    return 0;
}