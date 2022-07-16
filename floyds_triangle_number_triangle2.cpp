#include <iostream>
using namespace std;
int main()
{
    /*
        Printing Simple right angled triangle of n rows and going upto n colmumns while printing numbers as shown below

        01
        02 03
        04 05 06
        07 08 09 10
        11 12 13 14 15

        A Simple right angled triangle of 5 rows and going upto 5 colmumns

    */

    int n;
    cin >> n;
    cout << endl;
    for (int i = 1, num = 1; i <= n; i++) // For rows
    {
        for (int j = 1; j <= i; j++, num++) // For column
        {
            if (num < 10) // ? Not needed by question used just for symmetry
            {
                cout << "0" << num << " ";
            }
            else
            {
                cout << num << " ";
            }
        }
        cout << endl; // After each row we have to move to a new line
    }

    return 0;
}