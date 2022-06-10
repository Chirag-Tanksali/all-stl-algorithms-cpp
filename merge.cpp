// Combines the elements in the sorted ranges [first1,last1) and [first2,last2), into a new range beginning at result with all its elements sorted.


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

    vector<int> result(m+n);

    merge(v.begin(),v.end(),a.begin(),a.end(),result.begin());

    for (int i = 0; i < m+n; i++)
    {
        cout<< result[i]<<"  ";
    }
    return 0;
}