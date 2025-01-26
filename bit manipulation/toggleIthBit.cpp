#include <iostream>
using namespace std;

int main()
{
    int n = 13;
    int i = 2;

    int d = (n ^ (1 << i));
    cout << d << endl;
}