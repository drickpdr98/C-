#include <iostream>
using namespace std;

int main() {
    int n = 5; // or any odd number

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j >= n - 1 && i <= j) {
                cout << "X ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
