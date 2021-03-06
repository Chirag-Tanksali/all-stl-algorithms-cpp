//nth_element is a partial sorting algorithm that rearranges elements in [first, last) such that:

// The element pointed at by nth is changed to whatever element would occur in that position if [first, last) were sorted.
// All of the elements before this new nth element are less than or equal to the elements after the new nth element.


// C++ program to demonstrate the use of std::nth_element
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 }, i;

	// Using std::nth_element with n as 5
	std::nth_element(v, v + 4, v + 8);

	// Since, n is 5 so 5th element should be sorted
	for (i = 0; i < 8; ++i) {
		cout << v[i] << " ";
	}
	return 0;
}

//Here, the fifth element is 33, and all elements to its left are smaller than it and all elements to its right are greater than it.