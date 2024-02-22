
#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(int i, string &s)
{
    int len = s.size();
    if (i >= len / 2)
        return true;

    if (s[i] != s[(len - i - 1)])
    {
        return false;
    }
    return isPalindrome(i + 1, s);
}

int main()
{
    string s = "MADAM";
    bool isPali = isPalindrome(0, s);
    if (isPali)
    {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
}