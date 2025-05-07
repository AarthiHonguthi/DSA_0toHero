//Convert String to Lowercase

#include <iostream>
#include <cctype> // for tolower()
using namespace std;

void toLowercase(string &str)
{
    for (char &ch : str)
    {
        ch = tolower(ch);
    }
}

int main()
{
    string str = "HeLLo WoRLd";
    toLowercase(str);
    cout << str << endl; // Output: hello world
    return 0;
}
