#include <iostream>
#include <vector>
#include <numeric>
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
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum;
    return 0;
}