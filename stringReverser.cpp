#include <iostream>
#include <string>

using namespace std;

void reverseString(const string &s)
{
    size_t numChars = s.size();
    
    if (numChars == 1)
        cout << s << endl;
    else
    {
        cout << s.at(numChars - 1);
        reverseString(s.substr(0, numChars - 1));
    }
}

int main()
{
    string toBeReversed;
    
    cout << "String to be reversed: " << endl;
    getline(cin, toBeReversed);
    
    reverseString(toBeReversed);
    
	return 0;
}