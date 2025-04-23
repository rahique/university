#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int num1,num2;

	cout << "Enter your STRING : " ;
	cin >> s;

	cout << "Enter your INDEX & Ammount : " ;
	cin >> num1 >> num2;

	string output = s.substr(num1, num2);
	cout << output;

	return 0;
}
