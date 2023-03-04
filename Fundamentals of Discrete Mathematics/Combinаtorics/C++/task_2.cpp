#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 0; i < 1000; i++) {
        int num = i;
        int digit_count = 0;
        while (num > 0) {
            if (num % 10 == 7) {
                digit_count++;
            }
            num /= 10;
        }
        if (digit_count == 1) {
            count++;
        }
    }
    cout << "Number of integers between 0 and 999 containing exactly one digit 7: " << count << endl;
    return 0;
}