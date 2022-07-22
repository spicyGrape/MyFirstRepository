/*#include <bits/stdc++.h>
 *using namespace std;
 *long long HANOI(long long num, long long ans[])
 *{
 *    if (ans[num] == 0)
 *    {
 *        ans[num] = HANOI(num - 1, ans) * 2 + 1;
 *    }
 *    return ans[num];
 *}
 *
 *int main()
 *{
 *    int n;
 *    cin >> n;
 *    if (n == 0)
 *    {
 *        cout << 0 << endl;
 *        return 0;
 *    }
 *    long long ans[n + 1] = {};
 *    ans[1] = 1;
 *    cout << HANOI(n, ans) << endl;
 *    return 0;
 *}
 */
//这题数据范围太大了要高精度
//第一次手打高精度。。。
//虽然可以高精度直接带公式，但是我还是想写一个模块化的高精度，反正这种东西早晚都会用到的。
//上面的想法估计不行，应为又要高精度又要记忆化，125MB的栈肯定会爆的QAQ
//以下重写
#include <bits/stdc++.h>
using namespace std;
void dou(int ans[])
{
    for (int i = 1; i <= 10000; ++i)
    {
        ans[i] *= 2;
    }
    for (int i = 1; i <= 10000; ++i)
    {
        if (ans[i] >= 10)
        {
            ++ans[i + 1];
            ans[i] -= 10;
        }
    }
    return;
}
int main()
{
    int ans[10001] = {};
    ans[1] = 1;
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "0" << endl;
        return 0;
    }
    for (int i = 1; i <= n; ++i)
    {
        dou(ans);
        // int weishu = 0;
        // for (int i = 10000; i >= 1; --i)
        //{
        //    if (ans[i] != 0)
        //    {
        //        weishu = i;
        //        break;
        //    }
        // }
        // for (int i = weishu; i >= 1; i--)
        //{
        //    printf("%d", ans[i]);
        // }
        // printf("\n");
    }
    ans[1] -= 1;
    int weishu = 0;
    for (int i = 10000; i >= 1; --i)
    {
        if (ans[i] != 0)
        {
            weishu = i;
            break;
        }
    }
    for (int i = weishu; i >= 1; i--)
    {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}