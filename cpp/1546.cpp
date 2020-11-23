#include <iostream>

using namespace std;

int main() {
    int tot;
    cin >> tot;
    int scores[tot], max = 0;
    for (int i = 0; i < tot; ++i) {
        cin >> scores[i];
        if (max < scores[i]) max = scores[i];
    }

    float sum = 0;

    for (int i = 0; i < tot; ++i) {
        float cur = (float) scores[i];
        cur = (float) cur / max * 100;
        scores[i] = cur;
        sum += cur;
    }

    cout << (float) sum / tot << '\n';
}
