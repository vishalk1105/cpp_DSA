#include <iostream>
using namespace std;

int main()
{
    int n = 40;
    int d = (n & (n - 1));
    cout << d << endl;
}