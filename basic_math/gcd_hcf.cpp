#include <iostream>

using namespace std;

int main()
{
    cout << "Enter numbers " << endl;
    int n1, n2;
    cin >> n1 >> n2;

    int gcd = 1;
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    cout << gcd << endl;
}