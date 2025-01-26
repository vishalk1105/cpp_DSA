// Min bit flip is required to convert

#include <iostream>
using namespace std;

int main()
{
    int start = 10;
    int goal = 7;

    int ans = start ^ goal;

    int count = 0;
    while (ans != 0)
    {
        ans = ans & (ans - 1);
        count++;
    }
    cout << count;
}