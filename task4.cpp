// Palindrome yoxlayan proqram(funksiya ile)
#include <iostream>
using namespace std;

void palindrome() {
    int n;
    cin >> n;
    int temp = n, ters = 0;
    while(temp > 0) {
        ters = ters * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Tersi: " << ters << endl;
    if(ters == n) cout << "Palindrome-dir" << endl;
    else cout << "Palindrome deyil" << endl;
}

int main() {
    palindrome();
}