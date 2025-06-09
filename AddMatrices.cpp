#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int A[r][c], B[r][c], result[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> B[i][j];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = A[i][j] + B[i][j];
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
