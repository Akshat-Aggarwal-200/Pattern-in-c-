#include <iostream>
using namespace std;
int main()
{
    /*
    *    Printing hollow rectangle of n rows and m columns

    *    ******
    *    *    *
    *    *    *
    *    *    *
    *    ******

    *    A hollow rectangle of 5 rows and 6 columns

    */

    int rows, col;
    cin >> rows >> col;

    for (int i = 0; i < rows; i++) //* For rows
    {
        for (int j = 0; j < col; j++) //* For column
        {
            /*
        todo     In our statement we have to print '*' when
            ->   we are in first row or ,
            ->   we are in last row or ,
            ->   we are in first column or ,
            ->   we are in last column
            */
            if (i == (rows - 1) || i == 0 || j == 0 || j == (col - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl; //* After each row we have to move to a new line
    }

    return 0;
}