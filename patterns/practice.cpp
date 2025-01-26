#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    /*   for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < n; j++)
           {
               cout << " * "
                    << " ";
           }
           cout << endl;
       }

Ans       4
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *

   */

    /* for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < i + 1; j++)
         {
             cout << " * "
                  << " ";
         }
         cout << endl;
     }

 ans-->    4
  *
  *   *
  *   *   *
  *   *   *   *

  */

    /*
    for (int i = 0; i < n; i++)
       {
           for (int j = 1; j <= i + 1; j++)
           {
               cout << j << " ";
           }
           cout << endl;
       }
 ans-->  4
   1
   1 2
   1 2 3
   1 2 3 4
   */

    /*  for (int i = 1; i <= n; i++)
       {
           for (int j = 0; j < i; j++)
           {
               cout << i << " ";
           }
           cout << endl;
       }
ans --> 4
1
2 2
3 3 3
4 4 4 4
   */

    /*  for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < n - i; j++)
           {
               cout << " * "
                    << " ";
           }
           cout << endl;
       }

ans -->4
 *   *   *   *
 *   *   *
 *   *
 *

   */

    /*  for (int i = 0; i < n; i++)
      {
          for (int j = 1; j <= n - i; j++)
          {
              cout << j << " ";
          }
          cout << endl;
      }
ans -->5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
      */

    /*   for (int i = 0; i < n; i++)
       {

           for (int j = 0; j < n - i; j++)
           {
               cout << "   "
                    << " ";
           }

           for (int k = 0; k < n + 2 * i - 2; k++)
           {
               cout << " * "
                    << " ";
           }
           cout << endl;
       }
 Ans-->  3
                *
            *   *   *
        *   *   *   *   *
       */

    /*    for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < i; j++)
            {
                cout << "   "
                     << " ";
            }
            for (int k = 0; k < 2 * n - 2 * i - 1; k++)
            {
                cout << " * "
                     << " ";
            }
            cout << endl;
        }

ans --> 4
 *   *   *   *   *   *   *
     *   *   *   *   *
         *   *   *
             *

*/

    /*   for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < n + 2 * i - 2; k++)
            {
                cout << "*";
            }
            for (int l = 0; l < n - i - i; l++)
            {
                cout << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < n - 2 * i + 2; k++)
            {
                cout << "*";
            }
            cout << endl;
        }

ans ---> 3
  *
 ***
*****
*****
 ***
  *
        */

    for (int i = 1; i <= n; i++)
    {
        if (i <= n / 2)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*"
                     << " ";
            }
        }
        else
        {
            for (int j = i; j <= n - i + i; j++)
            {
                cout << "*"
                     << " ";
            }
        }
        cout << endl;
    }
}