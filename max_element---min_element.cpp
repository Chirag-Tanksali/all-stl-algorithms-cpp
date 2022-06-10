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

    vector<int>::iterator it = max_element(v.begin(), v.end());

    cout << *it << endl;

    vector<int>::iterator itr = min_element(v.begin(), v.end());

    cout << *itr << endl;

    return 0;
}