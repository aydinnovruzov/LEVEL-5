// faktorialın hesaplanması(funksiya ilə)
#include <iostream>
using namespace std;

void faktorial() {
    int n;
    cin >> n;
    long long f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    cout << n << "! = " << f << endl;
}

int main() {
    faktorial();
}