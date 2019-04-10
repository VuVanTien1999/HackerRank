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


int getPairsCount(vector<int>& arr, int n, int sum)
{
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

	// return the half of twice_count 
	return twice_count / 2;
}


int main1()
{
	int numOfSet;
	cin >> numOfSet;

	for (int i = 0; i < numOfSet; i++) {
		int arrSize, sum;

		cin >> arrSize;
		cin >> sum;

		vector<int> dataArr;
		int j;
		for (j = 0; j < arrSize; j++) {
			int temp;
			cin >> temp;
			dataArr.push_back(temp);
		}

		// check
		/*
		// hash func
		unordered_set<int> comp;
		int count_half_sum = 0;
		int count_term = 0;

		for (j = 0; j < arrSize; j++) {
			if (sum % 2 == 0 && dataArr[j] == sum / 2) {
				count_half_sum++;
				continue;
			}
			else {
				if (comp.find(dataArr[j]) != comp.end()) {
					//count_term++;
					vector<int>::iterator ptr = dataArr.begin();
					advance(ptr, j);
					count_term += count(dataArr.begin(), ptr, sum - dataArr[j]);

				}
				comp.insert(sum - dataArr[j]);
			}
		}
		if (count_half_sum != 0)
			count_term += count_half_sum * (count_half_sum - 1) / 2;
		cout << count_term << endl;
		*/
		//cout << getPairsCount(dataArr, arrSize, sum) << endl;

		/*
		int count_term = 0;
		vector<int> comp; //complement
		for (int j = 0; j < arrSize; j++) {
			vector<int>::iterator ptr = dataArr.begin();
			advance(ptr, j);
			count_term += count(dataArr.begin(), ptr, sum - dataArr[j]);

			comp.push_back(sum - dataArr[j]);
		}

		cout << count_term << endl;
		*/

	}







	/*
	ofstream outfile;
	fstream infile;

	outfile.open("output.txt", ios::out | ios::in);
	infile.open("input.txt", ios::in);

	string numStr;
	//getline(infile, numStr);
	getline(cin, numStr);

	stringstream ssNumStr(numStr);
	int numOfLine;
	ssNumStr >> numOfLine;

	int* lengthString = new int[numOfLine];
	int i;
	for (i = 0; i < numOfLine; i++) {
		string lenStr;
		//getline(infile, lenStr);
		getline(cin, lenStr);

		stringstream ssLenStr(lenStr);
		ssLenStr >> lengthString[i];
	}

	cout << numOfLine << endl;
	for (i = 0; i < numOfLine; i++) {
		cout << lengthString[i] << endl;
	}

	cout << "results--------" << endl;

	for (i = 0; i < numOfLine; i++) {
		string str = "";
		for (int j = 0; j < lengthString[i]; j++) {
			str += "t";
		}
		cout << str << endl;
	}



	outfile.close();
	infile.close();
	delete[] lengthString;
	*/



	system("pause");

	return 0;
}