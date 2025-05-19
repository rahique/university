#include <bits/stdc++.h>
using namespace std;

void print(float* x){
    cout<<"Floating : "<<*x<<endl;
}

void print(int* x){
    cout<<"Integers : "<<*x<<endl;
}

int main(){
    //float x = 4.5;
    //print(&x);
    int x = 4.5;
    print(&x);
}