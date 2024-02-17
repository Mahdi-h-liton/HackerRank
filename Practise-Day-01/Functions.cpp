#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    int maximum_value = max({a, b, c, d});
    cout << maximum_value << endl;

    return 0;
}