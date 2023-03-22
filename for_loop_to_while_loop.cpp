#include <iostream>

using namespace std;

int main()
{

    int max_length{50};
    char input_line[max_length];
    int count{0};

    cout << "Enter a string: ";
    cin >> input_line;

    for (auto ch : input_line)
        cout << ch;
    cout << endl;

    // For Loop Implementation
    for (int i = 0; i < max_length; i++)
    {
        if (input_line[i] == '?')
        {
            ++count;
        }
    }

    cout << "Count for for loop'?': " << count << endl;


    // While Loop Implementation
    int i{0};
    count = 0;
    while (i < max_length)
    {
        if (input_line[i] == '?')
        {
            ++count;
        }
        ++i;
    }


    cout << "Count for while loop'?': " << count << endl;
}