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
    vector<int> :: iterator it = find(v.begin(), v.end(), 10);
    cout << *it;

    if(it==v.end()){
        cout<<"Not Found";
    }else{
        cout<<"Found";
    }
    return 0;
}