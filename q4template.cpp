#include <iostream>
#include <vector>
using namespace std;

template <typename T>
bool found(const vector<T>& v, T val) {
    for (const T& item : v) {
        if (item == val) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> intVec = {1, 2, 3, 4, 5};
    vector<string> stringVec = {"apple", "banana", "cherry"};

    int intSearch = 3;
    string stringSearch = "banana";

    // Testing with integer vector
    if (found(intVec, intSearch)) {
        cout << "Integer " << intSearch << " found in the vector." << endl;
    } else {
        cout << "Integer " << intSearch << " not found in the vector." << endl;
    }

    // Testing with string vector
    if (found(stringVec, stringSearch)) {
        cout << "String " << stringSearch << " found in the vector." << endl;
    } else {
        cout << "String " << stringSearch << " not found in the vector." << endl;
    }

    return 0;
}
