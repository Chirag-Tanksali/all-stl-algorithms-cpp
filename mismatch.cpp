#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    int m,n;
    cin >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    pair< vector<int>::iterator,
    vector<int>::iterator > mispair;

    mispair = mismatch(v.begin(),v.end(),a.begin());
    
    cout<<*mispair.first<<endl;
    cout<<*mispair.second<<endl;
    return 0;
}