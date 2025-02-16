#include <iostream>
#include <array>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 5, 3, 4};
    int length = std::size(arr);

    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "unsorted" << endl;
        }
    }
}