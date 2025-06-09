#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> x;

    int first = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            first = i;
            break;
        }
    }

    int last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            last = i;
        }
    }

    cout << first << " " << last;
    return 0;
}
