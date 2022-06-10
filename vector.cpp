#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

vector<int> v;
v.push_back(1);
v.push_back(12);

//Size and capacity
cout<<"Size is " <<v.size()<<" "<<"Capacity is "<<v.capacity()<<endl;
v.push_back(10);
v.push_back(121);
v.push_back(121);
cout<<"Size is " <<v.size()<<" "<<"Capacity is "<<v.capacity()<<endl;
v.pop_back();
v.pop_back();

for(auto i : v)
    cout<<i<<" ";
cout<<"\n";

//front and back
cout<<v.front()<<" "<<v.back();
cout<<endl;

//begin and end
vector<int> :: iterator it= v.begin();
vector<int> :: iterator itr= v.end()-1;

cout<<*it<<" "<<*itr<<endl;

//Assign
v.assign(10,30);

//empty
if(v.empty()){
    cout<<"Empty"<<endl;
}else{
    cout<<"Not empty"<<endl;
}

//clear
v.clear();

if(v.empty()){
    cout<<"Empty"<<endl;
}else{
    cout<<"Not empty"<<endl;
}

for(auto i : v)
    cout<<i<<" ";
cout<<endl;


return 0;
}