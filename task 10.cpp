// 3 rəqəmli Armstrong ədədlərini tapmaq(funksiya ilə)
#include <iostream>
using namespace std;

void armstrong() {
    for(int i = 100; i <= 999; i++) {
        int a = i/100, b = (i/10)%10, c = i%10;
        if(a*a*a + b*b*b + c*c*c == i)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    armstrong();
}