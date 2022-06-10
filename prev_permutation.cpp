#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    string s = "abc";
    sort(s.begin(), s.end(),greater<char> ());
    do
    {
        cout << s << ' ';
    } while (prev_permutation(s.begin(), s.end()));
    cout << '\n';

    return 0;
}