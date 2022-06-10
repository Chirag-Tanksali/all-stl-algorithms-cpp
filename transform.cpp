#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int square(int a){
    return a*a;
}


// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     vector<int> res(n);
//     transform(v.begin(),v.end(),res.begin(),square);

//     for(int i=0;i<n;i++){
//         cout<<res[i]<<" ";
//     }
//     return 0;
// }

int main()
{
  int arr1[] = {1, 2, 3};
  int arr2[] = {4, 5, 6};
  int n = sizeof(arr1)/sizeof(arr1[0]);
  int res[n];
 
  // Single line code to add arr1[] and arr2[] and
  // store result in res[]
  transform(arr1, arr1+n, arr2, res, plus<int>());
 
  for (int i=0; i<n; i++)
    cout << res[i] << " ";

    return 0;
}