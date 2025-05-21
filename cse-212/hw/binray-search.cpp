#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, find;
	cout << "Enter the Length of the Arrya : ";
	cin >> n;
	int myArr[n];

	cout << "Enter the Array elements : ";
	for (int i = 0; i < n; i++)
	{
		cin >> myArr[i];
	}

	// Selection Sort
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (myArr[i] > myArr[j])
			{
				int temp = myArr[i];
				myArr[i] = myArr[j];
				myArr[j] = temp;
			}
		}
	}
	// birnary search
	cout << "Enter finding Number : ";
	cin >> find;
	int start = 0, end = n - 1;
	bool found = false;

	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (myArr[mid] == find)
		{
			cout << "Found it: " << myArr[mid] << endl;
			found = true;
			break;
		}
		else if (myArr[mid] < find)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}

	if (!found)
	{
		cout << "Did not find it." << endl;
	}
}
