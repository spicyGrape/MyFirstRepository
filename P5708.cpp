#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
double a, b, c, p, s;
int main()
{
    scanf("%lf%lf%lf", &a, &b, &c);
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1lf\n", s);
    // system("pause");
    return 0;
}