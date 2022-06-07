#include<iostream>
#include<algorithm>
#include<cmath>
#include <numeric>
#include <cctype>
using namespace std;

int main() {

// power function
cout<<pow(5,2);
double power = pow(5.22,2);
cout<<power;

cout<<endl;

//sqrt function
cout<<sqrt(25);
double x=sqrt(26);
cout<<x;

cout<<endl;

//min and max function
int a=5,b=6,c=2;
cout<<min(min(a,b),c)<<endl;
cout<<max(max(a,b),c)<<endl;

//swap
int m=10,n=20;
swap(m,n);
cout<<m<<" "<<n<<endl;

//__gcd (#include <numeric>)

// cout<< __gcd(5,10)<<endl;
// cout<< __gcd(__gcd(50,20),10)<<endl;

//toupper() #include <cctype>
char ch='a';
cout<<char(toupper(ch))<<endl;

//tolower() #include <cctype>
char ch1='A';
cout<<char(tolower(ch1))<<endl;


//floor() and ceil()

cout<<floor(2.3)<<endl;
cout<<floor(2.8)<<endl;
cout<<ceil(2.8)<<endl;
cout<<ceil(2.3)<<endl;
cout<<round(2.8)<<endl;

return 0;
}