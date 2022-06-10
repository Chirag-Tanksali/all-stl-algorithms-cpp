//Rearranges the elements in the range [first,last), in such a way that the elements before middle are the smallest elements in the entire range and are sorted in ascending order, while the remaining elements are left without any specific order.

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
    int m;
    cin>>m;

    vector<int> :: iterator it;
    partial_sort(v.begin(),v.begin()+m,v.end());
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}