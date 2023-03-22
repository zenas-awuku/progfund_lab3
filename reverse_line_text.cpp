#include <iostream>

using namespace std;

int main()
{
    char c;
    int position = 0;
    char sentence[256]{'\0'};
    char reversed_sentence[256]{'\0'};

    cout << "Enter a line of text" << endl;
    while (cin.get(sentence[position]))
    // while (cin.get(c))
    {
        // sentence[position] = c;
        ++position;
    }

    cout << endl;
    for (int i = 0; i < position ; i++) 
    {
        reversed_sentence[i] = sentence[position-(1+i)];
    }

    for(auto i :reversed_sentence)
        cout << i;
    cout <<endl;
}