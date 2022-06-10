#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // string s ;
    // getline(cin,s);
    // sort(s.begin(), s.end());
    // int count = 0;
    // do
    // {
    //     cout << s << '\n';
    //     count++;
    // } while (next_permutation(s.begin(), s.end()));

    // cout<<endl<<count;

    vector<int> v {1, 2, 3};
    do
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}