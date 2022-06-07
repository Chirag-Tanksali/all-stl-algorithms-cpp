#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> a(n);
    copy(v.begin(), v.end(),a.begin());
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<"  ";
    }
    return 0;
}