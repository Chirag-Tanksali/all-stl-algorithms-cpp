#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int comp(int x, int y)
{
    return x + y;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> result(n);
    adjacent_difference(v.begin(),v.end(),result.begin());
    for (int i = 0; i < n-1; i++)
    {
        cout<< result[i]<<" ";
    }
    cout<<endl;
    adjacent_difference(v.begin(),v.end(),result.begin(),comp);
    for (int i = 0; i < n-1; i++)
    {
        cout<< result[i]<<" ";
    }
    return 0;
}