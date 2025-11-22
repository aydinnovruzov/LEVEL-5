// 1000dək Fibonacci ədədlərini çap edən C++ proqramı(funksiya ilə)
#include <iostream>
using namespace std;

void fibonacci() {
    int a = 0, b = 1;
    while(a < 1000) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    fibonacci();
}