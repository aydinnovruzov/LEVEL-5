// 3 reqemli ededlerden ibaret olan ve reqemleri cemi 10-a beraber olan ededleri ekrana cixaran proqram(funksiya ilə)
#include <iostream>
using namespace std;

void sum10_3reqemli() {
    for(int i = 100; i <= 999; i++) {
        int a = i/100, b = (i/10)%10, c = i%10;
        if(a+b+c == 10)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    sum10_3reqemli();
}
