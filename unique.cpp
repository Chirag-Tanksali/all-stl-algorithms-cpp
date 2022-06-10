#include <iostream>
#include <vector>
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
    sort(v.begin(),v.end());
    vector<int> :: iterator it,st;

    it = unique(v.begin(),v.end());


    // v.erase(it, v.end()); 


    for(st=v.begin();st!=it;st++){
        cout<<*st<<" ";
    }
    return 0;
}