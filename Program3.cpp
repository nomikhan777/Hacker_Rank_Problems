#include <iostream>
#include <cmath>
using namespace std;

int diagonalDifference(int arr[][100], int n) {
    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < n; i++) {
        left_sum += arr[i][i];
        right_sum += arr[i][n-1-i];
    }
    return abs(left_sum - right_sum);
}

int main() {
    int n;
    cin >> n;
    int arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int result = diagonalDifference(arr, n);
    cout << result << endl;
    return 0;
}
