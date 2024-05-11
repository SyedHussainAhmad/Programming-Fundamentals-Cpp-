// Method no 1;
/*
#include<iostream>
using namespace std;

int main()
{
    int rows = 6;

    //cout << "Enter the number of rows : ";
    //cin >> rows;
    int num = 0;
    for (int i = 1; i <= rows; i = i + 1)
    {
        num = num + 1;
        for (int j = 1; j <= rows; j = j + 1)
        {
            cout << (j == num) ? 1 : 0;
        }
        cout << '\n';
    }
    cout << endl;
    return 0;
}
*/

// Method no 2;
/*
#include<iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter the number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i = i + 1)
    {
        for (int j = 1; j <= rows; j = j + 1)
        {
            cout << (j == i) ? 1 : 0;
        }
        cout << '\n';
    }
    cout << endl;
    return 0;
}
*/