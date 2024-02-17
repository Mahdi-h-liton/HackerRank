#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;

    int sum = a + b;
    int absolute = abs(a - b);
    cout << sum << "\n"
         << absolute << endl;

    return 0;
}