#include <iostream>

using namespace std;

int main() {
    int cnt;
    cin >> cnt;
    int total = 0;
    string src;
    cin>>src;
    for (int i = 0; i < cnt; ++i) {
        total += (int)src[i] - 48;
    }
    cout << total;
}
