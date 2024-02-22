#include <iostream>
using namespace std;

int count = 0;
void printName()
{
    if (count == 5)
        return;
    cout << "Vishal" << endl;
    count++;
    printName();
}
int main()
{
    printName();
}
