//remove all the duplicate string and put only original string(interview question)
#include <iostream>
#include <sstream>
#include <set>
using namespace std;

int main() {
    string str, word;
    set<string> uniqueWords;
    cout << "Enter a string: ";
    getline(cin, str);
    stringstream ss(str);

    while (ss >> word) {
        uniqueWords.insert(word);
    }

    cout << "Unique words: ";
    for (const string& w : uniqueWords) {
        cout << w << " ";
    }

    return 0;
}