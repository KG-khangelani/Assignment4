#ifndef ASS4_DICTIONARY_H
#define ASS4_DICTIONARY_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;

template <typename Keytype, typename Valuetype>
class Dictionary
{
    public:
        Dictionary();
        void add(Keytype key, Valuetype value);
        Valuetype find (Keytype key) const;
        void display() const;
    private:
        vector<Keytype> keys;
        vector<Valuetype> values;
};
#endif //ASS4_DICTIONARY_H
