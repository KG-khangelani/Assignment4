#include <iostream>
#include <vector>
using namespace std;

bool found(const vector<int>& v, int val) {
    for (int num : v) {
        if (num == val) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    int valueToSearch = 30;
    if (found(vec, valueToSearch)) {
        cout << "Value " << valueToSearch << " found in the vector." << endl;
    } else {
        cout << "Value " << valueToSearch << " not found in the vector." << endl;
    }
    return 0;
}
