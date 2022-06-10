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

    vector<int> :: iterator lower = lower_bound(v.begin(),v.end(),6);
    vector<int> :: iterator upper = upper_bound(v.begin(),v.end(),6);

    cout<<*lower<<endl;
    cout<<*upper<<endl;

    cout << "lower_bound for 6 at position "
        << (lower - v.begin() + 1) << '\n';
    cout << "upper_bound for 6 at position "
        << (upper - v.begin() + 1) << '\n';


    return 0;
}