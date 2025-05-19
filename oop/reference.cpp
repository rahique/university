#include <bits/stdc++.h>
using namespace std;
void swaping(int* x, int* y){
   swap(*x, *y);
}
int main(){
  int x, y;
  cout << "x : ";
  cin >> x;
  cout << "y : ";
  cin >> y;
  cout << "before Swap" << endl;
  cout << x << " " << y << endl;
  swaping(&x, &y);
  cout << "After Swap" << endl;
  cout << x << " " << y << endl;
  }