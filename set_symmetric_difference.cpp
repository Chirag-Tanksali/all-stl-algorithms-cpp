//Computes symmetric difference of two sorted ranges: the elements that are found in either of the ranges, but not in both of them are copied to the range beginning at d_first. The resulting range is also sorted.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;

    vector<int> v1(m);
    for(int i=0;i<m;i++)
        cin>>v1[i];

    vector<int> v2(n);
    for(int i=0;i<n;i++)
        cin>>v2[i];

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    vector<int> v(m);

    vector<int> :: iterator it;
    vector<int> :: iterator ls = set_symmetric_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

    for(it = v.begin();it!=ls;it++)
        cout<<*it<<" ";

return 0;
}