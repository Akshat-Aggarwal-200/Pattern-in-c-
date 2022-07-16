#include <iostream>
using namespace std;
int main()
{
    /*


     *        *
     **      **
     ***    ***
     ****  ****
     **********
     **********
     ****  ****
     ***    ***
     **      **
     *        *


     */
    int n;
    cin >> n;
    /*
    todo-> We will create upper butterfly first
        -> For upper butterfly
        * -> In all rows maximum no of charachters = 2*n
        * -> In first row we have to print star at 1st and 2*n th position
        * -> In second row we have to print star at 1,2,2*n-1 and 2*nth position
        * -> And So on
        * We can say that if we are in ith row:-
        ? we have to print 2*(n-i) spaces , and
        ? we have to print i stars before space and i stars after space
    */
    for (int i = 1; i <= n; i++) //
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--) //
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}