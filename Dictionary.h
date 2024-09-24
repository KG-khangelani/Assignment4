#ifndef ASS4_DICTIONARY_H
#define ASS4_DICTIONARY_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Dictionary
{
public:
    Dictionary();
    void add(int key, const string &value); string
    find (int key) const;
    void display();
private:
    vector<int> keys;
    vector<string>
            values;
};
#endif //ASS4_DICTIONARY_H
