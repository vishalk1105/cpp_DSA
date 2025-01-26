#include <iostream>
using namespace std;

int main()
{
    int n = 64;
    if ((n & (n - 1)) == 0)
        cout << "Power of two";
    else
        cout << "not power of two";
}