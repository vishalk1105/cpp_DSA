#include <iostream>
using namespace std;
int main()
{
    int n = 13;
    int i = 2;
    if ((n & (1 << i)) != 0)
        cout << "the bit is set";
    else
        cout << "The bit is not set";

    (((n >> i) & 1) == 1)
        ? cout << "the bit is set"
        : cout << "The bit is not set";
}
// check 2nd bit is set or not