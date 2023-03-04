#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;

    for (int num = 0; num < 1000000; num++) {
        string num_str = to_string(num);
        bool has_duplicate = false;
        for (int i = 1; i < num_str.length(); i++) {
            if (num_str[i-1] == num_str[i]) {
                has_duplicate = true;
                break;
            }
        }
        if (!has_duplicate) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}