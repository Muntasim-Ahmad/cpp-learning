#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Reversed array: ";
    for (int i = 7; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}