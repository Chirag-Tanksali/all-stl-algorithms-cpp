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
    fill(v.begin(), v.end(), 0);
    for (int i = 0; i < n; i++)
    {
        cout<< v[i]<<" ";
    }
    return 0;
}