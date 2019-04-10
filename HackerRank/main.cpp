#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
	int sum = 9;
	vector<int> arr = { 3, 3, 6, 1, 9 };
	int n = arr.size();

	unordered_map<int, int> m;

	// Store counts of all elements in map m 
	for (int i = 0; i < n; i++)
		m[arr[i]]++;

	int twice_count = 0;

	// iterate through each element and increment the 
	// count (Notice that every pair is counted twice) 
	for (int i = 0; i < n; i++)
	{
		twice_count += m[sum - arr[i]];

		// if (arr[i], arr[i]) pair satisfies the condition, 
		// then we need to ensure that the count is 
		// decreased by one such that the (arr[i], arr[i]) 
		// pair is not considered 
		if (sum - arr[i] == arr[i])
			twice_count--;
	}

	cout << twice_count / 2 << endl;

	system("pause");

	return 0;
}