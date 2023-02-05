#include <iostream>
using namespace std;

char printGrade(int a)
{
    if (a >= 90)
    {
        return 'A';
        /* code */
    }
    else if (a >= 80)
    {
        return 'B';
        /* code */
    }
    else if (a >= 70)
    {
        return 'C';
        /* code */
    }
    else
    {
        return 'D';
        /* code */
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