#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int m, t, s;
    scanf("%d%d%d", &m, &t, &s);
    if (t == 0)
    {
        printf("0");
        return 0;
    }
    else
    {
        for (; s > 0 && m > 0; s -= t)
        {
            m--;
        }
        cout << m << endl;
        // system("pause");

        return 0;
    }
}