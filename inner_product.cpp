//computes the inner product of 2 arrays i.e a[0]*v[0]+a[1]*v[1]...
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int init=0;
    int n;
    cin >> n;

    vector<int> a(n), v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int res = inner_product(a.begin(),a.end(),v.begin(),init);
    cout<<res;

    return 0;
}