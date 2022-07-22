#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        cout << "I love Luogu!";
    }
    else if (T == 2)
    {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3)
    {
        cout << 14 / 4 << endl
             << 14 / 4 * 4 << endl
             << 2 << endl;
    }
    else if (T == 4)
    {
        cout << 166.667 << endl;
    }
    else if (T == 5)
    {
        printf("15");
    }
    else if (T == 6)
    {
        cout << sqrt(6 * 6 + 9 * 9) << endl;
    }
    else if (T == 7)
    {
        printf("110\n90\n0\n");
    }
    else if (T == 8)
    {
        cout << "31.4159" << endl
             << 25.0 * 3.141593 << endl
             << 125 * 3.141593 * 4.0 / 3 << endl;
    }
    else if (T == 9)
    {
        int ans = 1;
        for (int i = 3; i >= 1; i--)
        {
            ans = ans + 1;
            ans *= 2;
        }
        cout << ans << endl;
    }
    else if (T == 10)
    {
        cout << 9 << endl; // 9？
    }
    else if (T == 11)
    {
        float a = 100;
        float b = 3;
        cout << a / b << endl;
    }
    else if (T == 12)
    {
        cout << 13 << endl
             << "R" << endl;
    }
    else if (T == 13)
    {
        cout << 16;
    }
    else if (T == 14)
    {
        cout << 50 << endl;
    }
    system("pause");
    return 0;
}