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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if(equal(v.begin(),v.end(),a.begin())){
        cout<<"Both are equal";
    }else{
        cout<<"Not equal";
    }
    return 0;
}