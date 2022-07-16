#include <iostream>
using namespace std;
int main()
{
    /*
    -> Pattern is of the form
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    -> First row contains maximum number of columns and maximum mumbers as we go down number of columns decreases with decrease in number
    */
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1, num = 1; j <= i; j++, num++)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}