#include <iostream>

using namespace std;

int main()
{
    char c;
    /*
        This while loop only terminates when end-of-file with the command ^D.
    */
    while (cin.get(c))
        cout.put(c);
}