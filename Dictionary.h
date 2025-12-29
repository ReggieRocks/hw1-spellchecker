// Dictionary.h sample.
// The .h is the header file.
#ifndef DICTIONARY_H_
#define DICTIONARY_H_

#include <iosfwd>   // std::ostream forward declaration
#include <string>   // std::string

class Dictionary {
public:
    Dictionary();
    ~Dictionary();

    Dictionary(const Dictionary&) = delete;
    Dictionary& operator=(const Dictionary&) = delete;

    // Inserts a pointer to a word. No-op if a duplicate (by string value) exists.
    void insert(std::string* wordPtr);

    // Returns true if the word exists in the dictionary.
    bool contains(const std::string& word) const;

    // Prints words in sorted order (one per line).
    void printInOrder(std::ostream& out) const;

    // Prints a simple tree structure (debug/grading output).
    void printStructure(std::ostream& out) const;

private:
    struct Node {
        explicit Node(std::string* w) : word(w), left(nullptr), right(nullptr) {}

        std::string* word;
        Node* left;
        Node* right;
    };

    Node* root = nullptr;

    // Helpers
    static void destroy(Node* n);
    static void insert(Node*& n, std::string* wordPtr);
    static bool contains(const Node* n, const std::string& word);
    static void printInOrder(const Node* n, std::ostream& out);
    static void printStructure(const Node* n, std::ostream& out, int depth);
};

#endif  // DICTIONARY_H_ 