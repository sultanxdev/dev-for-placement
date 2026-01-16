#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n;
    int sum = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    cout << sum;
    return 0;
}
