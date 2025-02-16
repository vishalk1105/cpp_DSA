#include <iostream>
using namespace std;

// int main()
// {
//     int arr[7] = {3, 2, 1, 8, 5, 2, 7};
//     int largest = arr[0];
//     int slargest = -1;
//     for (int i = 0; i <= 7; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//     }

//     for (int i = 0; i <= 7; i++)
//     {
//         if (slargest < arr[i] && arr[i] != largest)
//         {
//             slargest = arr[i];
//         }
//     }

//     cout << slargest << endl;
// }

// O(2N)

int main()
{
    int arr[8] = {3, 2, 1, 8, 7, 5, 2, 7};
    int largest = arr[0];
    int slargest = -1;
    for (int i = 0; i <= 8; i++)
    {

        if (arr[i] > largest && largest != arr[i])
        {
            slargest = largest;
            largest = arr[i];
        };
        if (arr[i] > slargest && arr[i] != largest)
        {
            slargest = arr[i];
        };
    }

    cout << slargest << endl;
}