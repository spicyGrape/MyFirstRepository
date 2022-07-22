#include <bits/stdc++.h>
using namespace std;

int READ(int arr[])
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }
    return n;
}
void SPLIT(int arr[], long long l, long long r)
{
    // cout << "SPLIT Start" << endl;
    // cout << "l =" << l << " r = " << r << endl;
    int j = l, k = l;
    if (l >= r)
        return;
    while (k < r)
    {
        //    cout << "While done" << endl;
        if (arr[k] >= arr[r])
        {
            k++;
        }
        if (arr[k] < arr[r])
        {
            int temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
            k++;
            j++;
            //       cout << "j=" << j << endl;
        }
    }
    if (j != k)
    {
        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
    };
    // cout << l << endl
    //      << j << endl
    //      << k << endl;
    SPLIT(arr, l, j - 1);
    SPLIT(arr, ++j, r);
    return;
}

int main()
{
    int arr[100000] = {};
    int size = READ(arr);
    // cout << "READ done" << endl;
    SPLIT(arr, 1, size);
    for (int i = 1; i <= size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}