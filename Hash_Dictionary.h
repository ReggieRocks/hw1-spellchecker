// HASH TABLE: DECLARATION:
#ifndef HASH_DICTIONARY_H
#define HASH_DICTIONARY_H

#include <unordered_set>
#include <string>

using namespace std;

class Hash_Dictionary {
private:
    unordered_set<string> words;   // hash-based storage

public:
    // Add a word to the dictionary
    void insert(const string& word);

    // Check if a word exists
    bool contains(const string& word) const;

    // Optional: number of words stored
    int size() const;
};

#endif
