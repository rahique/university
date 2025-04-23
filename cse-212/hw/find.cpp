#include <bits/stdc++.h>
using namespace std;
int main(){

	string line, pattern;
	
	cout << "Write Your Line : ";
	getline(cin >> ws, line);

	cout << "Write the Pattern to find : ";
	getline(cin>>ws, pattern);

	int output = line.find(pattern);
	cout << output;
	
	return 0;
}
