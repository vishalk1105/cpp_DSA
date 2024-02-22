#include <iostream>
using namespace std;

int functionalfact(int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 1;
    }
    return n * functionalfact(n - 1);
}

int main()
{
    int n;
    cout << "Enter Number ";
    cin >> n;

    int factorial = functionalfact(n);
    cout << factorial << endl;
}