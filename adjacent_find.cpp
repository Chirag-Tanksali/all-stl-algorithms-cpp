#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // vector<int> :: iterator it = adjacent_find(v.begin(), v.end());
    // cout << *it;


    int n1;
    cin >> n1;
    vector<string> a(n1);
    for (int i = 0; i < n1; i++)
    {
        cin>>a[i];
    }
    vector<string> :: iterator itr = adjacent_find(a.begin(), a.end());
    cout << *itr;

    return 0;
}