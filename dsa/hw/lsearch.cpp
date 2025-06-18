#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,n, check=1;
    cout<<"Enter the Array length : ";
    cin>>l;
    cout << "Enter The searching number : ";
    cin >> n;
    int myArr[l+1];
    cout << "Enter the Array : ";
    myArr[l+1]=n;
    for(int i=0;i<l;i++){
        cin >> myArr[i];
    }
    
    for(int i=0; i<l;i++){
        if(myArr[i] == n){
            cout << "Found the Number on index : "<< i << endl;
            check = 0;
        }

    }
    if(check){
            cout << "Your number was not found";
        }
    return 0;
}
