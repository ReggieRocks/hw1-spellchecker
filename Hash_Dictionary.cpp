// HASH TABLE VERSION implementation of Dictionary (part3)
#include "Hash_Dictionary.h"

// Add a word to the dictionary
void Hash_Dictionary::insert(const string& word)
{
    words.insert(word);
}

// Check if a word exists in the dictionary
bool Hash_Dictionary::contains(const string& word) const
{
    return words.find(word) != words.end();
}

// Return how many words are in the dictionary
int Hash_Dictionary::size() const
{
    return words.size();
}
