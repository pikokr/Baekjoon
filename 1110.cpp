#include<iostream>

using namespace std;

int main() {
    int n;
    int a, b, c, d;
    int cnt = 0;

    cin >> n;

    if (n < 10) n *= 10;

    d = n;

    do {
        a = d / 10;
        b = d % 10;
        c = a + b;
        d = (b * 10) + (c % 10);
        cnt++;
    } while (n != d);
    cout << cnt;
}