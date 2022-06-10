// std :: remove

// It is defined in <algorithm> library. It removes value from range. Transforms the range [first,last) into a range with all the elements that compare equal to val removed, and returns an iterator to the new end of that range.

// CPP program to illustrate
// std::remove and std::remove_if
// algorithm

// Function to check whether
// the element is odd or not.

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool IsOdd(int i) { return ((i % 2) == 1); }

// Driver code
int main()
{
    vector<int> vec1{
        10, 20, 30, 30, 20, 10, 10, 20};
    vector<int> vec2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Print original vector
    cout << "Original vector : ";
    for (int i = 0; i < vec1.size(); i++)
        cout << " " << vec1[i];
    cout << "\n";

    // Iterator that store the position of last element
    vector<int>::iterator pend;

    // std ::remove function call
    pend = remove(vec1.begin(), vec1.end(), 20);

    // Print the vector
    cout << "After remove : ";
    for (vector<int>::iterator p = vec1.begin();
         p != pend; ++p)
        cout << ' ' << *p;
    cout << '\n';

    // Print original vector
    cout << "\nOriginal vector : ";
    for (int i = 0; i < vec2.size(); i++)
        cout << " " << vec2[i];
    cout << "\n";

    // std ::remove_if function call
    pend = remove_if(vec2.begin(), vec2.end(), IsOdd);

    // the same of the above can be done using lambda
    // function in 1 line
    pend = remove_if(
        vec2.begin(), vec2.end(),
        [](int i)
        { return ((i % 2) == 1); });

    // Print the vector
    cout << "After remove_if : ";
    for (vector<int>::iterator q = vec2.begin();
         q != pend; ++q)
        cout << ' ' << *q;
    cout << '\n';

    return 0;
}
