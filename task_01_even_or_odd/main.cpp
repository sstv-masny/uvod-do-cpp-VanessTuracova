
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "zadaj n";
    cin >> n;

    if (n % 2 == 0)
        cout << "číslo je párne" << endl;
    else {
        cout << "číslo je nepárne" << endl;
    }
    return 0;
}