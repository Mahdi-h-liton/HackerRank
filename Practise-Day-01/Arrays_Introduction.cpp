#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int length;
    cin >> length;
    int arr[length];

    for (int i = 1; i <= length; i++)
    {
        cin >> arr[i];
    }

    // Array reverse;
    for (int i = length; i > 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}