// Verilmis ededin tersinin ozu ile beraberd olub olmadigini yoxlayan proqram(funksiya ilə)
#include <iostream>
using namespace std;

void tersYoxla() {
    int n;
    cin >> n;
    int temp = n, ters = 0;
    while(temp > 0) {
        ters = ters*10 + temp%10;
        temp /= 10;
    }
    cout << "Tersi: " << ters << endl;
    if(ters == n) cout << "Beraberdir" << endl;
    else cout << "Beraber deyil" << endl;
}

int main() {
    tersYoxla();
}
