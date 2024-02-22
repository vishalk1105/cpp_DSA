#include <iostream>

using namespace std;

int main()
{
    char ch = '*';

    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

/*

* * * * *
* * * *
* * *
* *
*

*/