#include <iostream>
using namespace std;
int main()
{
    /*
        Printing Simple rectangle of n rows and m columns

        ******
        ******
        ******
        ******

        A rectangle of 4 rows and 6 columns

    */

    int rows, col;
    cin >> rows >> col;

    for (int i = 0; i < rows; i++) // For rows
    {
        for (int j = 0; j < col; j++) // For column
        {
            cout << "*";
        }
        cout << endl; // After each row we have to move to a new line
    }

    return 0;
}