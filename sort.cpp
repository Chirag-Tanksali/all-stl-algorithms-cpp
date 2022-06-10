//It runs in O(NlogN)

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
    
    //sort(v.begin(),v.end()); //Sorts in ascending order


    sort(v.begin(),v.end(),greater<int>()); //Sorts in Descending order

    for(auto i : v)
        cout<<i<<" ";
    
    return 0;
}