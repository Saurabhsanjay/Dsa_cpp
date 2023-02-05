#include <iostream>
using namespace std;

char printGrade(int a)
{
    switch (a / 10)
    {
    case 10:
    case 9:
        return 'A';
    case 8:
        return 'B';
    case 7:
        return 'C';
    default:
        return 'D';
    }
}

int main()
{
    int a;
    cin >> a;
    char finalGrade = printGrade(a);
    cout << finalGrade << endl;
    return 0;
}