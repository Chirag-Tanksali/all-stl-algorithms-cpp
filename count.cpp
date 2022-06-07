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
    int target;
    cin>>target;
    int countt = count(v.begin(),v.end(),target);
    cout <<countt ;
    return 0;
}