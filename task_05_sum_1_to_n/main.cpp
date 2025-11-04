
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n;
    if (!(std::cin >> n)) return 0;

    long long sum=0;
    for (long long i=1; i<=n; i++)
        sum +=i;
    std::cout << sum;
    return 0;
}
