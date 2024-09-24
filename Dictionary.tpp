#include "Dictionary.h"
#include <string>
#include <iostream>

using namespace std;

template<typename Keytype, typename Valuetype>
Dictionary<Keytype, Valuetype>::Dictionary()= default;

template<typename Keytype, typename Valuetype>
void Dictionary<Keytype, Valuetype>::add(Keytype key, Valuetype value)
{
    keys.push_back(key);
    values.push_back(value);
}

template<typename Keytype, typename Valuetype>
Valuetype Dictionary<Keytype, Valuetype>::find (Keytype key) const
{
    string value = " ";
    for (unsigned int i = 0; i < keys.size(); i++)
        if (key == keys[i]) {
            value = values[i];
        }
    if (value == " ") {
        return "no such key on the dictionary";
    } else {
        return value;
    }
}

template<typename Keytype, typename Valuetype>
void Dictionary<Keytype, Valuetype>::display() const
{
    for (unsigned int i = 0; i < keys.size(); i++) {
        cout << keys[i] << ' ' << values[i] << endl;
    }
} 