#include <iostream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

set<int> input_set() {
    while (true) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        set<int> s;
        int x;
        while (ss >> x) {
            s.insert(x);
        }
        if (ss.eof() && !ss.fail()) {
            return s;
        } else {
            cout << "Error: set can only consist of integers" << endl;
        }
    }
}

int main() {
    cout << "Enter set A:" << endl;
    set<int> set_a = input_set();

    cout << "Enter set B:" << endl;
    set<int> set_b = input_set();

    cout << "Enter set U:" << endl;
    set<int> set_u = input_set();

    cout << "Enter set C:" << endl;
    set<int> set_c = input_set();

    set<int> result;
    set_intersection(set_a.begin(), set_a.end(), set_b.begin(), set_b.end(), inserter(result, result.begin()));
    set_difference(set_u.begin(), set_u.end(), set_c.begin(), set_c.end(), inserter(result, result.begin()));
    cout << "Transformed set: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
