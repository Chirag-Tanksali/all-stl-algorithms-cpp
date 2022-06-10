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
    // vector<int> :: iterator it = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

    // for(it = v.begin();it!=v.end();it++)
    //     cout<<*it<<" ";

    // The above loop gives 0s at the end.The solution is to add another iterator 

    vector<int> :: iterator it;
    vector<int> :: iterator ls = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

    for(it = v.begin();it<ls;it++)
        cout<<*it<<" ";

return 0;
}