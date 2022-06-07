//It is commonly used in dictionaries to arrange words alphabetically; it entails comparing elements that have the same position in both ranges consecutively against each other until one element is not equal to the other. The lexicographical comparison is the consequence of comparing these first non-matching components. This function is defined in <algorithm> header. 

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

string s1,s2;
getline(cin,s1);
getline(cin,s2);

if (lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end())){
    cout<<"s1 is lexicographically less than s2";
}else{
    cout<<"s1 is not lexicographically less than s2";
}

return 0;
}