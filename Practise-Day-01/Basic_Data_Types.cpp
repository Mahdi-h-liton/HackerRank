#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    long long int numbers;
    char ch;
    float num;
    double numb;

    cin >> number >> numbers >> ch >> num >> numb;

    cout << number << endl
         << numbers << endl
         << ch << endl
         << fixed << setprecision(3) << num << endl
         << fixed << setprecision(9) << numb << endl;

    return 0;
}