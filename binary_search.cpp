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
    int search;
    cin >> search;

    // int result= binary_search(v.begin(), v.end(), search);

    // if(result==true){
    //     cout<<"Element found";
    // }else{
    //     cout<<"Not found";
    // }

    if (binary_search(v.begin(), v.end(), search))
    {
        cout << "Element found";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}