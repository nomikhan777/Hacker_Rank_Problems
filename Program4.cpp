#include <iostream>
#include <iomanip>
using namespace std;

void plusMinus(int arr[], int n) {
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    cout << fixed << setprecision(6) << (double) positive_count / n << endl;
    cout << fixed << setprecision(6) << (double) negative_count / n << endl;
    cout << fixed << setprecision(6) << (double) zero_count / n << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    plusMinus(arr, n);
    return 0;
}
