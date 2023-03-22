#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string line_of_words;
    vector<string> array_of_words;
    string word;
    

    cout << "Enter a line of words: ";
    getline(cin, line_of_words);

    stringstream s(line_of_words);
    while (s >> word)
    {

        array_of_words.push_back(word);
    }
    
    string longest_word = array_of_words[0];
    for(auto i : array_of_words) {
        if(i.length() > longest_word.length())
        longest_word = i;
    }

    cout << "Word: " << longest_word << endl << "Length: " << longest_word.length() << endl;
    
    
}