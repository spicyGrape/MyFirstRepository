#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long s = 0;
    long long v = 0;
    cin >> s >> v;
    int time = s / v;
    if (time * v != s)
        time++;
    time += 10;
    int hour = 8;
    int min = 0;
    min -= time;
    while (min < 0)
    {
        min += 60;
        hour -= 1;
    }
    while (hour < 0)
        hour += 24;
    if (hour < 10)
    {
        cout << "0" << hour << ":";
    }
    else
    {
        cout << hour << ":";
    }
    if (min < 10)
        cout << "0" << min << endl;
    else
        cout << min << endl;
    return 0;
}