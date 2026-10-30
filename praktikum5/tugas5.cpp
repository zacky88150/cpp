#include <iostream>

using namespace std;

int main() {
    int n = 5;
    long long faktorial = 1;

    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }

    cout << "Faktorial dari " << n << " adalah: " << faktorial << endl;

    return 0;
}