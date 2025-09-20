#include <iostream>

using namespace std;

int arraycollector(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

// int main()
// {
//     int cashsale[5] = {20, 30, 55, 44, 22};
//     int debtsale[4] = {52, 89, 78, 45};
//     int onlinesale[3] = {25, 56, 4};

//     int cashtotal = arraycollector(cashsale, 5);
//     int debtTotal = arraycollector(debtsale, 4);
//     int onlineTotal = arraycollector(onlinesale, 3);

//     int finalSum = cashtotal + debtTotal + onlineTotal;
//     cout << "total sale is " << finalSum << endl;
// }

int main()
{
    int cashsale[5] = {20, 30, 55, 44, 22};
    int debtsale[4] = {52, 89, 78, 45};
    int onlinesale[3] = {25, 56, 4};

    cout << "total sale is " << arraycollector(cashsale, 5) + arraycollector(debtsale, 4) + arraycollector(onlinesale, 3) << endl;
}