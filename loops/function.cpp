#include <iostream>
using namespace std;

// function without arguments
int printName()
{
    cout << "muntasim" << endl;
    return 0;
}

// function with arguments
int printAnyNAme(string name)
{
    cout << name << endl;
    return 0;
}

int main()
{
    cout << "hello world" << endl;
    printName();

    printAnyNAme("Imtiyaz");
    printAnyNAme("John");

    printAnyNAme("Abc");

       return 0;
}