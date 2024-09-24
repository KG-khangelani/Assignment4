#include "Dictionary.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Dictionary<int, string> parts;
    parts.add(100000, "tire");
    parts.add(100001, "wheel");
    parts.add(100002, "distributor");
    parts.add(100003, "air filter");

    parts.display();

    try {
        cout << "The part for key 100002 is: " << parts.find( 100002) << std::endl;
    } catch (const std::exception& e) {
        cout << e.what() << std::endl;
    }

    // Testing with another type of dictionary
    Dictionary<string, double> productPrices;
    productPrices.add("Milk", 3.99);
    productPrices.add("Bread", 2.49);

    productPrices.display();

    try {
        cout << "The price of Bread is: " << productPrices.find("Bread") << std::endl;
    } catch (const std::exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
