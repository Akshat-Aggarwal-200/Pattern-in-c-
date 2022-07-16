#include <iostream>
using namespace std;
int main()
{
    /*
        Printing reversed simple right angled triangle of n rows and going upto n colmumns while decrementing no of stars by 1 while moving to new row

        *****
        ****
        ***
        **
        *

        A reversed imple right angled triangle of 5 rows and going down to 1 colmumns

    */

    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) // For rows
    {
        for (int j = i; j >= 1; j--) // For column
        {
            cout << "*";
        }
        cout << endl; // After each row we have to move to a new line
    }

    return 0;
}