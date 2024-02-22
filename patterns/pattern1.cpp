#include <iostream>
using namespace std;

int main()
{
    char ch = '*';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/