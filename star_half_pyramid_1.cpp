#include <iostream>
using namespace std;
int main()
{
    /*
        Printing half pyramid or mirrored right angled triangle of n rows and going upto n colmumns while incrementing no of stars by 1 while moving to new row

            *
           **
          ***
         ****
        *****

        A half pyramid or mirrored right angled triangle of 5 rows and going down to 1 colmumns

    */
    int n;    // ? variable declaration for maximum number of rows
    cin >> n; // ? inputting maximum number of rows
    /*
    -> We have to print spaces first then we have to print star
    -> In first line we will print max_rows - 1 spaces and then we will print 1 star ie when i = 1    no_of_spaces = max - 1  no_of_stars = 1
    -> In second line we will print max_rows - 2 spaces and then we will print 2 stars ie when i = 2    no_of_spaces = max - 2  no_of_stars = 2
    -> In third line we will print max_rows - 3 spaces and then we will print 3 stars ie when i = 3.    no_of_spaces = max - 3  no_of_stars = 3
    -> From above equations we can deduce that
    ->    for ith row     no_of_spaces = max - i  and  no_of_stars = i
    */
    for (int i = 1; i <= n; i++) // For rows
    {
        for (int j = 1; j <= n - i; j++) // For initial spaces
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) // For stars
        {
            cout << "*";
        }
        cout << endl; // After each row we have to move to a new line
    }

    return 0;
}