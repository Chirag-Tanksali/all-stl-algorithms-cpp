#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

vector<int> a={1,2,3,4,5};
if(is_sorted(a.begin(),a.end())){
    cout<<"Array is already in sorted order";
}else{
    cout<<"Not sorted";
}



return 0;
}