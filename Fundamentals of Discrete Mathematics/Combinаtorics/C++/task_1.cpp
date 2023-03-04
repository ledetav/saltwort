#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

set<int> getSetFromInput(string setName) {
    set<int> s;
    string input;
    cout << "Enter set " << setName << ": ";
    getline(cin, input);
    stringstream ss(input);
    int num;
    while (ss >> num) {
        s.insert(num);
    }
    if (!ss.eof()) {
        cout << "Error: set " << setName << " contains non-integer values" << endl;
        s.clear();
    }
    return s;
}

int main() {
    set<int> A = getSetFromInput("A");
    set<int> B = getSetFromInput("B");
    set<int> U = getSetFromInput("U");
    set<int> C = getSetFromInput("C");

    set<int> temp1;
    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(temp1, temp1.end()));
    set<int> temp2;
    set_difference(U.begin(), U.end(), C.begin(), C.end(), inserter(temp2, temp2.end()));

    set<int> result;
    set_intersection(temp1.begin(), temp1.end(), temp2.begin(), temp2.end(), inserter(result, result.end()));

    cout << "Result: { ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << "}" << endl;

    return 0;
}
