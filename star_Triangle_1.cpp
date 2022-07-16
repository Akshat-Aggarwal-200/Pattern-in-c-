#include <iostream>
using namespace std;
int main()
{
    /*
        Printing Simple right angled triangle of n rows and going upto n colmumns while incrementing no of stars by 1 while moving to new row

        *
        **
        ***
        ****
        *****

        A Simple right angled triangle of 5 rows and going upto 5 colmumns

    */

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // For rows
    {
        for (int j = 1; j <= i; j++) // For column
        {
            cout << "*";
        }
        cout << endl; // After each row we have to move to a new line
    }

    return 0;
}