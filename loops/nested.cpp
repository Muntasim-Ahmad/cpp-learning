#include <iostream>
using namespace std;

int main()
{
    cout << "starting for loop" << endl;

    for (int i = 1; i < 4; i++)
    {
        cout << i << endl;
        for (int i = 55; i < 58; i++)
        {
            cout << i << endl;
            for (int i = 75; i < 78; i++)
            {
                cout << i << endl;
            }
        }
    }
}