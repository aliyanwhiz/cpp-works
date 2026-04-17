#include <iostream>
using namespace std;

int main() {
    double x, n, result = 1;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    int numrator , denominator = 0;
    // int result = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            numrator = x *= i;
            denominator *= i;
            result += numrator / denominator;
        }
    }


    cout << "Result: " << result << endl;
    return 0;
}