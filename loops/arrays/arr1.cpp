#include <iostream>

using namespace std;

// int main()
// {

//     int nums[3] = {30, 40, 55};

//     num[2] = 50;

//     cout << nums[0] << endl;
//     cout << nums[2];
// }

// int main()
// {
//     int nums[3] = {30, 40, 50};
//     for (int i = 0; i < 3; i++)
//     {
//         cout << nums[i] << endl;
//     }
// }

int main()
{
    int nums[] = {30, 40, 50};

    int size = sizeof(nums) / sizeof(nums[0]);

    cout << size << " this is size" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }
}