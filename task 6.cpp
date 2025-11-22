// Verilmis n ededlerin cemini tapan proqram(funksiya ilə)
#include <iostream>
using namespace std;

void cemN() {
    int n, x, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    cout << "Ededlerin cemi: " << sum << endl;
}

int main() {
    cemN();
}