#include <iostream>
#include "math.h"

using namespace std;

int main() {
    int count;
    cin>>count;
    for (int j = 0; j < count; ++j) {
        int cnt;

        cin >> cnt;

        int students[cnt];

        int sum = 0;

        for (int i = 0; i < cnt; ++i) {
            cin >> students[i];
            sum += students[i];
        }

        float aver = (float)sum / cnt;

        int c = 0;

        for (int i = 0; i < cnt; ++i) {
            if (students[i] > aver) {
                c++;
            }
        }

        cout.precision(3);

        cout << fixed;

        cout<<round((float)c/cnt*100 * 1000) / 1000 << "%\n";
    }
}
