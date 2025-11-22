// Verilmis n ededinin sade olub olmadigini tapan funksiya (funkiya ilə))
#include <iostream>
using namespace std;

void sade() {
    int n;
    cin >> n;
    bool sade = true;
    if(n <= 1) sade = false;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) sade = false;

    if(sade) cout << n << " sade ededdir" << endl;
    else cout << n << " sade deyil" << endl;
}

int main() {
    sade();
}