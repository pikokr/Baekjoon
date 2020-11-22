#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int res = a * b * c;
    int results[10] = {0};

    while (res!=0) {
        results[res%10] = results[res%10] + 1;
        res /= 10;
    }

    for (int i = 0; i < 10; ++i) {
        cout<<results[i]<<'\n';
    }
}