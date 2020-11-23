#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int cnt;
    cin >> cnt;

    int numbers[cnt];

    for (int i = 0; i < cnt; ++i) {
        cin >> numbers[i];
    }

    int s = (sizeof(numbers) / sizeof(numbers[0]));

    int min = *min_element(numbers, numbers + s);
    int max = *max_element(numbers, numbers + s);

    cout << min << ' ' << max << '\n';
}