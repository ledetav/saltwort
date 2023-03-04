#include <iostream>
#include <vector>

using namespace std;

void generate_combinations(vector<int>& combination, int n, int k, int offset) {
    if (k == 0) {
        for (int i : combination) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    for (int i = offset; i <= n - k; i++) {
        combination.push_back(i);
        generate_combinations(combination, n, k - 1, i + 1);
        combination.pop_back();
    }
}

int main() {
    int n, k;
    cin >> k >> n;

    vector<int> combination;
    generate_combinations(combination, n, k, 0);

    return 0;
}