// 1-dən 100-ə qədər ədədlərin cəmini hesablayan proqram (Funksiya istifadə edərək)
#include <iostream>
using namespace std;

void cəm100() {
    int sum = 0;
    for(int i = 1; i <= 100; i++)
        sum += i;
    cout << "1-dən 100-ə qədər ədədlərin cəmi: " << sum << endl;
}

int main() {
    cəm100();
}