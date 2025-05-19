#include <bits/stdc++.h>
using namespace std;

//factorial recursive function 
int factorial(int x){
   int sum=1;
   if(x!=0){
   sum = x*factorial(--x);
   }
   return sum;
}

int main(){
  int x;
  cout << "x : ";
  cin >> x;
  cout << factorial(x);
 }