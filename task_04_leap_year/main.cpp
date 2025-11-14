
#include <iostream>
using namespace std;
int main() {
    int rok;
    cin >> rok;
    
    if ((rok % 400 == 0) || (rok % 4 == 0 && rok % 100 != 0))
    cout << "YES";
    else
        cout << "NO";
    return 0;
}
