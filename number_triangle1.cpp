#include <iostream>
using namespace std;
int main()
{
    /*
        Printing Simple right angled triangle of n rows and going upto n colmumns while printing current_no_of_row no_of_row time

        1
        22
        333
        4444
        55555

        A Simple right angled triangle of 5 rows and going upto 5 colmumns

    */

    int n;
    cin >> n;

    for (int i = 1, num = 1; i <= n; i++, num++) // For rows
    {
        for (int j = 1; j <= i; j++) // For column
        {
            cout << num;
        }
        cout << endl; // After each row we have to move to a new line
    }

    return 0;
}